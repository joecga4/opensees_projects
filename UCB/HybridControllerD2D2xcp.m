function xcp = HybridControllerD2D2xcp

xcp.events     =  repmat(struct('id',{}, 'sampletime', {}, 'offset', {}), getNumEvents, 1 );
xcp.parameters =  repmat(struct('symbol',{}, 'size', {}, 'dtname', {}, 'baseaddr', {}), getNumParameters, 1 );
xcp.signals    =  repmat(struct('symbol',{}), getNumSignals, 1 );
xcp.models     =  cell(1,getNumModels);
    
xcp.models{1} = 'HybridControllerD2D2';
   
   
         
xcp.events(1).id         = 0;
xcp.events(1).sampletime = 0.0009765625;
xcp.events(1).offset     = 0.0;
    
xcp.signals(1).symbol =  'HybridControllerD2D2_B.ATSSwitch';
    
xcp.signals(2).symbol =  'HybridControllerD2D2_B.CoreSubsys[0].apar';
    
xcp.signals(3).symbol =  'HybridControllerD2D2_B.CoreSubsys[0].ut_pred';
    
xcp.signals(4).symbol =  'HybridControllerD2D2_B.CoreSubsys[0].TappedDelay_d';
    
xcp.signals(5).symbol =  'HybridControllerD2D2_B.CoreSubsys[0].ManualSwitch';
    
xcp.signals(6).symbol =  'HybridControllerD2D2_B.CoreSubsys[0].ManualSwitch1';
    
xcp.signals(7).symbol =  'HybridControllerD2D2_B.CoreSubsys[0].Butterworthfilter';
    
xcp.signals(8).symbol =  'HybridControllerD2D2_B.CoreSubsys[0].Butterworthfilter1';
    
xcp.signals(9).symbol =  'HybridControllerD2D2_B.CoreSubsys[0].UnitDelay';
    
xcp.signals(10).symbol =  'HybridControllerD2D2_B.CoreSubsys[0].UnitDelay1';
    
xcp.signals(11).symbol =  'HybridControllerD2D2_B.Saturation';
    
xcp.signals(12).symbol =  'HybridControllerD2D2_B.MovingAverageFilter';
    
xcp.signals(13).symbol =  'HybridControllerD2D2_B.MovingAverageFilter1';
    
xcp.signals(14).symbol =  'HybridControllerD2D2_B.typeConv1';
    
xcp.signals(15).symbol =  'HybridControllerD2D2_B.typeConv2_p';
    
xcp.signals(16).symbol =  'HybridControllerD2D2_B.typeConv3';
    
xcp.signals(17).symbol =  'HybridControllerD2D2_B.typeConv4';
    
xcp.signals(18).symbol =  'HybridControllerD2D2_B.typeConv5';
    
xcp.signals(19).symbol =  'HybridControllerD2D2_B.typeConv6';
    
xcp.signals(20).symbol =  'HybridControllerD2D2_B.typeConv7';
    
xcp.signals(21).symbol =  'HybridControllerD2D2_B.typeConv8';
    
xcp.signals(22).symbol =  'HybridControllerD2D2_B.Read';
    
xcp.signals(23).symbol =  'HybridControllerD2D2_B.SCGTunpack_o1';
    
xcp.signals(24).symbol =  'HybridControllerD2D2_B.SCGTunpack_o2';
    
xcp.signals(25).symbol =  'HybridControllerD2D2_B.SCGTunpack_o3';
    
xcp.signals(26).symbol =  'HybridControllerD2D2_B.SCGTunpack_o4';
    
xcp.signals(27).symbol =  'HybridControllerD2D2_B.SCGTunpack_o5';
    
xcp.signals(28).symbol =  'HybridControllerD2D2_B.SCGTunpack_o6';
    
xcp.signals(29).symbol =  'HybridControllerD2D2_B.SCGTunpack_o7';
    
xcp.signals(30).symbol =  'HybridControllerD2D2_B.SCGTunpack_o8';
    
xcp.signals(31).symbol =  'HybridControllerD2D2_B.typeConv1_p';
    
xcp.signals(32).symbol =  'HybridControllerD2D2_B.typeConv2_i';
    
xcp.signals(33).symbol =  'HybridControllerD2D2_B.typeConv3_k';
    
xcp.signals(34).symbol =  'HybridControllerD2D2_B.typeConv4_d';
    
xcp.signals(35).symbol =  'HybridControllerD2D2_B.typeConv5_d';
    
xcp.signals(36).symbol =  'HybridControllerD2D2_B.SCGTpack';
    
xcp.signals(37).symbol =  'HybridControllerD2D2_B.comD';
    
xcp.signals(38).symbol =  'HybridControllerD2D2_B.comV';
    
xcp.signals(39).symbol =  'HybridControllerD2D2_B.comA';
    
xcp.signals(40).symbol =  'HybridControllerD2D2_B.state';
    
xcp.signals(41).symbol =  'HybridControllerD2D2_B.i';
    
xcp.signals(42).symbol =  'HybridControllerD2D2_B.atTarget';
    
xcp.signals(43).symbol =  'HybridControllerD2D2_B.counter';
    
xcp.signals(44).symbol =  'HybridControllerD2D2_B.switchPC';
    
xcp.signals(45).symbol =  'HybridControllerD2D2_B.Gain';
    
xcp.signals(46).symbol =  'HybridControllerD2D2_B.Gain1';
    
xcp.signals(47).symbol =  'HybridControllerD2D2_B.measSignal';
    
xcp.signals(48).symbol =  'HybridControllerD2D2_B.MovingAverageFilter_p';
    
xcp.signals(49).symbol =  'HybridControllerD2D2_B.MovingAverageFilter1_j';
    
xcp.signals(50).symbol =  'HybridControllerD2D2_B.CoreSubsys[0].A11';
    
xcp.signals(51).symbol =  'HybridControllerD2D2_B.CoreSubsys[0].A12';
    
xcp.signals(52).symbol =  'HybridControllerD2D2_B.CoreSubsys[0].DotProduct10';
    
xcp.signals(53).symbol =  'HybridControllerD2D2_B.CoreSubsys[0].DotProduct11';
    
xcp.signals(54).symbol =  'HybridControllerD2D2_B.CoreSubsys[0].DotProduct12';
    
