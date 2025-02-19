# AnalysisOptn_4.tcl 

# AnalysisOptn "cargalateralhyb": Type: Static 
# -------------------------------------------- 
# Constraint Handler 
constraints  Plain 
# DOF Numberer 
numberer  Plain 
# System of Equations 
system  BandGeneral 
# Convergence Test 
test  FixedNumIter     5     0     2 
# Solution Algorithm 
algorithm  Linear 
# Integrator 
integrator  AlphaOSGeneralized  +5.000000E-01 
# Analysis Type 
analysis  Static 
