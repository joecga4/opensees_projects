# frame_1x1_MU.tcl 
logFile "frame_1x1_MU.log" 
set systemTime [clock seconds] 

puts "===============================================================================" 
puts "OpenSees Navigator: Version 2.5.7" 
puts "File sourced: C:/opensees_projects/frame_1x1_MU/frame_1x1_MU.tcl" 
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
model  BasicBuilder  -ndm  2  -ndf  3 

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

puts "o Analysis: cargalateralhyb" 
# ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ 

# Define load pattern 
# ------------------- 
source  LoadPattern_3.tcl 

# Define recorder(s) 
# ------------------ 
source  Recorder_3.tcl 

# Define analysis options 
# ----------------------- 
source  AnalysisOptn_4.tcl 

# Record initial state of model 
# ----------------------------- 
record

# Analyze model 
# ------------- 
analyze  1000 

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