xcp.signals(55).symbol =  'HybridControllerD2D2_B.CoreSubsys[0].A13';
    
xcp.signals(56).symbol =  'HybridControllerD2D2_B.CoreSubsys[0].A22';
    
xcp.signals(57).symbol =  'HybridControllerD2D2_B.CoreSubsys[0].A23';
    
xcp.signals(58).symbol =  'HybridControllerD2D2_B.CoreSubsys[0].A33';
    
xcp.signals(59).symbol =  'HybridControllerD2D2_B.CoreSubsys[0].Diff';
    
xcp.signals(60).symbol =  'HybridControllerD2D2_B.CoreSubsys[0].TSamp';
    
xcp.signals(61).symbol =  'HybridControllerD2D2_B.CoreSubsys[0].Uk1';
    
xcp.signals(62).symbol =  'HybridControllerD2D2_B.CoreSubsys[0].Diff_i';
    
xcp.signals(63).symbol =  'HybridControllerD2D2_B.CoreSubsys[0].TSamp_f';
    
xcp.signals(64).symbol =  'HybridControllerD2D2_B.CoreSubsys[0].Uk1_e';
    
xcp.signals(65).symbol =  'HybridControllerD2D2_B.CoreSubsys[0].TappedDelay';
    
xcp.signals(66).symbol =  'HybridControllerD2D2_B.CoreSubsys[0].TappedDelay1';
    
xcp.signals(67).symbol =  'HybridControllerD2D2_B.CoreSubsys[0].TappedDelay2';
    
xcp.signals(68).symbol =  'HybridControllerD2D2_B.Assignment';
    
xcp.signals(69).symbol =  'HybridControllerD2D2_B.DataStoreRead_k';
    
xcp.signals(70).symbol =  'HybridControllerD2D2_B.typeConv_p';
    
xcp.signals(71).symbol =  'HybridControllerD2D2_B.Sum1_d';
    
xcp.signals(72).symbol =  'HybridControllerD2D2_B.Switch_h';
    
xcp.signals(73).symbol =  'HybridControllerD2D2_B.DataStoreRead_c';
    
xcp.signals(74).symbol =  'HybridControllerD2D2_B.typeConv';
    
xcp.signals(75).symbol =  'HybridControllerD2D2_B.Sum1';
    
xcp.signals(76).symbol =  'HybridControllerD2D2_B.Switch';
    
xcp.signals(77).symbol =  'HybridControllerD2D2_B.typeConv_j';
    
xcp.signals(78).symbol =  'HybridControllerD2D2_B.Gain4';
    
xcp.signals(79).symbol =  'HybridControllerD2D2_B.DummyZero';
    
xcp.signals(80).symbol =  'HybridControllerD2D2_B.typeConv1_c';
    
xcp.signals(81).symbol =  'HybridControllerD2D2_B.typeConv2';
    
xcp.signals(82).symbol =  'HybridControllerD2D2_B.typeConv3_h';
    
xcp.signals(83).symbol =  'HybridControllerD2D2_B.CoreSubsys[0].Diff_k';
    
xcp.signals(84).symbol =  'HybridControllerD2D2_B.CoreSubsys[0].TSamp_j';
    
xcp.signals(85).symbol =  'HybridControllerD2D2_B.CoreSubsys[0].Uk1_g';
    
xcp.signals(86).symbol =  'HybridControllerD2D2_B.CoreSubsys[0].Diff_e';
    
xcp.signals(87).symbol =  'HybridControllerD2D2_B.CoreSubsys[0].TSamp_n';
    
xcp.signals(88).symbol =  'HybridControllerD2D2_B.CoreSubsys[0].Uk1_k';
    
xcp.signals(89).symbol =  'HybridControllerD2D2_B.Output_b';
    
xcp.signals(90).symbol =  'HybridControllerD2D2_B.DataStoreRead_p';
    
xcp.signals(91).symbol =  'HybridControllerD2D2_B.Gain_n';
    
xcp.signals(92).symbol =  'HybridControllerD2D2_B.Sum_n';
    
xcp.signals(93).symbol =  'HybridControllerD2D2_B.Output';
    
xcp.signals(94).symbol =  'HybridControllerD2D2_B.DataStoreRead';
    
xcp.signals(95).symbol =  'HybridControllerD2D2_B.Gain_a';
    
xcp.signals(96).symbol =  'HybridControllerD2D2_B.Sum';
    
xcp.signals(97).symbol =  'HybridControllerD2D2_B.FixPtRelationalOperator_g';
    
xcp.signals(98).symbol =  'HybridControllerD2D2_B.Uk1_j';
    
xcp.signals(99).symbol =  'HybridControllerD2D2_B.FixPtRelationalOperator';
    
xcp.signals(100).symbol =  'HybridControllerD2D2_B.Uk1';
    
xcp.signals(101).symbol =  'HybridControllerD2D2_B.Add';
    
xcp.signals(102).symbol =  'HybridControllerD2D2_B.FixPtSum1';
    
xcp.signals(103).symbol =  'HybridControllerD2D2_B.FixPtSwitch';
    
xcp.signals(104).symbol =  'HybridControllerD2D2_B.FixPtSum1_a';
    
xcp.signals(105).symbol =  'HybridControllerD2D2_B.FixPtSwitch_m';
    
xcp.signals(106).symbol =  'HybridControllerD2D2_B.Compare_j';
    
xcp.signals(107).symbol =  'HybridControllerD2D2_B.Compare';
    
xcp.signals(108).symbol =  'HybridControllerD2D2_B.CoreSubsys_p[0].measDspIn';
    
xcp.signals(109).symbol =  'HybridControllerD2D2_B.CoreSubsys_p[0].measFrcIn';
    
xcp.signals(110).symbol =  'HybridControllerD2D2_B.CoreSubsys_p[0].Add';
    
xcp.signals(111).symbol =  'HybridControllerD2D2_B.IfActionSubsystem1_h.RelationalOperator';
    
xcp.signals(112).symbol =  'HybridControllerD2D2_B.IfActionSubsystem2.RelationalOperator';
    
xcp.signals(113).symbol =  'HybridControllerD2D2_B.CoreSubsys_p[0].IfActionSubsystem1.RelationalOperator';
    
xcp.signals(114).symbol =  'HybridControllerD2D2_B.CoreSubsys_p[0].IfActionSubsystem2.RelationalOperator';
         
