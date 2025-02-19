# --------------------------------------------------------------------------------------------------
# Example 7. 3D Steel W-section Frame
#			Silvia Mazzoni & Frank McKenna, 2006
# nonlinearBeamColumn element, inelastic fiber section
# --------------------------------------------------------------------------------------------------

# Model setup
wipe;										# clear memory of all past model definitions

source LibUnitsSI.tcl;						# define units
source DisplayPlane.tcl;					# procedure for displaying a plane in model
source DisplayModel3D.tcl;					# procedure for displaying 3D perspectives of model
source Wsection.tcl;						# procedure to define fiber W section

set dataDir Data;							# set up name of data directory -- remove
file mkdir $dataDir; 						# create data directory
# set GMdir "../GMfiles";					# ground-motion file directory

model BasicBuilder -ndm 3 -ndf 6;			# Define the model builder, ndm=#dimension, ndf=#dofs

# Frame geometry
set LCol [expr 2*$m];						# column height (parallel to Y axis)
set LBeam [expr 2*$m];						# beam length (parallel to X axis)
set LGird [expr 2*$m];						# girder length (parallel to Z axis)

set normDir 2;								# normal direction: Y direction
set NStory 1;								# number of stories above ground level
set NBayX 1;								# number of bays in X direction
set NBayZ 1;								# number of bays in Z direction

# Nodal coordinates
set X1 0.0;
set X2 [expr $X1 + $LBeam];
set Y1 0.0;
set Y2 [expr $Y1 + $LCol];
set Z1 0.0;
set Z2 [expr $Z1 + $LGird];

node 111 $X1 $Y1 $Z1;						# frame 1
node 112 $X2 $Y1 $Z1;
node 121 $X1 $Y2 $Z1;
node 122 $X2 $Y2 $Z1;

node 211 $X1 $Y1 $Z2;						# frame 2
node 212 $X2 $Y1 $Z2;
node 221 $X1 $Y2 $Z2;
node 222 $X2 $Y2 $Z2;

# Rigid floor diaphragm
set RigidDiaphragm ON ;						# options: ON, OFF. specify this before the analysis parameters are set the constraints are handled differently.
set Xa [expr ($X2 + $X1)/2];				# mid-span coordinate for rigid diaphragm
set Za [expr ($Z2 + $Z1)/2];

node 323 $Xa $Y2 $Za;						# master nodes for rigid diaphragm in center of each diaphragm
fix 323 0  1  0  1  0  1;					# constraints
rigidDiaphragm $normDir 323 121 122 221 222;

# determine support nodes where ground motions are input, for multiple-support excitation
# set iSupportNode "111 112 211 212"

# Boundary conditions
fixY 0.0  1 1 1 1 1 1;						# fix all Y=0.0 nodes

# calculated model parameters, particular to this model
# Set up parameters that are particular to the model for displacement control
set ctrlNode 121;								# node where displacement is read for displacement control
set ctrlDOF 1;								# degree of freedom of displacement read for displacement control
set HBuilding $Y2;								# total building height

# Sections
set SectionType FiberSection;					# options: Elastic FiberSection

set ColSecTag 1;
set BeamSecTag 2;
set GirdSecTag 3;

