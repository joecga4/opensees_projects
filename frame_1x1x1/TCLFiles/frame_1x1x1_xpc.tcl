# frame_1x1x1_xpc.tcl 
logFile "frame_1x1x1_xpc.log" 
set systemTime [clock seconds] 

puts "===============================================================================" 
puts "OpenSees Navigator: Version 2.5.7" 
puts "File sourced: C:/opensees_projects/frame_1x1x1/frame_1x1x1_xpc.tcl" 
puts "Starting OpenSees analysis: [clock format $systemTime -format "%d-%b-%Y %H:%M:%S"]" 
puts "===============================================================================" 

puts "\n########################" 
puts   "# Analysis-Sequence  1 #"
puts   "########################" 

# Start timing of this analysis sequence 
# -------------------------------------- 
set tStart [clock clicks -milliseconds] 

# Start of model generation 
# ========================= 

# Create ModelBuilder 
# ------------------- 
model  BasicBuilder  -ndm  3  -ndf  6 

# Define geometry 
# --------------- 
source  NodeCoord.tcl 

# Define Single Point Constraints 
# ------------------------------- 
source  SPConstraint.tcl 

# Define nodal masses 
# ------------------- 
source  NodeMass.tcl 

# Define Multi Point Constraints 
# ------------------------------ 
source  MPConstraint.tcl 

# Define material(s) 
# ------------------ 
source  Materials.tcl 

# Define section(s) 
# ----------------- 
source  Sections.tcl 

# Load OpenFresco package 
# ----------------------- 
loadPackage  OpenFresco 

# Define experimental control(s) 
# ------------------------------ 
source  ExpControls.tcl 

# Define experimental setup(s) 
# ---------------------------- 
source  ExpSetups.tcl 

# Define experimental site(s) 
# --------------------------- 
source  ExpSites.tcl 

# Define geometric transformation(s) 
# ---------------------------------- 
source  GeoTran.tcl 

# Define element(s) 
# ----------------- 
source  Elements.tcl 

# Define damping parameters 
# ------------------------- 

# Define time series 
# ------------------ 
source  TimeSeries.tcl 

# Start of analysis generation 
# ============================ 

# Get Initial Stiffness 
# --------------------- 
initialize 

puts "o Analysis: EarthquakeAfterGD" 
# ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ 

# Define load pattern 
# ------------------- 
source  LoadPattern_1.tcl 

# Define recorder(s) 
# ------------------ 
source  Recorder_1.tcl 

# Define analysis options 
# ----------------------- 
source  AnalysisOptn_4.tcl 

# Define damping parameters
# -------------------------
# parameter set "DampingParam01":    alphaM    betaK    betaKinit    betaKcomm 
rayleigh +5.483900E-01 +0.000000E+00 +0.000000E+00 +4.384400E-03

# Record initial state of model 
# ----------------------------- 
record 

# Analyze model 
# ------------- 
analyze  2000  +1.000000E-02 

# Stop timing of this analysis sequence 
# ------------------------------------- 
set tStop [clock clicks -milliseconds] 
puts "o Time taken: [expr ($tStop-$tStart)/1000.0] sec" 

# Clean up 
# -------- 
wipe 
set systemTime [clock seconds] 
puts "\n===============================================================================" 
puts "Finished OpenSees analysis: [clock format $systemTime -format "%d-%b-%Y %H:%M:%S"]" 
puts "===============================================================================" 
exit 