xcp.parameters(1).symbol = 'HybridControllerD2D2_P.xPCHC_upFact';
xcp.parameters(1).size   =  1;       
xcp.parameters(1).dtname = 'int32_T'; 
xcp.parameters(2).baseaddr = '&HybridControllerD2D2_P.xPCHC_upFact';     
         
xcp.parameters(2).symbol = 'HybridControllerD2D2_P.ctlmodes_Value';
xcp.parameters(2).size   =  1;       
xcp.parameters(2).dtname = 'real_T'; 
xcp.parameters(3).baseaddr = '&HybridControllerD2D2_P.ctlmodes_Value';     
         
xcp.parameters(3).symbol = 'HybridControllerD2D2_P.forcecmds_Value';
xcp.parameters(3).size   =  1;       
xcp.parameters(3).dtname = 'real_T'; 
xcp.parameters(4).baseaddr = '&HybridControllerD2D2_P.forcecmds_Value';     
         
xcp.parameters(4).symbol = 'HybridControllerD2D2_P.masterspan_Value';
xcp.parameters(4).size   =  1;       
xcp.parameters(4).dtname = 'real_T'; 
xcp.parameters(5).baseaddr = '&HybridControllerD2D2_P.masterspan_Value';     
         
xcp.parameters(5).symbol = 'HybridControllerD2D2_P.valvecmds_Value';
xcp.parameters(5).size   =  1;       
xcp.parameters(5).dtname = 'real_T'; 
xcp.parameters(6).baseaddr = '&HybridControllerD2D2_P.valvecmds_Value';     
         
xcp.parameters(6).symbol = 'HybridControllerD2D2_P.Setup_P1';
xcp.parameters(6).size   =  1;       
xcp.parameters(6).dtname = 'real_T'; 
xcp.parameters(7).baseaddr = '&HybridControllerD2D2_P.Setup_P1';     
         
xcp.parameters(7).symbol = 'HybridControllerD2D2_P.Setup_P2';
xcp.parameters(7).size   =  1;       
xcp.parameters(7).dtname = 'real_T'; 
xcp.parameters(8).baseaddr = '&HybridControllerD2D2_P.Setup_P2';     
         
xcp.parameters(8).symbol = 'HybridControllerD2D2_P.Setup_P3';
xcp.parameters(8).size   =  15;       
xcp.parameters(8).dtname = 'real_T'; 
xcp.parameters(9).baseaddr = '&HybridControllerD2D2_P.Setup_P3[0]';     
         
xcp.parameters(9).symbol = 'HybridControllerD2D2_P.Setup_P4';
xcp.parameters(9).size   =  1;       
xcp.parameters(9).dtname = 'real_T'; 
xcp.parameters(10).baseaddr = '&HybridControllerD2D2_P.Setup_P4';     
         
xcp.parameters(10).symbol = 'HybridControllerD2D2_P.Setup_P5';
xcp.parameters(10).size   =  1;       
xcp.parameters(10).dtname = 'real_T'; 
xcp.parameters(11).baseaddr = '&HybridControllerD2D2_P.Setup_P5';     
         
xcp.parameters(11).symbol = 'HybridControllerD2D2_P.Setup_P6';
xcp.parameters(11).size   =  1;       
xcp.parameters(11).dtname = 'real_T'; 
xcp.parameters(12).baseaddr = '&HybridControllerD2D2_P.Setup_P6';     
         
xcp.parameters(12).symbol = 'HybridControllerD2D2_P.ATSSwitch_CurrentSetting';
xcp.parameters(12).size   =  1;       
xcp.parameters(12).dtname = 'uint8_T'; 
xcp.parameters(13).baseaddr = '&HybridControllerD2D2_P.ATSSwitch_CurrentSetting';     
         
xcp.parameters(13).symbol = 'HybridControllerD2D2_P.CoreSubsys.DiscreteDerivative_ICPrevScaled';
xcp.parameters(13).size   =  1;       
xcp.parameters(13).dtname = 'real_T'; 
xcp.parameters(14).baseaddr = '&HybridControllerD2D2_P.CoreSubsys.DiscreteDerivative_ICPrevScaled';     
         
xcp.parameters(14).symbol = 'HybridControllerD2D2_P.CoreSubsys.DiscreteDerivative1_ICPrevScale';
xcp.parameters(14).size   =  1;       
xcp.parameters(14).dtname = 'real_T'; 
xcp.parameters(15).baseaddr = '&HybridControllerD2D2_P.CoreSubsys.DiscreteDerivative1_ICPrevScale';     
         
xcp.parameters(15).symbol = 'HybridControllerD2D2_P.CoreSubsys.TappedDelay_vinit_e';
xcp.parameters(15).size   =  1;       
xcp.parameters(15).dtname = 'real_T'; 
xcp.parameters(16).baseaddr = '&HybridControllerD2D2_P.CoreSubsys.TappedDelay_vinit_e';     
         
xcp.parameters(16).symbol = 'HybridControllerD2D2_P.CoreSubsys.ManualSwitch_CurrentSetting';
xcp.parameters(16).size   =  1;       
xcp.parameters(16).dtname = 'uint8_T'; 
xcp.parameters(17).baseaddr = '&HybridControllerD2D2_P.CoreSubsys.ManualSwitch_CurrentSetting';     
         
xcp.parameters(17).symbol = 'HybridControllerD2D2_P.CoreSubsys.ManualSwitch1_CurrentSetting';
xcp.parameters(17).size   =  1;       
xcp.parameters(17).dtname = 'uint8_T'; 
xcp.parameters(18).baseaddr = '&HybridControllerD2D2_P.CoreSubsys.ManualSwitch1_CurrentSetting';     
         
xcp.parameters(18).symbol = 'HybridControllerD2D2_P.CoreSubsys.Butterworthfilter_InitialStates';
xcp.parameters(18).size   =  1;       
xcp.parameters(18).dtname = 'real_T'; 
xcp.parameters(19).baseaddr = '&HybridControllerD2D2_P.CoreSubsys.Butterworthfilter_InitialStates';     
         
xcp.parameters(19).symbol = 'HybridControllerD2D2_P.CoreSubsys.Butterworthfilter1_InitialState';
xcp.parameters(19).size   =  1;       
xcp.parameters(19).dtname = 'real_T'; 
xcp.parameters(20).baseaddr = '&HybridControllerD2D2_P.CoreSubsys.Butterworthfilter1_InitialState';     
         