if {$SectionType == "Elastic"} {
	# material properties:
	set Es [expr 200.*$GPa];					# steel Young's Modulus
	set nu 0.26;								# Poisson's ratio
	set Gs [expr $Es/(2.*(1 + $nu))];  			# torsional stiffness modulus
	set J $Ubig;								# set large torsional stiffness
	
	# column sections: W6x15
	set AgCol [expr 28.42*$cm2];				# cross-sectional area
	set IzCol [expr 1206.*$cm4];				# moment of Inertia
	set IyCol [expr 387.*$cm4];					# moment of Inertia
	
	# beam sections: W6x15
	set AgBeam [expr 28.42*$cm2];				# cross-sectional area
	set IzBeam [expr 1206.*$cm4];				# moment of Inertia
	set IyBeam [expr 387.*$cm4];				# moment of Inertia
	
	# girder sections: W6x15
	set AgGird [expr 28.42*$cm2];				# cross-sectional area
	set IzGird [expr 1206.*$cm4];				# moment of Inertia
	set IyGird [expr 387.*$cm4];				# moment of Inertia

	section Elastic $ColSecTag $Es $AgCol $IzCol $IyCol $Gs $J
	section Elastic $BeamSecTag $Es $AgBeam $IzBeam $IyBeam $Gs $J
	section Elastic $GirdSecTag $Es $AgGird $IzGird $IyGird $Gs $J

	set matIDhard 1;							# material numbers for recorder (this stressstrain recorder will be blank, as this is an elastic section)

} elseif {$SectionType == "FiberSection"} {
	# material properties 
	set Fy [expr 250.*$MPa];
	set Fsu [expr 400.*$MPa];
	set Esu 0.20;
	set Esh 0.08;
	set Eshi 0.15;
	set Fshi [expr 350.*$MPa];
	set Es [expr 200.*$GPa];					# Steel Young's Modulus
	set nu 0.26;
	set Gs [expr $Es/(2.*(1 + $nu))];  			# Torsional stiffness Modulus
	set b 0.01;
	set R0 18.;
	set cR1 0.925;
	set cR2 0.15;
	set a1 0.;
	set a2 1.;
	set a3 0.;
	set a4 1.;
	set sigInit 0.0;
	set matIDhard 1;
	
	# uniaxialMaterial Steel02 $matIDhard $Fy $Es $b $R0 $cR1 $cR2 $a1 $a2 $a3 $a4 $sigInit;
	uniaxialMaterial Dodd_Restrepo $matIDhard $Fy $Fsu $Esh $Esu $Es $Eshi $Fshi

	# column sections: W6x15
	set d [expr 152.*$mm];	# depth
	set bf [expr 152.*$mm];	# flange width
	set tf [expr 6.6*$mm];	# flange thickness
	set tw [expr 5.8*$mm];	# web thickness
	set nfdw 16;		# number of fibers along dw
	set nftw 2;			# number of fibers along tw
	set nfbf 16;		# number of fibers along bf
	set nftf 4;			# number of fibers along tf
	Wsection  $ColSecTag $matIDhard $d $bf $tf $tw $nfdw $nftw $nfbf $nftf $Ubig
	
	# beam sections: W6x15
	set d [expr 152.*$mm];	# depth
	set bf [expr 152.*$mm];	# flange width
	set tf [expr 6.6*$mm];	# flange thickness
	set tw [expr 5.8*$mm];	# web thickness
	set nfdw 16;		# number of fibers along dw
	set nftw 2;			# number of fibers along tw
	set nfbf 16;		# number of fibers along bf
	set nftf 4;			# number of fibers along tf
	Wsection  $BeamSecTag $matIDhard $d $bf $tf $tw $nfdw $nftw $nfbf $nftf $Ubig
	
	# girder sections: W6x15
	set d [expr 152.*$mm];	# depth
	set bf [expr 152.*$mm];	# flange width
	set tf [expr 6.6*$mm];	# flange thickness
	set tw [expr 5.8*$mm];	# web thickness
	set nfdw 16;		# number of fibers along dw
	set nftw 2;			# number of fibers along tw
	set nfbf 16;		# number of fibers along bf
	set nftf 4;			# number of fibers along tf
	Wsection  $GirdSecTag $matIDhard $d $bf $tf $tw $nfdw $nftw $nfbf $nftf $Ubig
} else {
	puts "No section has been defined"
	return -1
}

