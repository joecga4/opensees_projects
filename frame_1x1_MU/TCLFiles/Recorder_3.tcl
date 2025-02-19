# Recorder_3.tcl 

# Node Recorder "DefoShape":    fileName    <nodeTag>    dof    respType 
recorder  Node  -file cargalateralhyb_Node_DefoShape_Dsp.out  -time  -nodeRange 1  4  -dof 1  2  3  disp 

# Node Recorder "Reactions":    fileName    <nodeTag>    dof    respType 
recorder  Node  -file cargalateralhyb_Node_Reactions_RFrc.out  -time  -nodeRange 1  4  -dof 1  2  3  reaction 

# ExpElement Recorder "truss":    fileName    <eleTag>    arguments 
recorder  Element  -file cargalateralhyb_ExpElement_truss_GlbForc.out  -time  -ele 4  force 
recorder  Element  -file cargalateralhyb_ExpElement_truss_LocForc.out  -time  -ele 4  localForce 
recorder  Element  -file cargalateralhyb_ExpElement_truss_BasForc.out  -time  -ele 4  basicForce 
recorder  Element  -file cargalateralhyb_ExpElement_truss_CtrlDisp.out  -time  -ele 4  ctrlDisp 
recorder  Element  -file cargalateralhyb_ExpElement_truss_DaqDisp.out  -time  -ele 4  daqDisp 

# BeamColumn Recorder "vigacol":    fileName    <eleTag>    arguments 
recorder  Element  -file cargalateralhyb_BeamColumn_vigacol_GlbForc.out  -time  -ele 1  2  3  force 
recorder  Element  -file cargalateralhyb_BeamColumn_vigacol_LocForc.out  -time  -ele 1  2  3  localForce 
