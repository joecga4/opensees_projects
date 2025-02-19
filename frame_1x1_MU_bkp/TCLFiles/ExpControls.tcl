# ExpControls.tcl 

# ExpControlPoint "ctr":    cpTag    <-node nodeTag>    dof    rspType    <-fact f>    <-lim l u>  <-isRel> ...
expControlPoint   2  -node    4  1  disp  -isRel 

# ExpControlPoint "fdk":    cpTag    <-node nodeTag>    dof    rspType    <-fact f>    <-lim l u>  <-isRel> ...
expControlPoint   3  -node    4  1  disp  -isRel  1  force  -isRel 

# ExpControl "MTSCSI":    ctrlTag    configFileName    rampTime    trialCPs    outCPs 
expControl  MTSCsi   1  "C:/opensees_projects/frame_1x1_MU_bkp/node4.mtscs"  +1.000000E-01  -trialCP  2  -outCP  3 