xcp.parameters(20).symbol = 'HybridControllerD2D2_P.CoreSubsys.UnitDelay_InitialCondition';
xcp.parameters(20).size   =  1;       
xcp.parameters(20).dtname = 'real_T'; 
xcp.parameters(21).baseaddr = '&HybridControllerD2D2_P.CoreSubsys.UnitDelay_InitialCondition';     
         
xcp.parameters(21).symbol = 'HybridControllerD2D2_P.CoreSubsys.UnitDelay1_InitialCondition';
xcp.parameters(21).size   =  1;       
xcp.parameters(21).dtname = 'real_T'; 
xcp.parameters(22).baseaddr = '&HybridControllerD2D2_P.CoreSubsys.UnitDelay1_InitialCondition';     
         
xcp.parameters(22).symbol = 'HybridControllerD2D2_P.assemble3_id';
xcp.parameters(22).size   =  1;       
xcp.parameters(22).dtname = 'real_T'; 
xcp.parameters(23).baseaddr = '&HybridControllerD2D2_P.assemble3_id';     
         
xcp.parameters(23).symbol = 'HybridControllerD2D2_P.Saturation_UpperSat';
xcp.parameters(23).size   =  1;       
xcp.parameters(23).dtname = 'real_T'; 
xcp.parameters(24).baseaddr = '&HybridControllerD2D2_P.Saturation_UpperSat';     
         
xcp.parameters(24).symbol = 'HybridControllerD2D2_P.Saturation_LowerSat';
xcp.parameters(24).size   =  1;       
xcp.parameters(24).dtname = 'real_T'; 
xcp.parameters(25).baseaddr = '&HybridControllerD2D2_P.Saturation_LowerSat';     
         
xcp.parameters(25).symbol = 'HybridControllerD2D2_P.MovingAverageFilter_numSample_c';
xcp.parameters(25).size   =  1;       
xcp.parameters(25).dtname = 'real_T'; 
xcp.parameters(26).baseaddr = '&HybridControllerD2D2_P.MovingAverageFilter_numSample_c';     
         
xcp.parameters(26).symbol = 'HybridControllerD2D2_P.MovingAverageFilter_InitialSt_i';
xcp.parameters(26).size   =  1;       
xcp.parameters(26).dtname = 'real_T'; 
xcp.parameters(27).baseaddr = '&HybridControllerD2D2_P.MovingAverageFilter_InitialSt_i';     
         
xcp.parameters(27).symbol = 'HybridControllerD2D2_P.MovingAverageFilter1_numSampl_b';
xcp.parameters(27).size   =  1;       
xcp.parameters(27).dtname = 'real_T'; 
xcp.parameters(28).baseaddr = '&HybridControllerD2D2_P.MovingAverageFilter1_numSampl_b';     
         
xcp.parameters(28).symbol = 'HybridControllerD2D2_P.MovingAverageFilter1_InitialS_o';
xcp.parameters(28).size   =  1;       
xcp.parameters(28).dtname = 'real_T'; 
xcp.parameters(29).baseaddr = '&HybridControllerD2D2_P.MovingAverageFilter1_InitialS_o';     
         
xcp.parameters(29).symbol = 'HybridControllerD2D2_P.Read_P1';
xcp.parameters(29).size   =  1;       
xcp.parameters(29).dtname = 'real_T'; 
xcp.parameters(30).baseaddr = '&HybridControllerD2D2_P.Read_P1';     
         
xcp.parameters(30).symbol = 'HybridControllerD2D2_P.Read_P2';
xcp.parameters(30).size   =  1;       
xcp.parameters(30).dtname = 'real_T'; 
xcp.parameters(31).baseaddr = '&HybridControllerD2D2_P.Read_P2';     
         
xcp.parameters(31).symbol = 'HybridControllerD2D2_P.Read_P3';
xcp.parameters(31).size   =  1;       
xcp.parameters(31).dtname = 'real_T'; 
xcp.parameters(32).baseaddr = '&HybridControllerD2D2_P.Read_P3';     
         
xcp.parameters(32).symbol = 'HybridControllerD2D2_P.Read_P4';
xcp.parameters(32).size   =  1;       
xcp.parameters(32).dtname = 'real_T'; 
xcp.parameters(33).baseaddr = '&HybridControllerD2D2_P.Read_P4';     
         
xcp.parameters(33).symbol = 'HybridControllerD2D2_P.Read_P5';
xcp.parameters(33).size   =  1;       
xcp.parameters(33).dtname = 'real_T'; 
xcp.parameters(34).baseaddr = '&HybridControllerD2D2_P.Read_P5';     
         
xcp.parameters(34).symbol = 'HybridControllerD2D2_P.SCGTunpack_P1';
xcp.parameters(34).size   =  8;       
xcp.parameters(34).dtname = 'real_T'; 
xcp.parameters(35).baseaddr = '&HybridControllerD2D2_P.SCGTunpack_P1[0]';     
         
xcp.parameters(35).symbol = 'HybridControllerD2D2_P.SCGTunpack_P2';
xcp.parameters(35).size   =  16;       
xcp.parameters(35).dtname = 'real_T'; 
xcp.parameters(36).baseaddr = '&HybridControllerD2D2_P.SCGTunpack_P2[0]';     
         
xcp.parameters(36).symbol = 'HybridControllerD2D2_P.SCGTunpack_P3';
xcp.parameters(36).size   =  8;       
xcp.parameters(36).dtname = 'real_T'; 
xcp.parameters(37).baseaddr = '&HybridControllerD2D2_P.SCGTunpack_P3[0]';     
         
xcp.parameters(37).symbol = 'HybridControllerD2D2_P.SCGTunpack_P4';
xcp.parameters(37).size   =  1;       
xcp.parameters(37).dtname = 'real_T'; 
xcp.parameters(38).baseaddr = '&HybridControllerD2D2_P.SCGTunpack_P4';     
         
xcp.parameters(38).symbol = 'HybridControllerD2D2_P.SCGTpack_P1';
xcp.parameters(38).size   =  5;       
xcp.parameters(38).dtname = 'real_T'; 
xcp.parameters(39).baseaddr = '&HybridControllerD2D2_P.SCGTpack_P1[0]';     
         