# Elements
# geometric transformations of element
set IDColTransf 1; 									# all columns
set IDBeamTransf 2; 								# all beams
set IDGirdTransf 3; 								# all girders
set ColTransfType PDelta;							# options, Linear PDelta Corotational 
geomTransf $ColTransfType $IDColTransf  0 0 1; 		# only columns can have PDelta effects (gravity effects)
geomTransf Linear $IDBeamTransf 0 0 1;
geomTransf Linear $IDGirdTransf 1 0 0;

# define beam-column elements
set np 5;											# number of Gauss integration points for nonlinear curvature distribution

# Frame 1
# columns
element nonlinearBeamColumn 1111 111 121 $np $ColSecTag $IDColTransf;		# level 1-2
element nonlinearBeamColumn 1112 112 122 $np $ColSecTag $IDColTransf;
# beams
element nonlinearBeamColumn 1221 121 122 $np $BeamSecTag $IDBeamTransf;		# level 2

# Frame 2
# columns
element nonlinearBeamColumn 2111 211 221 $np $ColSecTag $IDColTransf;		# level 1-2
element nonlinearBeamColumn 2112 212 222 $np $ColSecTag $IDColTransf;
# beams
element nonlinearBeamColumn 2221 221 222 $np $BeamSecTag $IDBeamTransf;		# level 2

# girders
element nonlinearBeamColumn 1321 121 221 $np $GirdSecTag $IDGirdTransf;		# level 2
element nonlinearBeamColumn 1322 122 222 $np $GirdSecTag $IDGirdTransf;

# Define recorders
recorder Node -file $dataDir/DFree.out -time -node 121 122 221 222 323 -dof 1 disp;										# displacements of free node
recorder Node -file $dataDir/RBase.out -time -node 111 112 211 212 -dof 1 reaction;								# support reaction
recorder Element -file $dataDir/Fel1.out -time -ele 1111 localForce;														# element forces in local coordinates
recorder Element -file $dataDir/ForceEle1sec1.out -time -ele 1111 section 1 force;											# section forces, axial and moment, node i
recorder Element -file $dataDir/DefoEle1sec1.out -time -ele 11111 section 1 deformation;									# section deformations, axial and curvature, node i
recorder Element -file $dataDir/ForceEle1sec$np.out -time -ele 111 section $np force;										# section forces, axial and moment, node j
recorder Element -file $dataDir/DefoEle1sec$np.out -time -ele 1111 section $np deformation;									# section deformations, axial and curvature, node j
set yFiber [expr 0.];																										# fiber location for stress-strain recorder, local coords
set zFiber [expr 0.];																										# fiber location for stress-strain recorder, local coords
recorder Element -file $dataDir/SSreinfEle1sec$np.out -time -ele 1111 section 1 fiber $yFiber $zFiber stressStrain;			# steel fiber stress-strain, node i
recorder Element -file $dataDir/SSreinfEle1sec1.out -time -ele 1111 section $np fiber $yFiber $zFiber stressStrain;			# steel fiber stress-strain, node j

# Gravity loads, weight and masses
set GammaConcrete [expr 24000*$N/$m3];   							# Reinforced-Concrete weight density (weight per volume)
set QdlCol [expr 223*$N/$m]; 										# W-section weight per length
set QBeam [expr 223*$N/$m];											# W-section weight per length
set QGird [expr 223*$N/$m];											# W-section weight per length
set Tslab [expr 15*$cm];											# 15 cm slab
set Lslab [expr $LGird/2]; 											# slab extends a distance of $LGird/2 in/out of plane
set DLfactor 1.0;													# dead load factor
set Qslab [expr $GammaConcrete*$Tslab*$Lslab*$DLfactor];
set QdlBeam [expr $Qslab + $QBeam]; 								# dead load distributed along beam (one-way slab)
set QdlGird $QGird; 												# dead load distributed along girder
set WeightCol [expr $QdlCol*$LCol];  								# total Column weight
set WeightBeam [expr $QdlBeam*$LBeam]; 								# total Beam weight
set WeightGird [expr $QdlGird*$LGird]; 								# total Beam weight

