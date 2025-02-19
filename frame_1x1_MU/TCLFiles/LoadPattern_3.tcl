# LoadPattern_3.tcl 

# LoadPattern "cargalateral":    patternTag    tsTag    factor 
pattern  Plain       1       1  -fact +1.000000E-02  { 
    # Load    nodeTag    LoadValues 
    load       2  +1.000000E+00  +0.000000E+00  +0.000000E+00 
 
    # SP    nodeTag    dofTag    DispValue 
 
    # eleLoad    eleTags    beamUniform    Wy    <Wx> 
 
    # eleLoad    eleTags    beamPoint    Py    xL    <Px> 
 
    # eleLoad    eleTags    selfWeight    xFactor    yFactor 
} 