xcp.parameters(39).symbol = 'HybridControllerD2D2_P.SCGTpack_P2';
xcp.parameters(39).size   =  10;       
xcp.parameters(39).dtname = 'real_T'; 
xcp.parameters(40).baseaddr = '&HybridControllerD2D2_P.SCGTpack_P2[0]';     
         
xcp.parameters(40).symbol = 'HybridControllerD2D2_P.SCGTpack_P3';
xcp.parameters(40).size   =  5;       
xcp.parameters(40).dtname = 'real_T'; 
xcp.parameters(41).baseaddr = '&HybridControllerD2D2_P.SCGTpack_P3[0]';     
         
xcp.parameters(41).symbol = 'HybridControllerD2D2_P.SCGTpack_P4';
xcp.parameters(41).size   =  1;       
xcp.parameters(41).dtname = 'real_T'; 
xcp.parameters(42).baseaddr = '&HybridControllerD2D2_P.SCGTpack_P4';     
         
xcp.parameters(42).symbol = 'HybridControllerD2D2_P.Write_P1';
xcp.parameters(42).size   =  1;       
xcp.parameters(42).dtname = 'real_T'; 
xcp.parameters(43).baseaddr = '&HybridControllerD2D2_P.Write_P1';     
         
xcp.parameters(43).symbol = 'HybridControllerD2D2_P.Write_P2';
xcp.parameters(43).size   =  1;       
xcp.parameters(43).dtname = 'real_T'; 
xcp.parameters(44).baseaddr = '&HybridControllerD2D2_P.Write_P2';     
         
xcp.parameters(44).symbol = 'HybridControllerD2D2_P.Write_P3';
xcp.parameters(44).size   =  1;       
xcp.parameters(44).dtname = 'real_T'; 
xcp.parameters(45).baseaddr = '&HybridControllerD2D2_P.Write_P3';     
         
xcp.parameters(45).symbol = 'HybridControllerD2D2_P.Write_P4';
xcp.parameters(45).size   =  1;       
xcp.parameters(45).dtname = 'real_T'; 
xcp.parameters(46).baseaddr = '&HybridControllerD2D2_P.Write_P4';     
         
xcp.parameters(46).symbol = 'HybridControllerD2D2_P.Write_P5';
xcp.parameters(46).size   =  1;       
xcp.parameters(46).dtname = 'real_T'; 
xcp.parameters(47).baseaddr = '&HybridControllerD2D2_P.Write_P5';     
         
xcp.parameters(47).symbol = 'HybridControllerD2D2_P.iMem_InitialValue';
xcp.parameters(47).size   =  1;       
xcp.parameters(47).dtname = 'real_T'; 
xcp.parameters(48).baseaddr = '&HybridControllerD2D2_P.iMem_InitialValue';     
         
xcp.parameters(48).symbol = 'HybridControllerD2D2_P.sMem_InitialValue';
xcp.parameters(48).size   =  1;       
xcp.parameters(48).dtname = 'int32_T'; 
xcp.parameters(49).baseaddr = '&HybridControllerD2D2_P.sMem_InitialValue';     
         
xcp.parameters(49).symbol = 'HybridControllerD2D2_P.tMem_InitialValue';
xcp.parameters(49).size   =  1;       
xcp.parameters(49).dtname = 'int32_T'; 
xcp.parameters(50).baseaddr = '&HybridControllerD2D2_P.tMem_InitialValue';     
         
xcp.parameters(50).symbol = 'HybridControllerD2D2_P.Offset1_nOffset';
xcp.parameters(50).size   =  1;       
xcp.parameters(50).dtname = 'real_T'; 
xcp.parameters(51).baseaddr = '&HybridControllerD2D2_P.Offset1_nOffset';     
         
xcp.parameters(51).symbol = 'HybridControllerD2D2_P.Offset2_nOffset';
xcp.parameters(51).size   =  1;       
xcp.parameters(51).dtname = 'real_T'; 
xcp.parameters(52).baseaddr = '&HybridControllerD2D2_P.Offset2_nOffset';     
         
xcp.parameters(52).symbol = 'HybridControllerD2D2_P.PredictorCorrector_N';
xcp.parameters(52).size   =  1;       
xcp.parameters(52).dtname = 'int32_T'; 
xcp.parameters(53).baseaddr = '&HybridControllerD2D2_P.PredictorCorrector_N';     
         
xcp.parameters(53).symbol = 'HybridControllerD2D2_P.PredictorCorrector_nDOF';
xcp.parameters(53).size   =  1;       
xcp.parameters(53).dtname = 'int32_T'; 
xcp.parameters(54).baseaddr = '&HybridControllerD2D2_P.PredictorCorrector_nDOF';     
         
xcp.parameters(54).symbol = 'HybridControllerD2D2_P.newTarget_Value';
xcp.parameters(54).size   =  1;       
xcp.parameters(54).dtname = 'int32_T'; 
xcp.parameters(55).baseaddr = '&HybridControllerD2D2_P.newTarget_Value';     
         
xcp.parameters(55).symbol = 'HybridControllerD2D2_P.targSignal_Value';
xcp.parameters(55).size   =  1;       
xcp.parameters(55).dtname = 'real_T'; 
xcp.parameters(56).baseaddr = '&HybridControllerD2D2_P.targSignal_Value';     
         
xcp.parameters(56).symbol = 'HybridControllerD2D2_P.Gain_Gain';
xcp.parameters(56).size   =  1;       
xcp.parameters(56).dtname = 'real_T'; 
xcp.parameters(57).baseaddr = '&HybridControllerD2D2_P.Gain_Gain';     
         
xcp.parameters(57).symbol = 'HybridControllerD2D2_P.Gain1_Gain';
xcp.parameters(57).size   =  1;       
xcp.parameters(57).dtname = 'int32_T'; 
xcp.parameters(58).baseaddr = '&HybridControllerD2D2_P.Gain1_Gain';     
         
xcp.parameters(58).symbol = 'HybridControllerD2D2_P.measSignal_Gain';
xcp.parameters(58).size   =  1;       
xcp.parameters(58).dtname = 'real_T'; 
xcp.parameters(59).baseaddr = '&HybridControllerD2D2_P.measSignal_Gain';     
         