# Masses
set Mtop  [expr ($WeightCol/2 + $WeightBeam/2 + $WeightGird/2)/$g];

# frame 1
mass 121 $Mtop 0 $Mtop 0. 0. 0.;		# level 2
mass 122 $Mtop 0 $Mtop 0. 0. 0.;

# frame 2
mass 221 $Mtop 0 $Mtop 0. 0. 0.;		# level 2
mass 222 $Mtop 0 $Mtop 0. 0. 0.;

set FloorWeight2 [expr 4*$WeightCol + 2*$WeightGird + 2*$WeightBeam]
set WeightTotal [expr $FloorWeight2];								# total building weight
set MassTotal [expr $WeightTotal/$g];								# total building mass

# Gravity loads
pattern Plain 101 Linear {
# Frame 1
# columns
	eleLoad -ele 1111 -type -beamUniform 0. 0. -$QdlCol;		# level 1-2
	eleLoad -ele 1112 -type -beamUniform 0. 0. -$QdlCol

# beams
	eleLoad -ele 1221 -type -beamUniform -$QdlBeam 0.;			# level 2

# Frame 2
# columns
	eleLoad -ele 2111 -type -beamUniform 0. 0. -$QdlCol;		# level 1-2
	eleLoad -ele 2112 -type -beamUniform 0. 0. -$QdlCol

# beams
	eleLoad -ele 2221 -type -beamUniform -$QdlBeam 0.;			# level 2

# girders connecting frames
# Frame 1-2
	eleLoad -ele 1321 -type -beamUniform -$QdlGird 0.;			# level 2
	eleLoad -ele 1322 -type -beamUniform -$QdlGird 0.;
}

# Gravity analysis parameters
set Tol 1.0e-8;													# convergence tolerance for test

if {$RigidDiaphragm=="ON"} {
	# variable constraintsTypeGravity Lagrange;	#  large model: try Transformation
	variable constraintsTypeGravity Transformation;
} elseif {$RigidDiaphragm=="OFF"} {
	variable constraintsTypeGravity Plain;
} else {
	puts "No rigid diaphragm has been defined";
	return -1;
}

constraints $constraintsTypeGravity;     						# how it handles boundary conditions
numberer RCM;													# renumber dof's to minimize band-width (optimization), if you want to
system BandGeneral ;											# how to store and solve the system of equations in the analysis (large model: try UmfPack)
test EnergyIncr $Tol 6 ; 										# determine if convergence has been achieved at the end of an iteration step
algorithm Newton;												# use Newton's solution algorithm: updates tangent stiffness at every iteration
set NstepGravity 10;  											# apply gravity in 10 steps
set DGravity [expr 1./$NstepGravity]; 							# first load increment;
integrator LoadControl $DGravity;								# determine the next time step for an analysis
analysis Static;												# define type of analysis static or transient
analyze $NstepGravity;											# apply gravity

# Constant gravity loads and reset time to zero
loadConst -time 0.0;
set Tol 1.0e-6;													# reduce tolerance after gravity loads

# Lateral loads
# Fj = WjHj/sum(WiHi)*Weight   at each floor j
set sumWiHi [expr $FloorWeight2*$Y2]; 							# sum of storey weight times height, for lateral-load distribution
set WiHi2 [expr $FloorWeight2*$Y2]; 							# storey weight times height, for lateral-load distribution
set F2 [expr $WiHi2/$sumWiHi*$WeightTotal];						# lateral load at level
set Dmax [expr 0.045*$HBuilding];								# maximum displacement of pushover. push to 10% drift.
set Nsteps 1000;
set Dincr [expr $Dmax/$Nsteps];									# displacement increment. you want this to be small, but not too small to slow analysis

pattern Plain 200 Linear {
	load 323 1. 0. 0. 0. 0. 0.;									# need to apply lateral load only to the master nodes of the rigid diaphragm at each floor
}

