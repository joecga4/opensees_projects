# Recorder_3.tcl 

# Node Recorder "DefoShape":    fileName    <nodeTag>    dof    respType 
recorder  Node  -file pushxx_Node_DefoShape_Dsp.out  -time  -nodeRange 1  10  -dof 1  2  3  4  5  6  disp 

# BeamColumn Recorder "Fuerzas":    fileName    <eleTag>    arguments 
recorder  Element  -file pushxx_BeamColumn_Fuerzas_GlbForc.out  -time  -ele 1  2  3  4  5  6  7  8  force 
recorder  Element  -file pushxx_BeamColumn_Fuerzas_LocForc.out  -time  -ele 1  2  3  4  5  6  7  8  localForce 

# Node Recorder "Reactions":    fileName    <nodeTag>    dof    respType 
recorder  Node  -file pushxx_Node_Reactions_RFrc.out  -time  -nodeRange 1  10  -dof 1  2  3  4  5  6  reaction 
