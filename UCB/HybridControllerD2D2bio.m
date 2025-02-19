function bio=HybridControllerD2D2bio
bio = [];
bio(1).blkName='ATS Switch';
bio(1).sigName='';
bio(1).portIdx=0;
bio(1).dim=[1,1];
bio(1).sigWidth=1;
bio(1).sigAddress='&HybridControllerD2D2_B.ATSSwitch';
bio(1).ndims=2;
bio(1).size=[];
bio(1).isStruct=false;
bio(getlenBIO) = bio(1);

bio(2).blkName='ATS compensator/calculate optimal coefficients';
bio(2).sigName='';
bio(2).portIdx=0;
bio(2).dim=[4,1];
bio(2).sigWidth=4;
bio(2).sigAddress='&HybridControllerD2D2_B.CoreSubsys[0].apar[0]';
bio(2).ndims=2;
bio(2).size=[];
bio(2).isStruct=false;

bio(3).blkName='ATS compensator/compensated actuator input disp.';
bio(3).sigName='actuator disp';
bio(3).portIdx=0;
bio(3).dim=[1,1];
bio(3).sigWidth=1;
bio(3).sigAddress='&HybridControllerD2D2_B.CoreSubsys[0].ut_pred';
bio(3).ndims=2;
bio(3).size=[];
bio(3).isStruct=false;

bio(4).blkName='ATS compensator/Tapped Delay';
bio(4).sigName='';
bio(4).portIdx=0;
bio(4).dim=[1024,1];
bio(4).sigWidth=1024;
bio(4).sigAddress='&HybridControllerD2D2_B.CoreSubsys[0].TappedDelay_d[0]';
bio(4).ndims=2;
bio(4).size=[];
bio(4).isStruct=false;

bio(5).blkName='ATS compensator/Manual Switch';
bio(5).sigName='';
bio(5).portIdx=0;
bio(5).dim=[1,1];
bio(5).sigWidth=1;
bio(5).sigAddress='&HybridControllerD2D2_B.CoreSubsys[0].ManualSwitch';
bio(5).ndims=2;
bio(5).size=[];
bio(5).isStruct=false;

bio(6).blkName='ATS compensator/Manual Switch1';
bio(6).sigName='';
bio(6).portIdx=0;
bio(6).dim=[1,1];
bio(6).sigWidth=1;
bio(6).sigAddress='&HybridControllerD2D2_B.CoreSubsys[0].ManualSwitch1';
bio(6).ndims=2;
bio(6).size=[];
bio(6).isStruct=false;

bio(7).blkName='ATS compensator/Butterworth filter';
bio(7).sigName='';
bio(7).portIdx=0;
bio(7).dim=[1,1];
bio(7).sigWidth=1;
bio(7).sigAddress='&HybridControllerD2D2_B.CoreSubsys[0].Butterworthfilter';
bio(7).ndims=2;
bio(7).size=[];
bio(7).isStruct=false;

bio(8).blkName='ATS compensator/Butterworth filter1';
bio(8).sigName='';
bio(8).portIdx=0;
bio(8).dim=[1,1];
bio(8).sigWidth=1;
bio(8).sigAddress='&HybridControllerD2D2_B.CoreSubsys[0].Butterworthfilter1';
bio(8).ndims=2;
bio(8).size=[];
bio(8).isStruct=false;

bio(9).blkName='ATS compensator/Unit Delay';
bio(9).sigName='';
bio(9).portIdx=0;
bio(9).dim=[4,1];
bio(9).sigWidth=4;
bio(9).sigAddress='&HybridControllerD2D2_B.CoreSubsys[0].UnitDelay[0]';
bio(9).ndims=2;
bio(9).size=[];
bio(9).isStruct=false;

bio(10).blkName='ATS compensator/Unit Delay1';
bio(10).sigName='';
bio(10).portIdx=0;
bio(10).dim=[1,1];
bio(10).sigWidth=1;
bio(10).sigAddress='&HybridControllerD2D2_B.CoreSubsys[0].UnitDelay1';
bio(10).ndims=2;
bio(10).size=[];
bio(10).isStruct=false;

bio(11).blkName='Subsystem2/Saturation';
bio(11).sigName='';
bio(11).portIdx=0;
bio(11).dim=[1,1];
bio(11).sigWidth=1;
bio(11).sigAddress='&HybridControllerD2D2_B.Saturation';
bio(11).ndims=2;
bio(11).size=[];
bio(11).isStruct=false;

bio(12).blkName='Subsystem3/MovingAverage Filter';
bio(12).sigName='';
bio(12).portIdx=0;
bio(12).dim=[1,1];
bio(12).sigWidth=1;
bio(12).sigAddress='&HybridControllerD2D2_B.MovingAverageFilter';
bio(12).ndims=2;
bio(12).size=[];
bio(12).isStruct=false;

bio(13).blkName='Subsystem4/MovingAverage Filter1';
bio(13).sigName='';
bio(13).portIdx=0;
bio(13).dim=[1,1];
bio(13).sigWidth=1;
bio(13).sigAddress='&HybridControllerD2D2_B.MovingAverageFilter1';
bio(13).ndims=2;
bio(13).size=[];
bio(13).isStruct=false;

bio(14).blkName='input from MTS (FT60)/typeConv1';
bio(14).sigName='';
bio(14).portIdx=0;
bio(14).dim=[1,1];
bio(14).sigWidth=1;
bio(14).sigAddress='&HybridControllerD2D2_B.typeConv1';
bio(14).ndims=2;
bio(14).size=[];
bio(14).isStruct=false;