# DOF NUMBERER (number the degrees of freedom in the domain): (http://opensees.berkeley.edu/OpenSees/manuals/usermanual/366.htm)
#   determines the mapping between equation numbers and degrees-of-freedom
#          Plain -- Uses the numbering provided by the user 
#          RCM -- Renumbers the DOF to minimize the matrix band-width using the Reverse Cuthill-McKee algorithm 
set numbererTypeStatic RCM;
numberer $numbererTypeStatic; 

# SYSTEM (http://opensees.berkeley.edu/OpenSees/manuals/usermanual/371.htm)
#   Linear Equation Solvers (how to store and solve the system of equations in the analysis)
#   -- provide the solution of the linear system of equations Ku = P. Each solver is tailored to a specific matrix topology. 
#          ProfileSPD -- Direct profile solver for symmetric positive definite matrices 
#          BandGeneral -- Direct solver for banded unsymmetric matrices 
#          BandSPD -- Direct solver for banded symmetric positive definite matrices 
#          SparseGeneral -- Direct solver for unsymmetric sparse matrices 
#          SparseSPD -- Direct solver for symmetric sparse matrices 
#          UmfPack -- Direct UmfPack solver for unsymmetric matrices 
set systemTypeStatic BandGeneral;								# try UmfPack for large model
system $systemTypeStatic;

# TEST: # convergence test to 
# Convergence TEST (http://opensees.berkeley.edu/OpenSees/manuals/usermanual/360.htm)
#   -- Accept the current state of the domain as being on the converged solution path 
#   -- determine if convergence has been achieved at the end of an iteration step
#          NormUnbalance -- Specifies a tolerance on the norm of the unbalanced load at the current iteration 
#          NormDispIncr -- Specifies a tolerance on the norm of the displacement increments at the current iteration 
#          EnergyIncr-- Specifies a tolerance on the inner product of the unbalanced load and displacement increments at the current iteration 
#          RelativeNormUnbalance --
#          RelativeNormDispIncr --
#          RelativeEnergyIncr --
variable TolStatic 1.e-8;                        				# Convergence Test: tolerance
variable maxNumIterStatic 6;                					# Convergence Test: maximum number of iterations that will be performed before "failure to converge" is returned
variable printFlagStatic 0;                						# Convergence Test: flag used to print information on convergence (optional)        # 1: print information on each step; 
variable testTypeStatic EnergyIncr ;							# Convergence-test type
test $testTypeStatic $TolStatic $maxNumIterStatic $printFlagStatic;
# for improved-convergence procedure:
variable maxNumIterConvergeStatic 2000;	
variable printFlagConvergeStatic 0;

# Solution ALGORITHM: -- Iterate from the last time step to the current (http://opensees.berkeley.edu/OpenSees/manuals/usermanual/682.htm)
#          Linear -- Uses the solution at the first iteration and continues 
#          Newton -- Uses the tangent at the current iteration to iterate to convergence 
#          ModifiedNewton -- Uses the tangent at the first iteration to iterate to convergence 
#          NewtonLineSearch -- 
#          KrylovNewton -- 
#          BFGS -- 
#          Broyden -- 
variable algorithmTypeStatic Newton;
algorithm $algorithmTypeStatic;        

# Static INTEGRATOR: -- determine the next time step for an analysis  (http://opensees.berkeley.edu/OpenSees/manuals/usermanual/689.htm)
#          LoadControl -- Specifies the incremental load factor to be applied to the loads in the domain 
#          DisplacementControl -- Specifies the incremental displacement at a specified DOF in the domain 
#          Minimum Unbalanced Displacement Norm -- Specifies the incremental load factor such that the residual displacement norm in minimized 
#          Arc Length -- Specifies the incremental arc-length of the load-displacement path 
# Transient INTEGRATOR: -- determine the next time step for an analysis including inertial effects 
#          Newmark -- The two parameter time-stepping method developed by Newmark 
#          HHT -- The three parameter Hilbert-Hughes-Taylor time-stepping method 
#          Central Difference -- Approximates velocity and acceleration by centered finite differences of displacement 
integrator DisplacementControl $ctrlNode $ctrlDOF $Dincr;

