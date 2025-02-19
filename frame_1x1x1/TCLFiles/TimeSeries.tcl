# TimeSeries.tcl 

# TimeSeries "LinearDefault":    tsTag    cFactor 
timeSeries  Linear       1  -factor +1.000000E-01 

# TimeSeries "Ramp":    tsTag    time    values    cFactor    <-useLast> 
timeSeries  Path       2  -time {0   5  10}  -values {0  1  1}  -factor +1.000000E+00 

# TimeSeries "x":    tsTag    dt    filePath    cFactor    <-useLast>    <-prependZero>    <-startTime tStart> 
timeSeries  Path       3  -dt +2.000000E-02  -filePath  x.thf  -factor  +9.806000E+03  -prependZero 

# TimeSeries "y":    tsTag    dt    filePath    cFactor    <-useLast>    <-prependZero>    <-startTime tStart> 
timeSeries  Path       4  -dt +2.000000E-02  -filePath  y.thf  -factor  +9.806000E+03  -prependZero 

