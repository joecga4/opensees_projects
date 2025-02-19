%CLEAR
%clc; close all; clear;

%INITIALIZESCRAMNETGT to initialize the parameters needed for SCRAMNet GT
%
% created by Brad Thoen (MTS)
% modified by Andreas Schellenberg (andreas.schellenberg@gmail.com) 01/2014

%%%%%%%%%% SIGNAL COUNTS %%%%%%%%%%

nAct  = 1;   % number of actuators
nAdcU = 0;   % number of user a/d channels
%nDOF = 1;

%%%%%%%%%% SCRAMNET PARTITIONS %%%%%%%%%%

opfNode  = 10;   % OpenFresco node
sgNode	 = 20;   % speedgoat node
syncNode = 30;   % synchronization node: MTS FlexTest

%%%%%%%%%% START MTS (FlexTest) %%%%%%%%%%

%%%%%%%%%% outputs to FlexTest from speedgoat %%%%%%%%%%

% master span
baseAddress = 0;
mtspartition(1).Address = ['0x', dec2hex(baseAddress*4)];
mtspartition(1).Type = 'single';
mtspartition(1).Size = '1';

% control modes
mtspartition(2).Type = 'uint32';
mtspartition(2).Size = num2str(nAct);

% displ commands
mtspartition(3).Type = 'single';
mtspartition(3).Size = num2str(nAct);

% force commands
mtspartition(4).Type = 'single';
mtspartition(4).Size = num2str(nAct);

% valve commands
mtspartition(5).Type = 'single';
mtspartition(5).Size = num2str(nAct);

%%%%%%%%%% inputs from FlexTest to speedgoat %%%%%%%%%%

% master span
mtspartition(6).Type = 'single';
mtspartition(6).Size = '1';

% control modes
mtspartition(7).Type = 'uint32';
mtspartition(7).Size = num2str(nAct);

% displ commands
mtspartition(8).Type = 'single';
mtspartition(8).Size = num2str(nAct);

% force commands
mtspartition(9).Type = 'single';
mtspartition(9).Size = num2str(nAct);

% valve commands
mtspartition(10).Type = 'single';
mtspartition(10).Size = num2str(nAct);

% displ feedbacks
mtspartition(11).Type = 'single';
mtspartition(11).Size = num2str(nAct);

% force feedbacks
mtspartition(12).Type = 'single';
mtspartition(12).Size = num2str(nAct);

% valve feedbacks
mtspartition(13).Type = 'single';
mtspartition(13).Size = num2str(nAct);

% user ADCs
%mtspartition(14).Type = 'single';
%mtspartition(14).Size = num2str(nAdcU);

%%%%%%%%%% END MTS (FlexTest) %%%%%%%%%%

%%%%%%%%%% START OPENFRESCO %%%%%%%%%%

%%%%%%%%%% inputs from OpenFresco to speedgoat %%%%%%%%%%

% newTarget (from)
baseAddress = 1024;
opfpartition(1).Address = ['0x', dec2hex(baseAddress*4)];
opfpartition(1).Type = 'int32';
opfpartition(1).Size = '1';

% control signals (from)
opfpartition(2).Type = 'single';
opfpartition(2).Size = num2str(nDOF);

%%%%%%%%%% outputs to OpenFresco from speedgoat %%%%%%%%%%

% switchPC (to)
opfpartition(3).Type = 'int32';
opfpartition(3).Size = '1';

% atTarget (to)
opfpartition(4).Type = 'int32';
opfpartition(4).Size = '1';

% daq signals (to)
opfpartition(5).Type = 'single';
opfpartition(5).Size = num2str(2*nDOF);

%%%%%%%%%% END OPENFRESCO %%%%%%%%%%

%%%%%%%%%% scramnet node configuration %%%%%%%%%%

mask = sprintf('0x%8.8X', bitshift(1, syncNode));
node = scgtnodestruct([]);
node.Interface.NodeID                                  = num2str(sgNode);
node.Interface.Interrupts.ChangeBroadcastInterruptMask = 'yes';
node.Interface.Interrupts.BroadcastInterruptMask       = mask;
mtspartition    = scgtpartitionstruct(mtspartition);
opfpartition    = scgtpartitionstruct(opfpartition);
node.Partitions = [mtspartition opfpartition];
node            = scgtnodestruct(node);
