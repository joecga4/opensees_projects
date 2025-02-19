# Recorder_1.tcl 

# Node Recorder "DefoShape":    fileName    <nodeTag>    dof    respType 
recorder  Node  -file EarthquakeAfterGD_Node_DefoShape_Dsp.out  -time  -nodeRange 1  16  -dof 1  2  3  4  5  6  disp 
recorder  Node  -file EarthquakeAfterGD_Node_DefoShape_Vel.out  -time  -nodeRange 1  16  -dof 1  2  3  4  5  6  vel 
recorder  Node  -file EarthquakeAfterGD_Node_DefoShape_Acc.out  -time  -nodeRange 1  16  -dof 1  2  3  4  5  6  accel 

# BeamColumn Recorder "ElemForces":    fileName    <eleTag>    arguments 
recorder  Element  -file EarthquakeAfterGD_BeamColumn_ElemForces_GlbForc.out  -time  -ele 1   3   4   5   6   7   8   9  10  11  12  13  14  15  16  force 
recorder  Element  -file EarthquakeAfterGD_BeamColumn_ElemForces_LocForc.out  -time  -ele 1   3   4   5   6   7   8   9  10  11  12  13  14  15  16  localForce 

# Node Recorder "Reactions":    fileName    <nodeTag>    dof    respType 
recorder  Node  -file EarthquakeAfterGD_Node_Reactions_RFrc.out  -time  -nodeRange 1  16  -dof 1  2  3  4  5  6  reaction 
