# AnalysisOptn_4.tcl 

# AnalysisOptn "TransientHybrid": Type: Transient 
# ----------------------------------------------- 
# Constraint Handler 
constraints  Plain 
# DOF Numberer 
numberer  Plain 
# System of Equations 
system  UmfPack -lvalueFact   10 
# Convergence Test 
test  NormDispIncr  +1.000000E-06    25     0     2 
# Solution Algorithm 
algorithm  Linear 
# Integrator 
integrator  AlphaOSGeneralized  +5.000000E-01 
# Analysis Type 
analysis  Transient 
