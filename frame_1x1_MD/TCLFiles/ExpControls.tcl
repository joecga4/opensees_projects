# ExpControls.tcl 

# ExpControlPoint "ctr":    cpTag    <-node nodeTag>    dof    rspType    <-fact f>    <-lim l u>  <-isRel> ...
expControlPoint   3  -node    4  1  disp  -relTrial 

# ExpControlPoint "fdk":    cpTag    <-node nodeTag>    dof    rspType    <-fact f>    <-lim l u>  <-isRel> ...
expControlPoint   4  -node    4  1  disp  -relOut  1  force  -relOut 

# ExpControl "SPEEDGOAT":    ctrlTag    ipAddr    ipPort    appFile    trialCPs    outCPs 
expControl  xPCtarget   2  "192.168.7.1"  22222  "C:/opensees_projects/UCB/HybridControllerD2D2" -trialCP  3  -outCP  4 
