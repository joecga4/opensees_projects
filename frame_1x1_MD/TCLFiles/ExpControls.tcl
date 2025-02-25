# ExpControls.tcl 

# expControlPoint tag <-node nodeTag> dof rspType <-fact f> <-lim l u> <-relTrial> <-relOut> <-relCtrl> <-relDaq> ...
expControlPoint 3 -node 4 1 disp -relTrial 

# expControlPoint tag <-node nodeTag> dof rspType <-fact f> <-lim l u> <-relTrial> <-relOut> <-relCtrl> <-relDaq> ...
expControlPoint 4 -node 4 1 disp -relOut 1 force -relOut 

# expControl xPCtarget tag ipAddr ipPort appFile -trialCP cpTags -outCP cpTags <-timeOut t> <-ctrlFilters (5 filterTag)> <-daqFilters (5 filterTag)>
expControl xPCtarget 2 "192.168.7.1" 22222 "C:/Users/joela/Documents/GitHub/joecga4/opensees_projects/UCB/HybridControllerD2D2" -trialCP 3 -outCP 4