xcp.parameters(59).symbol = 'HybridControllerD2D2_P.MovingAverageFilter_numSample';
xcp.parameters(59).size   =  1;       
xcp.parameters(59).dtname = 'real_T'; 
xcp.parameters(60).baseaddr = '&HybridControllerD2D2_P.MovingAverageFilter_numSample';     
         
xcp.parameters(60).symbol = 'HybridControllerD2D2_P.MovingAverageFilter_InitialStat';
xcp.parameters(60).size   =  1;       
xcp.parameters(60).dtname = 'real_T'; 
xcp.parameters(61).baseaddr = '&HybridControllerD2D2_P.MovingAverageFilter_InitialStat';     
         
xcp.parameters(61).symbol = 'HybridControllerD2D2_P.MovingAverageFilter1_numSample';
xcp.parameters(61).size   =  1;       
xcp.parameters(61).dtname = 'real_T'; 
xcp.parameters(62).baseaddr = '&HybridControllerD2D2_P.MovingAverageFilter1_numSample';     
         
xcp.parameters(62).symbol = 'HybridControllerD2D2_P.MovingAverageFilter1_InitialSta';
xcp.parameters(62).size   =  1;       
xcp.parameters(62).dtname = 'real_T'; 
xcp.parameters(63).baseaddr = '&HybridControllerD2D2_P.MovingAverageFilter1_InitialSta';     
         
xcp.parameters(63).symbol = 'HybridControllerD2D2_P.CoreSubsys.TSamp_WtEt';
xcp.parameters(63).size   =  1;       
xcp.parameters(63).dtname = 'real_T'; 
xcp.parameters(64).baseaddr = '&HybridControllerD2D2_P.CoreSubsys.TSamp_WtEt';     
         
xcp.parameters(64).symbol = 'HybridControllerD2D2_P.CoreSubsys.TSamp_WtEt_o';
xcp.parameters(64).size   =  1;       
xcp.parameters(64).dtname = 'real_T'; 
xcp.parameters(65).baseaddr = '&HybridControllerD2D2_P.CoreSubsys.TSamp_WtEt_o';     
         
xcp.parameters(65).symbol = 'HybridControllerD2D2_P.CoreSubsys.DiscreteDerivative_ICPrevScal_a';
xcp.parameters(65).size   =  1;       
xcp.parameters(65).dtname = 'real_T'; 
xcp.parameters(66).baseaddr = '&HybridControllerD2D2_P.CoreSubsys.DiscreteDerivative_ICPrevScal_a';     
         
xcp.parameters(66).symbol = 'HybridControllerD2D2_P.CoreSubsys.DiscreteDerivative1_ICPrevSca_b';
xcp.parameters(66).size   =  1;       
xcp.parameters(66).dtname = 'real_T'; 
xcp.parameters(67).baseaddr = '&HybridControllerD2D2_P.CoreSubsys.DiscreteDerivative1_ICPrevSca_b';     
         
xcp.parameters(67).symbol = 'HybridControllerD2D2_P.CoreSubsys.TappedDelay_vinit';
xcp.parameters(67).size   =  1;       
xcp.parameters(67).dtname = 'real_T'; 
xcp.parameters(68).baseaddr = '&HybridControllerD2D2_P.CoreSubsys.TappedDelay_vinit';     
         
xcp.parameters(68).symbol = 'HybridControllerD2D2_P.CoreSubsys.TappedDelay1_vinit';
xcp.parameters(68).size   =  1;       
xcp.parameters(68).dtname = 'real_T'; 
xcp.parameters(69).baseaddr = '&HybridControllerD2D2_P.CoreSubsys.TappedDelay1_vinit';     
         
xcp.parameters(69).symbol = 'HybridControllerD2D2_P.CoreSubsys.TappedDelay2_vinit';
xcp.parameters(69).size   =  1;       
xcp.parameters(69).dtname = 'real_T'; 
xcp.parameters(70).baseaddr = '&HybridControllerD2D2_P.CoreSubsys.TappedDelay2_vinit';     
         
xcp.parameters(70).symbol = 'HybridControllerD2D2_P.DataStoreMemory_InitialValue';
xcp.parameters(70).size   =  1;       
xcp.parameters(70).dtname = 'real_T'; 
xcp.parameters(71).baseaddr = '&HybridControllerD2D2_P.DataStoreMemory_InitialValue';     
         
xcp.parameters(71).symbol = 'HybridControllerD2D2_P.Constant_Value';
xcp.parameters(71).size   =  1;       
xcp.parameters(71).dtname = 'real_T'; 
xcp.parameters(72).baseaddr = '&HybridControllerD2D2_P.Constant_Value';     
         
xcp.parameters(72).symbol = 'HybridControllerD2D2_P.DataStoreMemory_InitialValue_p';
xcp.parameters(72).size   =  1;       
xcp.parameters(72).dtname = 'real_T'; 
xcp.parameters(73).baseaddr = '&HybridControllerD2D2_P.DataStoreMemory_InitialValue_p';     
         
xcp.parameters(73).symbol = 'HybridControllerD2D2_P.Constant_Value_k';
xcp.parameters(73).size   =  1;       
xcp.parameters(73).dtname = 'real_T'; 
xcp.parameters(74).baseaddr = '&HybridControllerD2D2_P.Constant_Value_k';     
         
xcp.parameters(74).symbol = 'HybridControllerD2D2_P.DetectFallNonpositive_vinit';
xcp.parameters(74).size   =  1;       
xcp.parameters(74).dtname = 'uint8_T'; 
xcp.parameters(75).baseaddr = '&HybridControllerD2D2_P.DetectFallNonpositive_vinit';     
         
xcp.parameters(75).symbol = 'HybridControllerD2D2_P.DetectRisePositive_vinit';
xcp.parameters(75).size   =  1;       
xcp.parameters(75).dtname = 'uint8_T'; 
xcp.parameters(76).baseaddr = '&HybridControllerD2D2_P.DetectRisePositive_vinit';     
         
xcp.parameters(76).symbol = 'HybridControllerD2D2_P.Gain4_Gain';
xcp.parameters(76).size   =  1;       
xcp.parameters(76).dtname = 'real_T'; 
xcp.parameters(77).baseaddr = '&HybridControllerD2D2_P.Gain4_Gain';     
         
xcp.parameters(77).symbol = 'HybridControllerD2D2_P.DummyZero_Value';
xcp.parameters(77).size   =  1;       
xcp.parameters(77).dtname = 'real_T'; 
xcp.parameters(78).baseaddr = '&HybridControllerD2D2_P.DummyZero_Value';     
         