bio(15).blkName='input from MTS (FT60)/typeConv2';
bio(15).sigName='';
bio(15).portIdx=0;
bio(15).dim=[1,1];
bio(15).sigWidth=1;
bio(15).sigAddress='&HybridControllerD2D2_B.typeConv2_p';
bio(15).ndims=2;
bio(15).size=[];
bio(15).isStruct=false;

bio(16).blkName='input from MTS (FT60)/typeConv3';
bio(16).sigName='';
bio(16).portIdx=0;
bio(16).dim=[1,1];
bio(16).sigWidth=1;
bio(16).sigAddress='&HybridControllerD2D2_B.typeConv3';
bio(16).ndims=2;
bio(16).size=[];
bio(16).isStruct=false;

bio(17).blkName='input from MTS (FT60)/typeConv4';
bio(17).sigName='';
bio(17).portIdx=0;
bio(17).dim=[1,1];
bio(17).sigWidth=1;
bio(17).sigAddress='&HybridControllerD2D2_B.typeConv4';
bio(17).ndims=2;
bio(17).size=[];
bio(17).isStruct=false;

bio(18).blkName='input from MTS (FT60)/typeConv5';
bio(18).sigName='';
bio(18).portIdx=0;
bio(18).dim=[1,1];
bio(18).sigWidth=1;
bio(18).sigAddress='&HybridControllerD2D2_B.typeConv5';
bio(18).ndims=2;
bio(18).size=[];
bio(18).isStruct=false;

bio(19).blkName='input from MTS (FT60)/typeConv6';
bio(19).sigName='';
bio(19).portIdx=0;
bio(19).dim=[1,1];
bio(19).sigWidth=1;
bio(19).sigAddress='&HybridControllerD2D2_B.typeConv6';
bio(19).ndims=2;
bio(19).size=[];
bio(19).isStruct=false;

bio(20).blkName='input from MTS (FT60)/typeConv7';
bio(20).sigName='';
bio(20).portIdx=0;
bio(20).dim=[1,1];
bio(20).sigWidth=1;
bio(20).sigAddress='&HybridControllerD2D2_B.typeConv7';
bio(20).ndims=2;
bio(20).size=[];
bio(20).isStruct=false;

bio(21).blkName='input from MTS (FT60)/typeConv8';
bio(21).sigName='';
bio(21).portIdx=0;
bio(21).dim=[1,1];
bio(21).sigWidth=1;
bio(21).sigAddress='&HybridControllerD2D2_B.typeConv8';
bio(21).ndims=2;
bio(21).size=[];
bio(21).isStruct=false;

bio(22).blkName='input from MTS (FT60)/Read ';
bio(22).sigName='';
bio(22).portIdx=0;
bio(22).dim=[8,1];
bio(22).sigWidth=8;
bio(22).sigAddress='&HybridControllerD2D2_B.Read[0]';
bio(22).ndims=2;
bio(22).size=[];
bio(22).isStruct=false;

bio(23).blkName='input from MTS (FT60)/SCGT unpack/p1';
bio(23).sigName='';
bio(23).portIdx=0;
bio(23).dim=[1,1];
bio(23).sigWidth=1;
bio(23).sigAddress='&HybridControllerD2D2_B.SCGTunpack_o1';
bio(23).ndims=2;
bio(23).size=[];
bio(23).isStruct=false;

bio(24).blkName='input from MTS (FT60)/SCGT unpack/p2';
bio(24).sigName='';
bio(24).portIdx=1;
bio(24).dim=[1,1];
bio(24).sigWidth=1;
bio(24).sigAddress='&HybridControllerD2D2_B.SCGTunpack_o2';
bio(24).ndims=2;
bio(24).size=[];
bio(24).isStruct=false;

bio(25).blkName='input from MTS (FT60)/SCGT unpack/p3';
bio(25).sigName='';
bio(25).portIdx=2;
bio(25).dim=[1,1];
bio(25).sigWidth=1;
bio(25).sigAddress='&HybridControllerD2D2_B.SCGTunpack_o3';
bio(25).ndims=2;
bio(25).size=[];
bio(25).isStruct=false;

bio(26).blkName='input from MTS (FT60)/SCGT unpack/p4';
bio(26).sigName='';
bio(26).portIdx=3;
bio(26).dim=[1,1];
bio(26).sigWidth=1;
bio(26).sigAddress='&HybridControllerD2D2_B.SCGTunpack_o4';
bio(26).ndims=2;
bio(26).size=[];
bio(26).isStruct=false;

bio(27).blkName='input from MTS (FT60)/SCGT unpack/p5';
bio(27).sigName='';
bio(27).portIdx=4;
bio(27).dim=[1,1];
bio(27).sigWidth=1;
bio(27).sigAddress='&HybridControllerD2D2_B.SCGTunpack_o5';
bio(27).ndims=2;
bio(27).size=[];
bio(27).isStruct=false;

bio(28).blkName='input from MTS (FT60)/SCGT unpack/p6';
bio(28).sigName='';
bio(28).portIdx=5;
bio(28).dim=[1,1];
bio(28).sigWidth=1;
bio(28).sigAddress='&HybridControllerD2D2_B.SCGTunpack_o6';
bio(28).ndims=2;
bio(28).size=[];
bio(28).isStruct=false;

bio(29).blkName='input from MTS (FT60)/SCGT unpack/p7';
bio(29).sigName='';
bio(29).portIdx=6;
bio(29).dim=[1,1];
bio(29).sigWidth=1;
bio(29).sigAddress='&HybridControllerD2D2_B.SCGTunpack_o7';
bio(29).ndims=2;
bio(29).size=[];
bio(29).isStruct=false;

