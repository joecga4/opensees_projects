function xcp = com_FT60_2020axcp

xcp.events     =  repmat(struct('id',{}, 'sampletime', {}, 'offset', {}), getNumEvents, 1 );
xcp.parameters =  repmat(struct('symbol',{}, 'size', {}, 'dtname', {}, 'baseaddr', {}), getNumParameters, 1 );
xcp.signals    =  repmat(struct('symbol',{}), getNumSignals, 1 );
xcp.models     =  cell(1,getNumModels);
    
xcp.models{1} = 'com_FT60_2020a';
   
   
         
xcp.events(1).id         = 0;
xcp.events(1).sampletime = 0.001;
xcp.events(1).offset     = 0.0;
    
xcp.signals(1).symbol =  'com_FT60_2020a_B.CastToSingle';
    
xcp.signals(2).symbol =  'com_FT60_2020a_B.CastToSingle1';
    
xcp.signals(3).symbol =  'com_FT60_2020a_B.CastToSingle2';
    
xcp.signals(4).symbol =  'com_FT60_2020a_B.CastToSingle3';
    
xcp.signals(5).symbol =  'com_FT60_2020a_B.CastToSingle4';
    
xcp.signals(6).symbol =  'com_FT60_2020a_B.CastToSingle5';
    
xcp.signals(7).symbol =  'com_FT60_2020a_B.CastToSingle6';
    
xcp.signals(8).symbol =  'com_FT60_2020a_B.Read';
    
xcp.signals(9).symbol =  'com_FT60_2020a_B.SharedMemoryPack';
    
xcp.signals(10).symbol =  'com_FT60_2020a_B.SharedMemoryUnpack_o1';
    
xcp.signals(11).symbol =  'com_FT60_2020a_B.SharedMemoryUnpack_o2';
    
xcp.signals(12).symbol =  'com_FT60_2020a_B.SharedMemoryUnpack_o3';
    
xcp.signals(13).symbol =  'com_FT60_2020a_B.SharedMemoryUnpack_o4';
    
xcp.signals(14).symbol =  'com_FT60_2020a_B.SharedMemoryUnpack_o5';
    
xcp.signals(15).symbol =  'com_FT60_2020a_B.SharedMemoryUnpack_o6';
    
xcp.signals(16).symbol =  'com_FT60_2020a_B.SignalGenerator';
         
xcp.parameters(1).symbol = 'com_FT60_2020a_P.Read_P1';
xcp.parameters(1).size   =  1;       
xcp.parameters(1).dtname = 'real_T'; 
xcp.parameters(2).baseaddr = '&com_FT60_2020a_P.Read_P1';     
         
xcp.parameters(2).symbol = 'com_FT60_2020a_P.Read_P2';
xcp.parameters(2).size   =  1;       
xcp.parameters(2).dtname = 'real_T'; 
xcp.parameters(3).baseaddr = '&com_FT60_2020a_P.Read_P2';     
         
xcp.parameters(3).symbol = 'com_FT60_2020a_P.Read_P3';
xcp.parameters(3).size   =  1;       
xcp.parameters(3).dtname = 'real_T'; 
xcp.parameters(4).baseaddr = '&com_FT60_2020a_P.Read_P3';     
         
xcp.parameters(4).symbol = 'com_FT60_2020a_P.Read_P4';
xcp.parameters(4).size   =  1;       
xcp.parameters(4).dtname = 'real_T'; 
xcp.parameters(5).baseaddr = '&com_FT60_2020a_P.Read_P4';     
         
xcp.parameters(5).symbol = 'com_FT60_2020a_P.Read_P5';
xcp.parameters(5).size   =  1;       
xcp.parameters(5).dtname = 'real_T'; 
xcp.parameters(6).baseaddr = '&com_FT60_2020a_P.Read_P5';     
         
xcp.parameters(6).symbol = 'com_FT60_2020a_P.Setup_P1';
xcp.parameters(6).size   =  1;       
xcp.parameters(6).dtname = 'real_T'; 
xcp.parameters(7).baseaddr = '&com_FT60_2020a_P.Setup_P1';     
         
xcp.parameters(7).symbol = 'com_FT60_2020a_P.Setup_P2';
xcp.parameters(7).size   =  1;       
xcp.parameters(7).dtname = 'real_T'; 
xcp.parameters(8).baseaddr = '&com_FT60_2020a_P.Setup_P2';     
         
xcp.parameters(8).symbol = 'com_FT60_2020a_P.Setup_P3';
xcp.parameters(8).size   =  15;       
xcp.parameters(8).dtname = 'real_T'; 
xcp.parameters(9).baseaddr = '&com_FT60_2020a_P.Setup_P3[0]';     
         
xcp.parameters(9).symbol = 'com_FT60_2020a_P.Setup_P4';
xcp.parameters(9).size   =  1;       
xcp.parameters(9).dtname = 'real_T'; 
xcp.parameters(10).baseaddr = '&com_FT60_2020a_P.Setup_P4';     
         
xcp.parameters(10).symbol = 'com_FT60_2020a_P.Setup_P5';
xcp.parameters(10).size   =  1;       
xcp.parameters(10).dtname = 'real_T'; 
xcp.parameters(11).baseaddr = '&com_FT60_2020a_P.Setup_P5';     
         
