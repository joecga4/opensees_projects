# --------------------------------------------------------------------------------------------------
# LibUnits.tcl -- define system of units
#		Silvia Mazzoni & Frank McKenna, 2006
#

# define UNITS ----------------------------------------------------------------------------
set mm 1.; 				            # define basic units -- output units
set kN 1.; 			                # define basic units -- output units
set sec 1.; 			            # define basic units -- output units
set LunitTXT "mm";			        # define basic-unit text for output
set FunitTXT "kN";			        # define basic-unit text for output
set TunitTXT "sec";			        # define basic-unit text for output
set m [expr 1.e3*$mm]; 		        # define m
set cm [expr 1.e1*$mm]; 		    # define cm
set N [expr 1.e-3*$kN];              # define N
set Pa [expr $N/pow($m,2)];         # define Pa
set MPa [expr $N/pow($mm,2)];       # define MPa
set GPa [expr $kN/pow($mm,2)];      # define GPa
set mm2 [expr pow($mm,2)]; 		    # mm^2
set mm4 [expr pow($mm,4)]; 		    # mm^4
set cm2 [expr pow($cm,2)]; 		    # cm^2
set cm4 [expr pow($cm,4)]; 		    # cm^4
set m3 [expr pow($m,3)]; 		    # m^3
set PI [expr 2*asin(1.0)]; 		    # define constants
set g [expr 9.8067*$m/pow($sec,2)]; 	                    # gravitational acceleration
set Ubig 1.e10; 			        # a really large number
set Usmall [expr 1/$Ubig]; 		    # a really small number