bio(30).blkName='input from MTS (FT60)/SCGT unpack/p8';
bio(30).sigName='';
bio(30).portIdx=7;
bio(30).dim=[1,1];
bio(30).sigWidth=1;
bio(30).sigAddress='&HybridControllerD2D2_B.SCGTunpack_o8';
bio(30).ndims=2;
bio(30).size=[];
bio(30).isStruct=false;

bio(31).blkName='output to MTS (FT60)/typeConv1';
bio(31).sigName='';
bio(31).portIdx=0;
bio(31).dim=[1,1];
bio(31).sigWidth=1;
bio(31).sigAddress='&HybridControllerD2D2_B.typeConv1_p';
bio(31).ndims=2;
bio(31).size=[];
bio(31).isStruct=false;

bio(32).blkName='output to MTS (FT60)/typeConv2';
bio(32).sigName='';
bio(32).portIdx=0;
bio(32).dim=[1,1];
bio(32).sigWidth=1;
bio(32).sigAddress='&HybridControllerD2D2_B.typeConv2_i';
bio(32).ndims=2;
bio(32).size=[];
bio(32).isStruct=false;

bio(33).blkName='output to MTS (FT60)/typeConv3';
bio(33).sigName='';
bio(33).portIdx=0;
bio(33).dim=[1,1];
bio(33).sigWidth=1;
bio(33).sigAddress='&HybridControllerD2D2_B.typeConv3_k';
bio(33).ndims=2;
bio(33).size=[];
bio(33).isStruct=false;

bio(34).blkName='output to MTS (FT60)/typeConv4';
bio(34).sigName='';
bio(34).portIdx=0;
bio(34).dim=[1,1];
bio(34).sigWidth=1;
bio(34).sigAddress='&HybridControllerD2D2_B.typeConv4_d';
bio(34).ndims=2;
bio(34).size=[];
bio(34).isStruct=false;

bio(35).blkName='output to MTS (FT60)/typeConv5';
bio(35).sigName='';
bio(35).portIdx=0;
bio(35).dim=[1,1];
bio(35).sigWidth=1;
bio(35).sigAddress='&HybridControllerD2D2_B.typeConv5_d';
bio(35).ndims=2;
bio(35).size=[];
bio(35).isStruct=false;

bio(36).blkName='output to MTS (FT60)/SCGT pack';
bio(36).sigName='';
bio(36).portIdx=0;
bio(36).dim=[5,1];
bio(36).sigWidth=5;
bio(36).sigAddress='&HybridControllerD2D2_B.SCGTpack[0]';
bio(36).ndims=2;
bio(36).size=[];
bio(36).isStruct=false;

bio(37).blkName='xPC HC/Predictor-Corrector/p1';
bio(37).sigName='';
bio(37).portIdx=0;
bio(37).dim=[2,1];
bio(37).sigWidth=2;
bio(37).sigAddress='&HybridControllerD2D2_B.comD[0]';
bio(37).ndims=2;
bio(37).size=[];
bio(37).isStruct=false;

bio(38).blkName='xPC HC/Predictor-Corrector/p2';
bio(38).sigName='';
bio(38).portIdx=1;
bio(38).dim=[2,1];
bio(38).sigWidth=2;
bio(38).sigAddress='&HybridControllerD2D2_B.comV[0]';
bio(38).ndims=2;
bio(38).size=[];
bio(38).isStruct=false;

bio(39).blkName='xPC HC/Predictor-Corrector/p3';
bio(39).sigName='';
bio(39).portIdx=2;
bio(39).dim=[2,1];
bio(39).sigWidth=2;
bio(39).sigAddress='&HybridControllerD2D2_B.comA[0]';
bio(39).ndims=2;
bio(39).size=[];
bio(39).isStruct=false;

bio(40).blkName='xPC HC/Predictor-Corrector/p4';
bio(40).sigName='';
bio(40).portIdx=3;
bio(40).dim=[1,1];
bio(40).sigWidth=1;
bio(40).sigAddress='&HybridControllerD2D2_B.state';
bio(40).ndims=2;
bio(40).size=[];
bio(40).isStruct=false;

bio(41).blkName='xPC HC/Predictor-Corrector/p5';
bio(41).sigName='';
bio(41).portIdx=4;
bio(41).dim=[1,1];
bio(41).sigWidth=1;
bio(41).sigAddress='&HybridControllerD2D2_B.i';
bio(41).ndims=2;
bio(41).size=[];
bio(41).isStruct=false;

bio(42).blkName='xPC HC/atTarget';
bio(42).sigName='';
bio(42).portIdx=0;
bio(42).dim=[1,1];
bio(42).sigWidth=1;
bio(42).sigAddress='&HybridControllerD2D2_B.atTarget';
bio(42).ndims=2;
bio(42).size=[];
bio(42).isStruct=false;

bio(43).blkName='xPC HC/counter';
bio(43).sigName='';
bio(43).portIdx=0;
bio(43).dim=[1,1];
bio(43).sigWidth=1;
bio(43).sigAddress='&HybridControllerD2D2_B.counter';
bio(43).ndims=2;
bio(43).size=[];
bio(43).isStruct=false;

bio(44).blkName='xPC HC/switchPC';
bio(44).sigName='';
bio(44).portIdx=0;
bio(44).dim=[1,1];
bio(44).sigWidth=1;
bio(44).sigAddress='&HybridControllerD2D2_B.switchPC';
bio(44).ndims=2;
bio(44).size=[];
bio(44).isStruct=false;

