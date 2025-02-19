# Elements.tcl 

# Element "ExpElement01":    eleTag    NodeI    NodeJ    GeoTranTag    -site siteTag    -initStif Kij    <-iMod>    <-noRayleigh>    <-rho rho> 
expElement  beamColumn       1       1       5     2  -site    1  -initStif +1.000000E+02 +0.000000E+00 +0.000000E+00 +0.000000E+00 +0.000000E+00 +0.000000E+00 +0.000000E+00 +4.800000E-02 -2.400000E+01 +0.000000E+00 +0.000000E+00 +0.000000E+00 +0.000000E+00 -2.400000E+01 +1.600000E+04 +0.000000E+00 +0.000000E+00 +0.000000E+00 +0.000000E+00 +0.000000E+00 +0.000000E+00 +4.800000E-02 +2.400000E+01 +0.000000E+00 +0.000000E+00 +0.000000E+00 +0.000000E+00 +2.400000E+01 +1.600000E+04 +0.000000E+00 +0.000000E+00 +0.000000E+00 +0.000000E+00 +0.000000E+00 +0.000000E+00 +3.200000E+03  -rho +0.000000E+00 

# Element "displ_beam":    eleTag    NodeI    NodeJ    NIP    secTag    geoTranTag    <-mass massDens>    <-cMass> 
element  dispBeamColumn       3       3       6     5     1     2  -mass +0.000000E+00  -integration Lobatto 

# Element "displ_beam":    eleTag    NodeI    NodeJ    NIP    secTag    geoTranTag    <-mass massDens>    <-cMass> 
element  dispBeamColumn       4       6       4     5     1     2  -mass +0.000000E+00  -integration Lobatto 

# Element "displ_beam":    eleTag    NodeI    NodeJ    NIP    secTag    geoTranTag    <-mass massDens>    <-cMass> 
element  dispBeamColumn       5       2       7     5     1     3  -mass +0.000000E+00  -integration Lobatto 

# Element "displ_beam":    eleTag    NodeI    NodeJ    NIP    secTag    geoTranTag    <-mass massDens>    <-cMass> 
element  dispBeamColumn       6       7       4     5     1     4  -mass +0.000000E+00  -integration Lobatto 

# Element "displ_beam":    eleTag    NodeI    NodeJ    NIP    secTag    geoTranTag    <-mass massDens>    <-cMass> 
element  dispBeamColumn       7       8      12     5     1     2  -mass +0.000000E+00  -integration Lobatto 

# Element "displ_beam":    eleTag    NodeI    NodeJ    NIP    secTag    geoTranTag    <-mass massDens>    <-cMass> 
element  dispBeamColumn       8      12       9     5     1     2  -mass +0.000000E+00  -integration Lobatto 

# Element "displ_beam":    eleTag    NodeI    NodeJ    NIP    secTag    geoTranTag    <-mass massDens>    <-cMass> 
element  dispBeamColumn       9      10      13     5     1     2  -mass +0.000000E+00  -integration Lobatto 

# Element "displ_beam":    eleTag    NodeI    NodeJ    NIP    secTag    geoTranTag    <-mass massDens>    <-cMass> 
element  dispBeamColumn      10      13      11     5     1     2  -mass +0.000000E+00  -integration Lobatto 

# Element "displ_beam":    eleTag    NodeI    NodeJ    NIP    secTag    geoTranTag    <-mass massDens>    <-cMass> 
element  dispBeamColumn      11       9      14     5     1     5  -mass +0.000000E+00  -integration Lobatto 

# Element "displ_beam":    eleTag    NodeI    NodeJ    NIP    secTag    geoTranTag    <-mass massDens>    <-cMass> 
element  dispBeamColumn      12      14      11     5     1     6  -mass +0.000000E+00  -integration Lobatto 

# Element "displ_beam":    eleTag    NodeI    NodeJ    NIP    secTag    geoTranTag    <-mass massDens>    <-cMass> 
element  dispBeamColumn      13       2      15     5     1     1  -mass +0.000000E+00  -integration Lobatto 

# Element "displ_beam":    eleTag    NodeI    NodeJ    NIP    secTag    geoTranTag    <-mass massDens>    <-cMass> 
element  dispBeamColumn      14      15       9     5     1     1  -mass +0.000000E+00  -integration Lobatto 

# Element "displ_beam":    eleTag    NodeI    NodeJ    NIP    secTag    geoTranTag    <-mass massDens>    <-cMass> 
element  dispBeamColumn      15       4      16     5     1     1  -mass +0.000000E+00  -integration Lobatto 

# Element "displ_beam":    eleTag    NodeI    NodeJ    NIP    secTag    geoTranTag    <-mass massDens>    <-cMass> 
element  dispBeamColumn      16      16      11     5     1     1  -mass +0.000000E+00  -integration Lobatto 