# ANALYSIS  -- defines what type of analysis is to be performed (http://opensees.berkeley.edu/OpenSees/manuals/usermanual/324.htm)
#          Static Analysis -- solves the KU=R problem, without the mass or damping matrices. 
#          Transient Analysis -- solves the time-dependent analysis. The time step in this type of analysis is constant. The time step in the output is also constant. 
#          variableTransient Analysis -- performs the same analysis type as the Transient Analysis object. The time step, however, is variable. This method is used when 
#                 there are convergence problems with the Transient Analysis object at a peak or when the time step is too small. The time step in the output is also variable.
set analysisTypeStatic Static;
analysis $analysisTypeStatic;

set ok [analyze $Nsteps];                										# first analyze command: this will return zero if no convergence problems were encountered

if {$ok != 0} {  
	# if analysis fails, we try some other stuff, performance is slower inside this loop
	set Dstep 0.0;
	set ok 0
	while {$Dstep <= 1.0 && $ok == 0} {	
		set controlDisp [nodeDisp $ctrlNode $ctrlDOF]
		set Dstep [expr $controlDisp/$Dmax]
		set ok [analyze 1];                		# this will return zero if no convergence problems were encountered
		if {$ok != 0} {;				# reduce step size if still fails to converge
			set Nk 4;			# reduce step size
			set DincrReduced [expr $Dincr/$Nk];
			integrator DisplacementControl  $ctrlNode $ctrlDOF $DincrReduced
			for {set ik 1} {$ik <=$Nk} {incr ik 1} {
				set ok [analyze 1];                		# this will return zero if no convergence problems were encountered
				if {$ok != 0} {  
					# if analysis fails, we try some other stuff
					# performance is slower inside this loop	global maxNumIterStatic;	    # max no. of iterations performed before "failure to converge" is ret'd
					puts "Trying Newton with Initial Tangent .."
					test NormDispIncr   $Tol 2000 0
					algorithm Newton -initial
					set ok [analyze 1]
					test $testTypeStatic $TolStatic      $maxNumIterStatic    0
					algorithm $algorithmTypeStatic
				}
				if {$ok != 0} {
					puts "Trying Broyden .."
					algorithm Broyden 8
					set ok [analyze 1]
					algorithm $algorithmTypeStatic
				}
				if {$ok != 0} {
					puts "Trying NewtonWithLineSearch .."
					algorithm NewtonLineSearch 0.8 
					set ok [analyze 1]
					algorithm $algorithmTypeStatic
				}
				if {$ok != 0} {;				# stop if still fails to converge
					puts [format $fmt1 "PROBLEM" $ctrlNode $ctrlDOF [nodeDisp $ctrlNode $ctrlDOF] $LunitTXT]
					return -1
				}; # end if
			}; # end for
			integrator DisplacementControl  $ctrlNode $ctrlDOF $Dincr;	# bring back to original increment
		}; # end if
	};	# end while loop
};      # end if ok !0
# -----------------------------------------------------------------------------------------------------

set fmt1 "%s Pushover analysis: CtrlNode %.3i, dof %.1i, Disp=%.4f %s";			# format for screen/file output of DONE/PROBLEM analysis

if {$ok != 0 } {
	puts [format $fmt1 "PROBLEM" $ctrlNode $ctrlDOF [nodeDisp $ctrlNode $ctrlDOF] $LunitTXT]
} else {
	puts [format $fmt1 "DONE"  $ctrlNode $ctrlDOF [nodeDisp $ctrlNode $ctrlDOF] $LunitTXT]
}