bio(45).blkName='xPC HC/Gain';
bio(45).sigName='';
bio(45).portIdx=0;
bio(45).dim=[1,1];
bio(45).sigWidth=1;
bio(45).sigAddress='&HybridControllerD2D2_B.Gain';
bio(45).ndims=2;
bio(45).size=[];
bio(45).isStruct=false;

bio(46).blkName='xPC HC/Gain1';
bio(46).sigName='';
bio(46).portIdx=0;
bio(46).dim=[1,1];
bio(46).sigWidth=1;
bio(46).sigAddress='&HybridControllerD2D2_B.Gain1';
bio(46).ndims=2;
bio(46).size=[];
bio(46).isStruct=false;

bio(47).blkName='xPC HC/measSignal';
bio(47).sigName='';
bio(47).portIdx=0;
bio(47).dim=[2,1];
bio(47).sigWidth=2;
bio(47).sigAddress='&HybridControllerD2D2_B.measSignal[0]';
bio(47).ndims=2;
bio(47).size=[];
bio(47).isStruct=false;

bio(48).blkName='xPC HC/MovingAverage Filter';
bio(48).sigName='';
bio(48).portIdx=0;
bio(48).dim=[1,1];
bio(48).sigWidth=1;
bio(48).sigAddress='&HybridControllerD2D2_B.MovingAverageFilter_p';
bio(48).ndims=2;
bio(48).size=[];
bio(48).isStruct=false;

bio(49).blkName='xPC HC/MovingAverage Filter1';
bio(49).sigName='';
bio(49).portIdx=0;
bio(49).dim=[1,1];
bio(49).sigWidth=1;
bio(49).sigAddress='&HybridControllerD2D2_B.MovingAverageFilter1_j';
bio(49).ndims=2;
bio(49).size=[];
bio(49).isStruct=false;

bio(50).blkName='ATS compensator/Coefficient for LSM/Dot Product';
bio(50).sigName='A11';
bio(50).portIdx=0;
bio(50).dim=[1,1];
bio(50).sigWidth=1;
bio(50).sigAddress='&HybridControllerD2D2_B.CoreSubsys[0].A11';
bio(50).ndims=2;
bio(50).size=[];
bio(50).isStruct=false;

bio(51).blkName='ATS compensator/Coefficient for LSM/Dot Product1';
bio(51).sigName='A12';
bio(51).portIdx=0;
bio(51).dim=[1,1];
bio(51).sigWidth=1;
bio(51).sigAddress='&HybridControllerD2D2_B.CoreSubsys[0].A12';
bio(51).ndims=2;
bio(51).size=[];
bio(51).isStruct=false;

bio(52).blkName='ATS compensator/Coefficient for LSM/Dot Product10';
bio(52).sigName='';
bio(52).portIdx=0;
bio(52).dim=[1,1];
bio(52).sigWidth=1;
bio(52).sigAddress='&HybridControllerD2D2_B.CoreSubsys[0].DotProduct10';
bio(52).ndims=2;
bio(52).size=[];
bio(52).isStruct=false;

bio(53).blkName='ATS compensator/Coefficient for LSM/Dot Product11';
bio(53).sigName='';
bio(53).portIdx=0;
bio(53).dim=[1,1];
bio(53).sigWidth=1;
bio(53).sigAddress='&HybridControllerD2D2_B.CoreSubsys[0].DotProduct11';
bio(53).ndims=2;
bio(53).size=[];
bio(53).isStruct=false;

bio(54).blkName='ATS compensator/Coefficient for LSM/Dot Product12';
bio(54).sigName='';
bio(54).portIdx=0;
bio(54).dim=[1,1];
bio(54).sigWidth=1;
bio(54).sigAddress='&HybridControllerD2D2_B.CoreSubsys[0].DotProduct12';
bio(54).ndims=2;
bio(54).size=[];
bio(54).isStruct=false;

bio(55).blkName='ATS compensator/Coefficient for LSM/Dot Product2';
bio(55).sigName='A13';
bio(55).portIdx=0;
bio(55).dim=[1,1];
bio(55).sigWidth=1;
bio(55).sigAddress='&HybridControllerD2D2_B.CoreSubsys[0].A13';
bio(55).ndims=2;
bio(55).size=[];
bio(55).isStruct=false;

bio(56).blkName='ATS compensator/Coefficient for LSM/Dot Product4';
bio(56).sigName='A22';
bio(56).portIdx=0;
bio(56).dim=[1,1];
bio(56).sigWidth=1;
bio(56).sigAddress='&HybridControllerD2D2_B.CoreSubsys[0].A22';
bio(56).ndims=2;
bio(56).size=[];
bio(56).isStruct=false;

bio(57).blkName='ATS compensator/Coefficient for LSM/Dot Product5';
bio(57).sigName='A23';
bio(57).portIdx=0;
bio(57).dim=[1,1];
bio(57).sigWidth=1;
bio(57).sigAddress='&HybridControllerD2D2_B.CoreSubsys[0].A23';
bio(57).ndims=2;
bio(57).size=[];
bio(57).isStruct=false;

bio(58).blkName='ATS compensator/Coefficient for LSM/Dot Product7';
bio(58).sigName='A33';
bio(58).portIdx=0;
bio(58).dim=[1,1];
bio(58).sigWidth=1;
bio(58).sigAddress='&HybridControllerD2D2_B.CoreSubsys[0].A33';
bio(58).ndims=2;
bio(58).size=[];
bio(58).isStruct=false;

bio(59).blkName='ATS compensator/Discrete Derivative/Diff';
bio(59).sigName='';
bio(59).portIdx=0;
bio(59).dim=[1,1];
bio(59).sigWidth=1;
bio(59).sigAddress='&HybridControllerD2D2_B.CoreSubsys[0].Diff';
bio(59).ndims=2;
bio(59).size=[];
bio(59).isStruct=false;