xcp.parameters(78).symbol = 'HybridControllerD2D2_P.CoreSubsys.TSamp_WtEt_k';
xcp.parameters(78).size   =  1;       
xcp.parameters(78).dtname = 'real_T'; 
xcp.parameters(79).baseaddr = '&HybridControllerD2D2_P.CoreSubsys.TSamp_WtEt_k';     
         
xcp.parameters(79).symbol = 'HybridControllerD2D2_P.CoreSubsys.TSamp_WtEt_j';
xcp.parameters(79).size   =  1;       
xcp.parameters(79).dtname = 'real_T'; 
xcp.parameters(80).baseaddr = '&HybridControllerD2D2_P.CoreSubsys.TSamp_WtEt_j';     
         
xcp.parameters(80).symbol = 'HybridControllerD2D2_P.WrapToZero_Threshold';
xcp.parameters(80).size   =  1;       
xcp.parameters(80).dtname = 'uint32_T'; 
xcp.parameters(81).baseaddr = '&HybridControllerD2D2_P.WrapToZero_Threshold';     
         
xcp.parameters(81).symbol = 'HybridControllerD2D2_P.Output_InitialCondition_j';
xcp.parameters(81).size   =  1;       
xcp.parameters(81).dtname = 'uint32_T'; 
xcp.parameters(82).baseaddr = '&HybridControllerD2D2_P.Output_InitialCondition_j';     
         
xcp.parameters(82).symbol = 'HybridControllerD2D2_P.WrapToZero_Threshold_f';
xcp.parameters(82).size   =  1;       
xcp.parameters(82).dtname = 'uint32_T'; 
xcp.parameters(83).baseaddr = '&HybridControllerD2D2_P.WrapToZero_Threshold_f';     
         
xcp.parameters(83).symbol = 'HybridControllerD2D2_P.Output_InitialCondition';
xcp.parameters(83).size   =  1;       
xcp.parameters(83).dtname = 'uint32_T'; 
xcp.parameters(84).baseaddr = '&HybridControllerD2D2_P.Output_InitialCondition';     
         
xcp.parameters(84).symbol = 'HybridControllerD2D2_P.atTargetFlag_Value';
xcp.parameters(84).size   =  1;       
xcp.parameters(84).dtname = 'int32_T'; 
xcp.parameters(85).baseaddr = '&HybridControllerD2D2_P.atTargetFlag_Value';     
         
xcp.parameters(85).symbol = 'HybridControllerD2D2_P.switchFlag_Value';
xcp.parameters(85).size   =  1;       
xcp.parameters(85).dtname = 'int32_T'; 
xcp.parameters(86).baseaddr = '&HybridControllerD2D2_P.switchFlag_Value';     
         
xcp.parameters(86).symbol = 'HybridControllerD2D2_P.switchFlag_Value_l';
xcp.parameters(86).size   =  1;       
xcp.parameters(86).dtname = 'int32_T'; 
xcp.parameters(87).baseaddr = '&HybridControllerD2D2_P.switchFlag_Value_l';     
         
xcp.parameters(87).symbol = 'HybridControllerD2D2_P.atTargetFlag_Value_e';
xcp.parameters(87).size   =  1;       
xcp.parameters(87).dtname = 'int32_T'; 
xcp.parameters(88).baseaddr = '&HybridControllerD2D2_P.atTargetFlag_Value_e';     
         
xcp.parameters(88).symbol = 'HybridControllerD2D2_P.Constant_Value_m';
xcp.parameters(88).size   =  1;       
xcp.parameters(88).dtname = 'real_T'; 
xcp.parameters(89).baseaddr = '&HybridControllerD2D2_P.Constant_Value_m';     
         
xcp.parameters(89).symbol = 'HybridControllerD2D2_P.Constant1_Value';
xcp.parameters(89).size   =  1;       
xcp.parameters(89).dtname = 'real_T'; 
xcp.parameters(90).baseaddr = '&HybridControllerD2D2_P.Constant1_Value';     
         
xcp.parameters(90).symbol = 'HybridControllerD2D2_P.FixPtConstant_Value';
xcp.parameters(90).size   =  1;       
xcp.parameters(90).dtname = 'uint32_T'; 
xcp.parameters(91).baseaddr = '&HybridControllerD2D2_P.FixPtConstant_Value';     
         
xcp.parameters(91).symbol = 'HybridControllerD2D2_P.Constant_Value_d';
xcp.parameters(91).size   =  1;       
xcp.parameters(91).dtname = 'uint32_T'; 
xcp.parameters(92).baseaddr = '&HybridControllerD2D2_P.Constant_Value_d';     
         
xcp.parameters(92).symbol = 'HybridControllerD2D2_P.FixPtConstant_Value_b';
xcp.parameters(92).size   =  1;       
xcp.parameters(92).dtname = 'uint32_T'; 
xcp.parameters(93).baseaddr = '&HybridControllerD2D2_P.FixPtConstant_Value_b';     
         
xcp.parameters(93).symbol = 'HybridControllerD2D2_P.Constant_Value_p';
xcp.parameters(93).size   =  1;       
xcp.parameters(93).dtname = 'uint32_T'; 
xcp.parameters(94).baseaddr = '&HybridControllerD2D2_P.Constant_Value_p';     
         
xcp.parameters(94).symbol = 'HybridControllerD2D2_P.Constant_Value_e';
xcp.parameters(94).size   =  1;       
xcp.parameters(94).dtname = 'int32_T'; 
xcp.parameters(95).baseaddr = '&HybridControllerD2D2_P.Constant_Value_e';     
         
xcp.parameters(95).symbol = 'HybridControllerD2D2_P.Constant_Value_h';
xcp.parameters(95).size   =  1;       
xcp.parameters(95).dtname = 'int32_T'; 
xcp.parameters(96).baseaddr = '&HybridControllerD2D2_P.Constant_Value_h';     
         
xcp.parameters(96).symbol = 'HybridControllerD2D2_P.CoreSubsys_p.measDspOut_Y0';
xcp.parameters(96).size   =  1;       
xcp.parameters(96).dtname = 'real_T'; 
xcp.parameters(97).baseaddr = '&HybridControllerD2D2_P.CoreSubsys_p.measDspOut_Y0';     
         
