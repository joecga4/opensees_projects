# LoadPattern_3.tcl 

# LoadPattern "pushxx":    patternTag    tsTag    factor 
pattern  Plain       1       2  -fact +1.000000E+00  { 
    # Load    nodeTag    LoadValues 
 
    # SP    nodeTag    dofTag    DispValue 
    sp       9     1  +1.000000E-03 
 
    # eleLoad    eleTags    beamUniform    Wy    Wz    <Wx> 
 
    # eleLoad    eleTags    beamPoint    Py    Pz    xL    <Px> 
 
    # eleLoad    eleTags    selfWeight    xFactor    yFactor    zFactor 
} 