bio(60).blkName='ATS compensator/Discrete Derivative/TSamp';
bio(60).sigName='';
bio(60).portIdx=0;
bio(60).dim=[1,1];
bio(60).sigWidth=1;
bio(60).sigAddress='&HybridControllerD2D2_B.CoreSubsys[0].TSamp';
bio(60).ndims=2;
bio(60).size=[];
bio(60).isStruct=false;

bio(61).blkName='ATS compensator/Discrete Derivative/UD';
bio(61).sigName='U(k-1)';
bio(61).portIdx=0;
bio(61).dim=[1,1];
bio(61).sigWidth=1;
bio(61).sigAddress='&HybridControllerD2D2_B.CoreSubsys[0].Uk1';
bio(61).ndims=2;
bio(61).size=[];
bio(61).isStruct=false;

bio(62).blkName='ATS compensator/Discrete Derivative1/Diff';
bio(62).sigName='';
bio(62).portIdx=0;
bio(62).dim=[1,1];
bio(62).sigWidth=1;
bio(62).sigAddress='&HybridControllerD2D2_B.CoreSubsys[0].Diff_i';
bio(62).ndims=2;
bio(62).size=[];
bio(62).isStruct=false;

bio(63).blkName='ATS compensator/Discrete Derivative1/TSamp';
bio(63).sigName='';
bio(63).portIdx=0;
bio(63).dim=[1,1];
bio(63).sigWidth=1;
bio(63).sigAddress='&HybridControllerD2D2_B.CoreSubsys[0].TSamp_f';
bio(63).ndims=2;
bio(63).size=[];
bio(63).isStruct=false;

bio(64).blkName='ATS compensator/Discrete Derivative1/UD';
bio(64).sigName='U(k-1)';
bio(64).portIdx=0;
bio(64).dim=[1,1];
bio(64).sigWidth=1;
bio(64).sigAddress='&HybridControllerD2D2_B.CoreSubsys[0].Uk1_e';
bio(64).ndims=2;
bio(64).size=[];
bio(64).isStruct=false;

bio(65).blkName='ATS compensator/Tapped delay subsystem/Tapped Delay';
bio(65).sigName='';
bio(65).portIdx=0;
bio(65).dim=[1024,1];
bio(65).sigWidth=1024;
bio(65).sigAddress='&HybridControllerD2D2_B.CoreSubsys[0].TappedDelay[0]';
bio(65).ndims=2;
bio(65).size=[];
bio(65).isStruct=false;

bio(66).blkName='ATS compensator/Tapped delay subsystem/Tapped Delay1';
bio(66).sigName='';
bio(66).portIdx=0;
bio(66).dim=[1024,1];
bio(66).sigWidth=1024;
bio(66).sigAddress='&HybridControllerD2D2_B.CoreSubsys[0].TappedDelay1[0]';
bio(66).ndims=2;
bio(66).size=[];
bio(66).isStruct=false;

bio(67).blkName='ATS compensator/Tapped delay subsystem/Tapped Delay2';
bio(67).sigName='';
bio(67).portIdx=0;
bio(67).dim=[1024,1];
bio(67).sigWidth=1024;
bio(67).sigAddress='&HybridControllerD2D2_B.CoreSubsys[0].TappedDelay2[0]';
bio(67).ndims=2;
bio(67).size=[];
bio(67).isStruct=false;

bio(68).blkName='Subsystem2/assemble3/Assignment';
bio(68).sigName='';
bio(68).portIdx=0;
bio(68).dim=[1,1];
bio(68).sigWidth=1;
bio(68).sigAddress='&HybridControllerD2D2_B.Assignment';
bio(68).ndims=2;
bio(68).size=[];
bio(68).isStruct=false;

bio(69).blkName='xPC HC/Offset1/Data Store Read';
bio(69).sigName='';
bio(69).portIdx=0;
bio(69).dim=[1,1];
bio(69).sigWidth=1;
bio(69).sigAddress='&HybridControllerD2D2_B.DataStoreRead_k';
bio(69).ndims=2;
bio(69).size=[];
bio(69).isStruct=false;

bio(70).blkName='xPC HC/Offset1/typeConv';
bio(70).sigName='';
bio(70).portIdx=0;
bio(70).dim=[1,1];
bio(70).sigWidth=1;
bio(70).sigAddress='&HybridControllerD2D2_B.typeConv_p';
bio(70).ndims=2;
bio(70).size=[];
bio(70).isStruct=false;

bio(71).blkName='xPC HC/Offset1/Sum1';
bio(71).sigName='';
bio(71).portIdx=0;
bio(71).dim=[1,1];
bio(71).sigWidth=1;
bio(71).sigAddress='&HybridControllerD2D2_B.Sum1_d';
bio(71).ndims=2;
bio(71).size=[];
bio(71).isStruct=false;

bio(72).blkName='xPC HC/Offset1/Switch';
bio(72).sigName='';
bio(72).portIdx=0;
bio(72).dim=[1,1];
bio(72).sigWidth=1;
bio(72).sigAddress='&HybridControllerD2D2_B.Switch_h';
bio(72).ndims=2;
bio(72).size=[];
bio(72).isStruct=false;

bio(73).blkName='xPC HC/Offset2/Data Store Read';
bio(73).sigName='';
bio(73).portIdx=0;
bio(73).dim=[1,1];
bio(73).sigWidth=1;
bio(73).sigAddress='&HybridControllerD2D2_B.DataStoreRead_c';
bio(73).ndims=2;
bio(73).size=[];
bio(73).isStruct=false;

