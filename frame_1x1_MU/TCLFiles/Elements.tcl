# Elements.tcl 

# Element "vigacol":    eleTag    NodeI    NodeJ    A    E    Iz    geoTranTag    <alpha  d>    <-mass massDens>    <-cMass> 
element  elasticBeamColumn       1       1       2  +1.990000E+02  +2.000000E+02  +3.117630E+03     1  +0.000000E+00  +0.000000E+00  -mass +0.000000E+00 

# Element "vigacol":    eleTag    NodeI    NodeJ    A    E    Iz    geoTranTag    <alpha  d>    <-mass massDens>    <-cMass> 
element  elasticBeamColumn       2       3       4  +1.990000E+02  +2.000000E+02  +3.117630E+03     1  +0.000000E+00  +0.000000E+00  -mass +0.000000E+00 

# Element "vigacol":    eleTag    NodeI    NodeJ    A    E    Iz    geoTranTag    <alpha  d>    <-mass massDens>    <-cMass> 
element  elasticBeamColumn       3       2       4  +1.990000E+02  +2.000000E+02  +3.117630E+03     1  +0.000000E+00  +0.000000E+00  -mass +0.000000E+00 

# Element "trussG60":    eleTag    NodeI    NodeJ    -site siteTag    -initStif Kij    <-iMod>    <-noRayleigh>    <-rho rho> 
expElement  truss       4       4       1  -site    1  -initStif +1.501890E+02  -rho +0.000000E+00 

