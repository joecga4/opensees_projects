# ExpControls.tcl 

# ExpControlPoint "cmd":    cpTag    <-node nodeTag>    dof    rspType    <-fact f>    <-lim l u>  <-isRel> ...
expControlPoint   3  1  disp  -isRel  2  disp  -isRel 

# ExpControlPoint "fbk":    cpTag    <-node nodeTag>    dof    rspType    <-fact f>    <-lim l u>  <-isRel> ...
expControlPoint   4  1  disp  -isRel  2  disp  -isRel  1  force  -isRel  2  force  -isRel 

# ExpControl "MTS":    ctrlTag    configFileName    rampTime    trialCPs    outCPs 
expControl  MTSCsi   1  "C:/opensees_projects/frame_1x1x1/node2.mtscs"  +1.000000E-01  -trialCP  3  -outCP  4 