bio(74).blkName='xPC HC/Offset2/typeConv';
bio(74).sigName='';
bio(74).portIdx=0;
bio(74).dim=[1,1];
bio(74).sigWidth=1;
bio(74).sigAddress='&HybridControllerD2D2_B.typeConv';
bio(74).ndims=2;
bio(74).size=[];
bio(74).isStruct=false;

bio(75).blkName='xPC HC/Offset2/Sum1';
bio(75).sigName='';
bio(75).portIdx=0;
bio(75).dim=[1,1];
bio(75).sigWidth=1;
bio(75).sigAddress='&HybridControllerD2D2_B.Sum1';
bio(75).ndims=2;
bio(75).size=[];
bio(75).isStruct=false;

bio(76).blkName='xPC HC/Offset2/Switch';
bio(76).sigName='';
bio(76).portIdx=0;
bio(76).dim=[1,1];
bio(76).sigWidth=1;
bio(76).sigAddress='&HybridControllerD2D2_B.Switch';
bio(76).ndims=2;
bio(76).size=[];
bio(76).isStruct=false;

bio(77).blkName='xPC HC/SubSystem0/typeConv';
bio(77).sigName='';
bio(77).portIdx=0;
bio(77).dim=[1,1];
bio(77).sigWidth=1;
bio(77).sigAddress='&HybridControllerD2D2_B.typeConv_j';
bio(77).ndims=2;
bio(77).size=[];
bio(77).isStruct=false;

bio(78).blkName='xPC HC/SubSystem1/Gain4';
bio(78).sigName='';
bio(78).portIdx=0;
bio(78).dim=[2,1];
bio(78).sigWidth=2;
bio(78).sigAddress='&HybridControllerD2D2_B.Gain4[0]';
bio(78).ndims=2;
bio(78).size=[];
bio(78).isStruct=false;

bio(79).blkName='xPC HC/Subsystem/Dummy Zero';
bio(79).sigName='';
bio(79).portIdx=0;
bio(79).dim=[1,1];
bio(79).sigWidth=1;
bio(79).sigAddress='&HybridControllerD2D2_B.DummyZero';
bio(79).ndims=2;
bio(79).size=[];
bio(79).isStruct=false;

bio(80).blkName='xPC HC/Subsystem4/typeConv1';
bio(80).sigName='';
bio(80).portIdx=0;
bio(80).dim=[1,1];
bio(80).sigWidth=1;
bio(80).sigAddress='&HybridControllerD2D2_B.typeConv1_c';
bio(80).ndims=2;
bio(80).size=[];
bio(80).isStruct=false;

bio(81).blkName='xPC HC/Subsystem4/typeConv2';
bio(81).sigName='';
bio(81).portIdx=0;
bio(81).dim=[3,1];
bio(81).sigWidth=3;
bio(81).sigAddress='&HybridControllerD2D2_B.typeConv2[0]';
bio(81).ndims=2;
bio(81).size=[];
bio(81).isStruct=false;

bio(82).blkName='xPC HC/Subsystem4/typeConv3';
bio(82).sigName='';
bio(82).portIdx=0;
bio(82).dim=[1,1];
bio(82).sigWidth=1;
bio(82).sigAddress='&HybridControllerD2D2_B.typeConv3_h';
bio(82).ndims=2;
bio(82).size=[];
bio(82).isStruct=false;

bio(83).blkName='ATS compensator/Tapped delay subsystem/Discrete Derivative/Diff';
bio(83).sigName='';
bio(83).portIdx=0;
bio(83).dim=[1,1];
bio(83).sigWidth=1;
bio(83).sigAddress='&HybridControllerD2D2_B.CoreSubsys[0].Diff_k';
bio(83).ndims=2;
bio(83).size=[];
bio(83).isStruct=false;

bio(84).blkName='ATS compensator/Tapped delay subsystem/Discrete Derivative/TSamp';
bio(84).sigName='';
bio(84).portIdx=0;
bio(84).dim=[1,1];
bio(84).sigWidth=1;
bio(84).sigAddress='&HybridControllerD2D2_B.CoreSubsys[0].TSamp_j';
bio(84).ndims=2;
bio(84).size=[];
bio(84).isStruct=false;

bio(85).blkName='ATS compensator/Tapped delay subsystem/Discrete Derivative/UD';
bio(85).sigName='U(k-1)';
bio(85).portIdx=0;
bio(85).dim=[1,1];
bio(85).sigWidth=1;
bio(85).sigAddress='&HybridControllerD2D2_B.CoreSubsys[0].Uk1_g';
bio(85).ndims=2;
bio(85).size=[];
bio(85).isStruct=false;

bio(86).blkName='ATS compensator/Tapped delay subsystem/Discrete Derivative1/Diff';
bio(86).sigName='';
bio(86).portIdx=0;
bio(86).dim=[1,1];
bio(86).sigWidth=1;
bio(86).sigAddress='&HybridControllerD2D2_B.CoreSubsys[0].Diff_e';
bio(86).ndims=2;
bio(86).size=[];
bio(86).isStruct=false;

bio(87).blkName='ATS compensator/Tapped delay subsystem/Discrete Derivative1/TSamp';
bio(87).sigName='';
bio(87).portIdx=0;
bio(87).dim=[1,1];
bio(87).sigWidth=1;
bio(87).sigAddress='&HybridControllerD2D2_B.CoreSubsys[0].TSamp_n';
bio(87).ndims=2;
bio(87).size=[];
bio(87).isStruct=false;