xcp.parameters(11).symbol = 'com_FT60_2020a_P.Setup_P6';
xcp.parameters(11).size   =  1;       
xcp.parameters(11).dtname = 'real_T'; 
xcp.parameters(12).baseaddr = '&com_FT60_2020a_P.Setup_P6';     
         
xcp.parameters(12).symbol = 'com_FT60_2020a_P.SharedMemoryPack_P1';
xcp.parameters(12).size   =  1;       
xcp.parameters(12).dtname = 'real_T'; 
xcp.parameters(13).baseaddr = '&com_FT60_2020a_P.SharedMemoryPack_P1';     
         
xcp.parameters(13).symbol = 'com_FT60_2020a_P.SharedMemoryPack_P2';
xcp.parameters(13).size   =  2;       
xcp.parameters(13).dtname = 'real_T'; 
xcp.parameters(14).baseaddr = '&com_FT60_2020a_P.SharedMemoryPack_P2[0]';     
         
xcp.parameters(14).symbol = 'com_FT60_2020a_P.SharedMemoryPack_P3';
xcp.parameters(14).size   =  1;       
xcp.parameters(14).dtname = 'real_T'; 
xcp.parameters(15).baseaddr = '&com_FT60_2020a_P.SharedMemoryPack_P3';     
         
xcp.parameters(15).symbol = 'com_FT60_2020a_P.SharedMemoryPack_P4';
xcp.parameters(15).size   =  1;       
xcp.parameters(15).dtname = 'real_T'; 
xcp.parameters(16).baseaddr = '&com_FT60_2020a_P.SharedMemoryPack_P4';     
         
xcp.parameters(16).symbol = 'com_FT60_2020a_P.SharedMemoryUnpack_P1';
xcp.parameters(16).size   =  6;       
xcp.parameters(16).dtname = 'real_T'; 
xcp.parameters(17).baseaddr = '&com_FT60_2020a_P.SharedMemoryUnpack_P1[0]';     
         
xcp.parameters(17).symbol = 'com_FT60_2020a_P.SharedMemoryUnpack_P2';
xcp.parameters(17).size   =  12;       
xcp.parameters(17).dtname = 'real_T'; 
xcp.parameters(18).baseaddr = '&com_FT60_2020a_P.SharedMemoryUnpack_P2[0]';     
         
xcp.parameters(18).symbol = 'com_FT60_2020a_P.SharedMemoryUnpack_P3';
xcp.parameters(18).size   =  6;       
xcp.parameters(18).dtname = 'real_T'; 
xcp.parameters(19).baseaddr = '&com_FT60_2020a_P.SharedMemoryUnpack_P3[0]';     
         
xcp.parameters(19).symbol = 'com_FT60_2020a_P.SharedMemoryUnpack_P4';
xcp.parameters(19).size   =  1;       
xcp.parameters(19).dtname = 'real_T'; 
xcp.parameters(20).baseaddr = '&com_FT60_2020a_P.SharedMemoryUnpack_P4';     
         
xcp.parameters(20).symbol = 'com_FT60_2020a_P.Write_P1';
xcp.parameters(20).size   =  1;       
xcp.parameters(20).dtname = 'real_T'; 
xcp.parameters(21).baseaddr = '&com_FT60_2020a_P.Write_P1';     
         
xcp.parameters(21).symbol = 'com_FT60_2020a_P.Write_P2';
xcp.parameters(21).size   =  1;       
xcp.parameters(21).dtname = 'real_T'; 
xcp.parameters(22).baseaddr = '&com_FT60_2020a_P.Write_P2';     
         
xcp.parameters(22).symbol = 'com_FT60_2020a_P.Write_P3';
xcp.parameters(22).size   =  1;       
xcp.parameters(22).dtname = 'real_T'; 
xcp.parameters(23).baseaddr = '&com_FT60_2020a_P.Write_P3';     
         
xcp.parameters(23).symbol = 'com_FT60_2020a_P.Write_P4';
xcp.parameters(23).size   =  1;       
xcp.parameters(23).dtname = 'real_T'; 
xcp.parameters(24).baseaddr = '&com_FT60_2020a_P.Write_P4';     
         
xcp.parameters(24).symbol = 'com_FT60_2020a_P.Write_P5';
xcp.parameters(24).size   =  1;       
xcp.parameters(24).dtname = 'real_T'; 
xcp.parameters(25).baseaddr = '&com_FT60_2020a_P.Write_P5';     
         
xcp.parameters(25).symbol = 'com_FT60_2020a_P.SignalGenerator_Amplitude';
xcp.parameters(25).size   =  1;       
xcp.parameters(25).dtname = 'real_T'; 
xcp.parameters(26).baseaddr = '&com_FT60_2020a_P.SignalGenerator_Amplitude';     
         
xcp.parameters(26).symbol = 'com_FT60_2020a_P.SignalGenerator_Frequency';
xcp.parameters(26).size   =  1;       
xcp.parameters(26).dtname = 'real_T'; 
xcp.parameters(27).baseaddr = '&com_FT60_2020a_P.SignalGenerator_Frequency';     

function n = getNumParameters
n = 26;

function n = getNumSignals
n = 16;

function n = getNumEvents
n = 1;

function n = getNumModels
n = 1;