xcp.parameters(97).symbol = 'HybridControllerD2D2_P.CoreSubsys_p.measFrcOut_Y0';
xcp.parameters(97).size   =  1;       
xcp.parameters(97).dtname = 'real_T'; 
xcp.parameters(98).baseaddr = '&HybridControllerD2D2_P.CoreSubsys_p.measFrcOut_Y0';     
         
xcp.parameters(98).symbol = 'HybridControllerD2D2_P.CoreSubsys_p.Constant1_Value';
xcp.parameters(98).size   =  1;       
xcp.parameters(98).dtname = 'real_T'; 
xcp.parameters(99).baseaddr = '&HybridControllerD2D2_P.CoreSubsys_p.Constant1_Value';     
         
xcp.parameters(99).symbol = 'HybridControllerD2D2_P.IfActionSubsystem1_h.Out1_Y0';
xcp.parameters(99).size   =  1;       
xcp.parameters(99).dtname = 'boolean_T'; 
xcp.parameters(100).baseaddr = '&HybridControllerD2D2_P.IfActionSubsystem1_h.Out1_Y0';     
         
xcp.parameters(100).symbol = 'HybridControllerD2D2_P.IfActionSubsystem2.Out1_Y0';
xcp.parameters(100).size   =  1;       
xcp.parameters(100).dtname = 'boolean_T'; 
xcp.parameters(101).baseaddr = '&HybridControllerD2D2_P.IfActionSubsystem2.Out1_Y0';     
         
xcp.parameters(101).symbol = 'HybridControllerD2D2_P.CoreSubsys_p.IfActionSubsystem1.Out1_Y0';
xcp.parameters(101).size   =  1;       
xcp.parameters(101).dtname = 'boolean_T'; 
xcp.parameters(102).baseaddr = '&HybridControllerD2D2_P.CoreSubsys_p.IfActionSubsystem1.Out1_Y0';     
         
xcp.parameters(102).symbol = 'HybridControllerD2D2_P.CoreSubsys_p.IfActionSubsystem2.Out1_Y0';
xcp.parameters(102).size   =  1;       
xcp.parameters(102).dtname = 'boolean_T'; 
xcp.parameters(103).baseaddr = '&HybridControllerD2D2_P.CoreSubsys_p.IfActionSubsystem2.Out1_Y0';     
             
xcp.parameters(104).symbol = 'HybridControllerD2D2_P.HybridCtrlParameters.nDOF';
xcp.parameters(104).size   = 1;
xcp.parameters(104).dtname = 'real_T'; 
             
xcp.parameters(105).symbol = 'HybridControllerD2D2_P.HybridCtrlParameters.dtInt';
xcp.parameters(105).size   = 1;
xcp.parameters(105).dtname = 'real_T'; 
             
xcp.parameters(106).symbol = 'HybridControllerD2D2_P.HybridCtrlParameters.dtSim';
xcp.parameters(106).size   = 1;
xcp.parameters(106).dtname = 'real_T'; 
             
xcp.parameters(107).symbol = 'HybridControllerD2D2_P.HybridCtrlParameters.delay';
xcp.parameters(107).size   = 1;
xcp.parameters(107).dtname = 'real_T'; 
             
xcp.parameters(108).symbol = 'HybridControllerD2D2_P.HybridCtrlParameters.upFact';
xcp.parameters(108).size   = 1;
xcp.parameters(108).dtname = 'real_T'; 
             
xcp.parameters(109).symbol = 'HybridControllerD2D2_P.HybridCtrlParameters.dtCon';
xcp.parameters(109).size   = 1;
xcp.parameters(109).dtname = 'real_T'; 
             
xcp.parameters(110).symbol = 'HybridControllerD2D2_P.HybridCtrlParameters.N';
xcp.parameters(110).size   = 1;
xcp.parameters(110).dtname = 'real_T'; 
             
xcp.parameters(111).symbol = 'HybridControllerD2D2_P.HybridCtrlParameters.iDelay';
xcp.parameters(111).size   = 1;
xcp.parameters(111).dtname = 'real_T'; 
             
xcp.parameters(112).symbol = 'HybridControllerD2D2_P.HybridCtrlParameters.rate';
xcp.parameters(112).size   = 1;
xcp.parameters(112).dtname = 'real_T'; 
xcp.parameters(112).baseaddr = '&HybridControllerD2D2_P.HybridCtrlParameters';     
         
xcp.parameters(112).symbol = 'HybridControllerD2D2_P.MRC';
xcp.parameters(112).size   =  3;       
xcp.parameters(112).dtname = 'real_T'; 
xcp.parameters(113).baseaddr = '&HybridControllerD2D2_P.MRC[0]';     
         
xcp.parameters(113).symbol = 'HybridControllerD2D2_P.P_range';
xcp.parameters(113).size   =  6;       
xcp.parameters(113).dtname = 'real_T'; 
xcp.parameters(114).baseaddr = '&HybridControllerD2D2_P.P_range[0]';     
         
xcp.parameters(114).symbol = 'HybridControllerD2D2_P.Par';
xcp.parameters(114).size   =  3;       
xcp.parameters(114).dtname = 'real_T'; 
xcp.parameters(115).baseaddr = '&HybridControllerD2D2_P.Par[0]';     
         
xcp.parameters(115).symbol = 'HybridControllerD2D2_P.Threshold';
xcp.parameters(115).size   =  1;       
xcp.parameters(115).dtname = 'real_T'; 
xcp.parameters(116).baseaddr = '&HybridControllerD2D2_P.Threshold';     
         
xcp.parameters(116).symbol = 'HybridControllerD2D2_P.Zden';
xcp.parameters(116).size   =  7;       
xcp.parameters(116).dtname = 'real_T'; 
xcp.parameters(117).baseaddr = '&HybridControllerD2D2_P.Zden[0]';     
         
xcp.parameters(117).symbol = 'HybridControllerD2D2_P.Znum';
xcp.parameters(117).size   =  7;       
xcp.parameters(117).dtname = 'real_T'; 
xcp.parameters(118).baseaddr = '&HybridControllerD2D2_P.Znum[0]';     

function n = getNumParameters
n = 117;

function n = getNumSignals
n = 114;

function n = getNumEvents
n = 1;

function n = getNumModels
n = 1;