bio(88).blkName='ATS compensator/Tapped delay subsystem/Discrete Derivative1/UD';
bio(88).sigName='U(k-1)';
bio(88).portIdx=0;
bio(88).dim=[1,1];
bio(88).sigWidth=1;
bio(88).sigAddress='&HybridControllerD2D2_B.CoreSubsys[0].Uk1_k';
bio(88).ndims=2;
bio(88).size=[];
bio(88).isStruct=false;

bio(89).blkName='xPC HC/Offset1/Counter/Output';
bio(89).sigName='';
bio(89).portIdx=0;
bio(89).dim=[1,1];
bio(89).sigWidth=1;
bio(89).sigAddress='&HybridControllerD2D2_B.Output_b';
bio(89).ndims=2;
bio(89).size=[];
bio(89).isStruct=false;

bio(90).blkName='xPC HC/Offset1/If Action/Data Store Read';
bio(90).sigName='';
bio(90).portIdx=0;
bio(90).dim=[1,1];
bio(90).sigWidth=1;
bio(90).sigAddress='&HybridControllerD2D2_B.DataStoreRead_p';
bio(90).ndims=2;
bio(90).size=[];
bio(90).isStruct=false;

bio(91).blkName='xPC HC/Offset1/If Action/Gain';
bio(91).sigName='';
bio(91).portIdx=0;
bio(91).dim=[1,1];
bio(91).sigWidth=1;
bio(91).sigAddress='&HybridControllerD2D2_B.Gain_n';
bio(91).ndims=2;
bio(91).size=[];
bio(91).isStruct=false;

bio(92).blkName='xPC HC/Offset1/If Action/Sum';
bio(92).sigName='';
bio(92).portIdx=0;
bio(92).dim=[1,1];
bio(92).sigWidth=1;
bio(92).sigAddress='&HybridControllerD2D2_B.Sum_n';
bio(92).ndims=2;
bio(92).size=[];
bio(92).isStruct=false;

bio(93).blkName='xPC HC/Offset2/Counter/Output';
bio(93).sigName='';
bio(93).portIdx=0;
bio(93).dim=[1,1];
bio(93).sigWidth=1;
bio(93).sigAddress='&HybridControllerD2D2_B.Output';
bio(93).ndims=2;
bio(93).size=[];
bio(93).isStruct=false;

bio(94).blkName='xPC HC/Offset2/If Action/Data Store Read';
bio(94).sigName='';
bio(94).portIdx=0;
bio(94).dim=[1,1];
bio(94).sigWidth=1;
bio(94).sigAddress='&HybridControllerD2D2_B.DataStoreRead';
bio(94).ndims=2;
bio(94).size=[];
bio(94).isStruct=false;

bio(95).blkName='xPC HC/Offset2/If Action/Gain';
bio(95).sigName='';
bio(95).portIdx=0;
bio(95).dim=[1,1];
bio(95).sigWidth=1;
bio(95).sigAddress='&HybridControllerD2D2_B.Gain_a';
bio(95).ndims=2;
bio(95).size=[];
bio(95).isStruct=false;

bio(96).blkName='xPC HC/Offset2/If Action/Sum';
bio(96).sigName='';
bio(96).portIdx=0;
bio(96).dim=[1,1];
bio(96).sigWidth=1;
bio(96).sigAddress='&HybridControllerD2D2_B.Sum';
bio(96).ndims=2;
bio(96).size=[];
bio(96).isStruct=false;

bio(97).blkName='xPC HC/SubSystem0/Detect Fall Nonpositive/FixPt Relational Operator';
bio(97).sigName='';
bio(97).portIdx=0;
bio(97).dim=[1,1];
bio(97).sigWidth=1;
bio(97).sigAddress='&HybridControllerD2D2_B.FixPtRelationalOperator_g';
bio(97).ndims=2;
bio(97).size=[];
bio(97).isStruct=false;

bio(98).blkName='xPC HC/SubSystem0/Detect Fall Nonpositive/Delay Input1';
bio(98).sigName='U(k-1)';
bio(98).portIdx=0;
bio(98).dim=[1,1];
bio(98).sigWidth=1;
bio(98).sigAddress='&HybridControllerD2D2_B.Uk1_j';
bio(98).ndims=2;
bio(98).size=[];
bio(98).isStruct=false;

bio(99).blkName='xPC HC/SubSystem0/Detect Rise Positive/FixPt Relational Operator';
bio(99).sigName='';
bio(99).portIdx=0;
bio(99).dim=[1,1];
bio(99).sigWidth=1;
bio(99).sigAddress='&HybridControllerD2D2_B.FixPtRelationalOperator';
bio(99).ndims=2;
bio(99).size=[];
bio(99).isStruct=false;

bio(100).blkName='xPC HC/SubSystem0/Detect Rise Positive/Delay Input1';
bio(100).sigName='U(k-1)';
bio(100).portIdx=0;
bio(100).dim=[1,1];
bio(100).sigWidth=1;
bio(100).sigAddress='&HybridControllerD2D2_B.Uk1';
bio(100).ndims=2;
bio(100).size=[];
bio(100).isStruct=false;

bio(101).blkName='xPC HC/SubSystem1/Subsystem2/Add';
bio(101).sigName='';
bio(101).portIdx=0;
bio(101).dim=[1,1];
bio(101).sigWidth=1;
bio(101).sigAddress='&HybridControllerD2D2_B.Add';
bio(101).ndims=2;
bio(101).size=[];
bio(101).isStruct=false;

bio(102).blkName='xPC HC/Offset1/Counter/Increment Real World/FixPt Sum1';
bio(102).sigName='';
bio(102).portIdx=0;
bio(102).dim=[1,1];
bio(102).sigWidth=1;
bio(102).sigAddress='&HybridControllerD2D2_B.FixPtSum1';
bio(102).ndims=2;
bio(102).size=[];
bio(102).isStruct=false;

bio(103).blkName='xPC HC/Offset1/Counter/Wrap To Zero/FixPt Switch';
bio(103).sigName='';
bio(103).portIdx=0;
bio(103).dim=[1,1];
bio(103).sigWidth=1;
bio(103).sigAddress='&HybridControllerD2D2_B.FixPtSwitch';
bio(103).ndims=2;
bio(103).size=[];
bio(103).isStruct=false;

bio(104).blkName='xPC HC/Offset2/Counter/Increment Real World/FixPt Sum1';
bio(104).sigName='';
bio(104).portIdx=0;
bio(104).dim=[1,1];
bio(104).sigWidth=1;
bio(104).sigAddress='&HybridControllerD2D2_B.FixPtSum1_a';
bio(104).ndims=2;
bio(104).size=[];
bio(104).isStruct=false;

bio(105).blkName='xPC HC/Offset2/Counter/Wrap To Zero/FixPt Switch';
bio(105).sigName='';
bio(105).portIdx=0;
bio(105).dim=[1,1];
bio(105).sigWidth=1;
bio(105).sigAddress='&HybridControllerD2D2_B.FixPtSwitch_m';
bio(105).ndims=2;
bio(105).size=[];
bio(105).isStruct=false;

bio(106).blkName='xPC HC/SubSystem0/Detect Fall Nonpositive/Nonpositive/Compare';
bio(106).sigName='';
bio(106).portIdx=0;
bio(106).dim=[1,1];
bio(106).sigWidth=1;
bio(106).sigAddress='&HybridControllerD2D2_B.Compare_j';
bio(106).ndims=2;
bio(106).size=[];
bio(106).isStruct=false;

bio(107).blkName='xPC HC/SubSystem0/Detect Rise Positive/Positive/Compare';
bio(107).sigName='';
bio(107).portIdx=0;
bio(107).dim=[1,1];
bio(107).sigWidth=1;
bio(107).sigAddress='&HybridControllerD2D2_B.Compare';
bio(107).ndims=2;
bio(107).size=[];
bio(107).isStruct=false;

bio(108).blkName='xPC HC/SubSystem1/For Each Subsystem/SubSystem/measDsp In';
bio(108).sigName='';
bio(108).portIdx=0;
bio(108).dim=[1,1];
bio(108).sigWidth=1;
bio(108).sigAddress='&HybridControllerD2D2_B.CoreSubsys_p[0].measDspIn';
bio(108).ndims=2;
bio(108).size=[];
bio(108).isStruct=false;

bio(109).blkName='xPC HC/SubSystem1/For Each Subsystem/SubSystem/measFrc In';
bio(109).sigName='';
bio(109).portIdx=0;
bio(109).dim=[1,1];
bio(109).sigWidth=1;
bio(109).sigAddress='&HybridControllerD2D2_B.CoreSubsys_p[0].measFrcIn';
bio(109).ndims=2;
bio(109).size=[];
bio(109).isStruct=false;

bio(110).blkName='xPC HC/SubSystem1/For Each Subsystem/Subsystem/Add';
bio(110).sigName='';
bio(110).portIdx=0;
bio(110).dim=[1,1];
bio(110).sigWidth=1;
bio(110).sigAddress='&HybridControllerD2D2_B.CoreSubsys_p[0].Add';
bio(110).ndims=2;
bio(110).size=[];
bio(110).isStruct=false;

bio(111).blkName='xPC HC/SubSystem1/Subsystem2/If Action Subsystem1/Relational Operator';
bio(111).sigName='';
bio(111).portIdx=0;
bio(111).dim=[1,1];
bio(111).sigWidth=1;
bio(111).sigAddress='&HybridControllerD2D2_B.IfActionSubsystem1_h.RelationalOperator';
bio(111).ndims=2;
bio(111).size=[];
bio(111).isStruct=false;

bio(112).blkName='xPC HC/SubSystem1/Subsystem2/If Action Subsystem2/Relational Operator';
bio(112).sigName='';
bio(112).portIdx=0;
bio(112).dim=[1,1];
bio(112).sigWidth=1;
bio(112).sigAddress='&HybridControllerD2D2_B.IfActionSubsystem2.RelationalOperator';
bio(112).ndims=2;
bio(112).size=[];
bio(112).isStruct=false;

bio(113).blkName='xPC HC/SubSystem1/For Each Subsystem/Subsystem/If Action Subsystem1/Relational Operator';
bio(113).sigName='';
bio(113).portIdx=0;
bio(113).dim=[1,1];
bio(113).sigWidth=1;
bio(113).sigAddress='&HybridControllerD2D2_B.CoreSubsys_p[0].IfActionSubsystem1.RelationalOperator';
bio(113).ndims=2;
bio(113).size=[];
bio(113).isStruct=false;

bio(114).blkName='xPC HC/SubSystem1/For Each Subsystem/Subsystem/If Action Subsystem2/Relational Operator';
bio(114).sigName='';
bio(114).portIdx=0;
bio(114).dim=[1,1];
bio(114).sigWidth=1;
bio(114).sigAddress='&HybridControllerD2D2_B.CoreSubsys_p[0].IfActionSubsystem2.RelationalOperator';
bio(114).ndims=2;
bio(114).size=[];
bio(114).isStruct=false;

function len = getlenBIO
len = 114;

