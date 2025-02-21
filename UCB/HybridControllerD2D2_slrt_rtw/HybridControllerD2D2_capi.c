/*
 * HybridControllerD2D2_capi.c
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "HybridControllerD2D2".
 *
 * Model version              : 1.536
 * Simulink Coder version : 9.3 (R2020a) 18-Nov-2019
 * C source code generated on : Thu Feb 20 18:02:50 2025
 *
 * Target selection: slrt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Generic->32-bit x86 compatible
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "rtw_capi.h"
#ifdef HOST_CAPI_BUILD
#include "HybridControllerD2D2_capi_host.h"
#define sizeof(s)                      ((size_t)(0xFFFF))
#undef rt_offsetof
#define rt_offsetof(s,el)              ((uint16_T)(0xFFFF))
#define TARGET_CONST
#define TARGET_STRING(s)               (s)
#else                                  /* HOST_CAPI_BUILD */
#include "builtin_typeid_types.h"
#include "HybridControllerD2D2.h"
#include "HybridControllerD2D2_capi.h"
#include "HybridControllerD2D2_private.h"
#ifdef LIGHT_WEIGHT_CAPI
#define TARGET_CONST
#define TARGET_STRING(s)               (NULL)
#else
#define TARGET_CONST                   const
#define TARGET_STRING(s)               (s)
#endif
#endif                                 /* HOST_CAPI_BUILD */

/* Block output signal information */
static const rtwCAPI_Signals rtBlockSignals[] = {
  /* addrMapIndex, sysNum, blockPath,
   * signalName, portNumber, dataTypeIndex, dimIndex, fxpIndex, sTimeIndex
   */
  { 0, 0, TARGET_STRING("ATS Switch"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 1, 2, TARGET_STRING("ATS compensator/calculate optimal coefficients"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 2, 1, TARGET_STRING("ATS compensator/compensated actuator input disp."),
    TARGET_STRING("actuator disp"), 0, 0, 0, 0, 0 },

  { 3, 3, TARGET_STRING("ATS compensator/Tapped Delay"),
    TARGET_STRING(""), 0, 0, 2, 0, 0 },

  { 4, 3, TARGET_STRING("ATS compensator/Manual Switch"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 5, 3, TARGET_STRING("ATS compensator/Manual Switch1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 6, 3, TARGET_STRING("ATS compensator/Butterworth filter"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 7, 3, TARGET_STRING("ATS compensator/Butterworth filter1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 8, 3, TARGET_STRING("ATS compensator/Unit Delay"),
    TARGET_STRING(""), 0, 0, 1, 0, 0 },

  { 9, 3, TARGET_STRING("ATS compensator/Unit Delay1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 10, 0, TARGET_STRING("Subsystem2/Saturation"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 11, 0, TARGET_STRING("Subsystem3/MovingAverage Filter"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 12, 0, TARGET_STRING("Subsystem4/MovingAverage Filter1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 13, 0, TARGET_STRING("input from MTS (FT60)/typeConv1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 14, 0, TARGET_STRING("input from MTS (FT60)/typeConv2"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 15, 0, TARGET_STRING("input from MTS (FT60)/typeConv3"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 16, 0, TARGET_STRING("input from MTS (FT60)/typeConv4"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 17, 0, TARGET_STRING("input from MTS (FT60)/typeConv5"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 18, 0, TARGET_STRING("input from MTS (FT60)/typeConv6"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 19, 0, TARGET_STRING("input from MTS (FT60)/typeConv7"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 20, 0, TARGET_STRING("input from MTS (FT60)/typeConv8"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 21, 0, TARGET_STRING("input from MTS (FT60)/Read "),
    TARGET_STRING(""), 0, 1, 3, 0, 0 },

  { 22, 0, TARGET_STRING("input from MTS (FT60)/SCGT unpack/p1"),
    TARGET_STRING(""), 0, 2, 0, 0, 0 },

  { 23, 0, TARGET_STRING("input from MTS (FT60)/SCGT unpack/p2"),
    TARGET_STRING(""), 1, 1, 0, 0, 0 },

  { 24, 0, TARGET_STRING("input from MTS (FT60)/SCGT unpack/p3"),
    TARGET_STRING(""), 2, 2, 0, 0, 0 },

  { 25, 0, TARGET_STRING("input from MTS (FT60)/SCGT unpack/p4"),
    TARGET_STRING(""), 3, 2, 0, 0, 0 },

  { 26, 0, TARGET_STRING("input from MTS (FT60)/SCGT unpack/p5"),
    TARGET_STRING(""), 4, 2, 0, 0, 0 },

  { 27, 0, TARGET_STRING("input from MTS (FT60)/SCGT unpack/p6"),
    TARGET_STRING(""), 5, 2, 0, 0, 0 },

  { 28, 0, TARGET_STRING("input from MTS (FT60)/SCGT unpack/p7"),
    TARGET_STRING(""), 6, 2, 0, 0, 0 },

  { 29, 0, TARGET_STRING("input from MTS (FT60)/SCGT unpack/p8"),
    TARGET_STRING(""), 7, 2, 0, 0, 0 },

  { 30, 0, TARGET_STRING("output to MTS (FT60)/typeConv1"),
    TARGET_STRING(""), 0, 2, 0, 0, 0 },

  { 31, 0, TARGET_STRING("output to MTS (FT60)/typeConv2"),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 32, 0, TARGET_STRING("output to MTS (FT60)/typeConv3"),
    TARGET_STRING(""), 0, 2, 0, 0, 0 },

  { 33, 0, TARGET_STRING("output to MTS (FT60)/typeConv4"),
    TARGET_STRING(""), 0, 2, 0, 0, 0 },

  { 34, 0, TARGET_STRING("output to MTS (FT60)/typeConv5"),
    TARGET_STRING(""), 0, 2, 0, 0, 0 },

  { 35, 0, TARGET_STRING("output to MTS (FT60)/SCGT pack"),
    TARGET_STRING(""), 0, 1, 4, 0, 0 },

  { 36, 11, TARGET_STRING("xPC HC/Predictor-Corrector/p1"),
    TARGET_STRING(""), 0, 0, 5, 0, 1 },

  { 37, 11, TARGET_STRING("xPC HC/Predictor-Corrector/p2"),
    TARGET_STRING(""), 1, 0, 5, 0, 1 },

  { 38, 11, TARGET_STRING("xPC HC/Predictor-Corrector/p3"),
    TARGET_STRING(""), 2, 0, 5, 0, 1 },

  { 39, 11, TARGET_STRING("xPC HC/Predictor-Corrector/p4"),
    TARGET_STRING(""), 3, 3, 0, 0, 1 },

  { 40, 11, TARGET_STRING("xPC HC/Predictor-Corrector/p5"),
    TARGET_STRING(""), 4, 0, 0, 0, 1 },

  { 41, 22, TARGET_STRING("xPC HC/atTarget"),
    TARGET_STRING(""), 0, 3, 0, 0, 1 },

  { 42, 22, TARGET_STRING("xPC HC/counter"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 43, 22, TARGET_STRING("xPC HC/switchPC"),
    TARGET_STRING(""), 0, 3, 0, 0, 1 },

  { 44, 22, TARGET_STRING("xPC HC/Gain"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 45, 22, TARGET_STRING("xPC HC/Gain1"),
    TARGET_STRING(""), 0, 3, 0, 0, 1 },

  { 46, 22, TARGET_STRING("xPC HC/measSignal"),
    TARGET_STRING(""), 0, 0, 5, 0, 1 },

  { 47, 22, TARGET_STRING("xPC HC/MovingAverage Filter"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 48, 22, TARGET_STRING("xPC HC/MovingAverage Filter1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 49, 3, TARGET_STRING("ATS compensator/Coefficient for LSM/Dot Product"),
    TARGET_STRING("A11"), 0, 0, 0, 0, 0 },

  { 50, 3, TARGET_STRING("ATS compensator/Coefficient for LSM/Dot Product1"),
    TARGET_STRING("A12"), 0, 0, 0, 0, 0 },

  { 51, 3, TARGET_STRING("ATS compensator/Coefficient for LSM/Dot Product10"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 52, 3, TARGET_STRING("ATS compensator/Coefficient for LSM/Dot Product11"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 53, 3, TARGET_STRING("ATS compensator/Coefficient for LSM/Dot Product12"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 54, 3, TARGET_STRING("ATS compensator/Coefficient for LSM/Dot Product2"),
    TARGET_STRING("A13"), 0, 0, 0, 0, 0 },

  { 55, 3, TARGET_STRING("ATS compensator/Coefficient for LSM/Dot Product4"),
    TARGET_STRING("A22"), 0, 0, 0, 0, 0 },

  { 56, 3, TARGET_STRING("ATS compensator/Coefficient for LSM/Dot Product5"),
    TARGET_STRING("A23"), 0, 0, 0, 0, 0 },

  { 57, 3, TARGET_STRING("ATS compensator/Coefficient for LSM/Dot Product7"),
    TARGET_STRING("A33"), 0, 0, 0, 0, 0 },

  { 58, 3, TARGET_STRING("ATS compensator/Discrete Derivative/Diff"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 59, 3, TARGET_STRING("ATS compensator/Discrete Derivative/TSamp"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 60, 3, TARGET_STRING("ATS compensator/Discrete Derivative/UD"),
    TARGET_STRING("U(k-1)"), 0, 0, 0, 0, 0 },

  { 61, 3, TARGET_STRING("ATS compensator/Discrete Derivative1/Diff"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 62, 3, TARGET_STRING("ATS compensator/Discrete Derivative1/TSamp"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 63, 3, TARGET_STRING("ATS compensator/Discrete Derivative1/UD"),
    TARGET_STRING("U(k-1)"), 0, 0, 0, 0, 0 },

  { 64, 3, TARGET_STRING("ATS compensator/Tapped delay subsystem/Tapped Delay"),
    TARGET_STRING(""), 0, 0, 2, 0, 0 },

  { 65, 3, TARGET_STRING("ATS compensator/Tapped delay subsystem/Tapped Delay1"),
    TARGET_STRING(""), 0, 0, 2, 0, 0 },

  { 66, 3, TARGET_STRING("ATS compensator/Tapped delay subsystem/Tapped Delay2"),
    TARGET_STRING(""), 0, 0, 2, 0, 0 },

  { 67, 0, TARGET_STRING("Subsystem2/assemble3/Assignment"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 68, 6, TARGET_STRING("xPC HC/Offset1/Data Store Read"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 69, 22, TARGET_STRING("xPC HC/Offset1/typeConv"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 70, 6, TARGET_STRING("xPC HC/Offset1/Sum1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 71, 22, TARGET_STRING("xPC HC/Offset1/Switch"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 72, 9, TARGET_STRING("xPC HC/Offset2/Data Store Read"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 73, 22, TARGET_STRING("xPC HC/Offset2/typeConv"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 74, 9, TARGET_STRING("xPC HC/Offset2/Sum1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 75, 22, TARGET_STRING("xPC HC/Offset2/Switch"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 76, 22, TARGET_STRING("xPC HC/SubSystem0/typeConv"),
    TARGET_STRING(""), 0, 3, 0, 0, 1 },

  { 77, 22, TARGET_STRING("xPC HC/SubSystem1/Gain4"),
    TARGET_STRING(""), 0, 0, 5, 0, 1 },

  { 78, 22, TARGET_STRING("xPC HC/Subsystem/Dummy Zero"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 79, 22, TARGET_STRING("xPC HC/Subsystem4/typeConv1"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 80, 22, TARGET_STRING("xPC HC/Subsystem4/typeConv2"),
    TARGET_STRING(""), 0, 0, 6, 0, 1 },

  { 81, 22, TARGET_STRING("xPC HC/Subsystem4/typeConv3"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 82, 3, TARGET_STRING(
    "ATS compensator/Tapped delay subsystem/Discrete Derivative/Diff"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 83, 3, TARGET_STRING(
    "ATS compensator/Tapped delay subsystem/Discrete Derivative/TSamp"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 84, 3, TARGET_STRING(
    "ATS compensator/Tapped delay subsystem/Discrete Derivative/UD"),
    TARGET_STRING("U(k-1)"), 0, 0, 0, 0, 0 },

  { 85, 3, TARGET_STRING(
    "ATS compensator/Tapped delay subsystem/Discrete Derivative1/Diff"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 86, 3, TARGET_STRING(
    "ATS compensator/Tapped delay subsystem/Discrete Derivative1/TSamp"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 87, 3, TARGET_STRING(
    "ATS compensator/Tapped delay subsystem/Discrete Derivative1/UD"),
    TARGET_STRING("U(k-1)"), 0, 0, 0, 0, 0 },

  { 88, 22, TARGET_STRING("xPC HC/Offset1/Counter/Output"),
    TARGET_STRING(""), 0, 1, 0, 0, 1 },

  { 89, 7, TARGET_STRING("xPC HC/Offset1/If Action/Data Store Read"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 90, 7, TARGET_STRING("xPC HC/Offset1/If Action/Gain"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 91, 7, TARGET_STRING("xPC HC/Offset1/If Action/Sum"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 92, 22, TARGET_STRING("xPC HC/Offset2/Counter/Output"),
    TARGET_STRING(""), 0, 1, 0, 0, 1 },

  { 93, 10, TARGET_STRING("xPC HC/Offset2/If Action/Data Store Read"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 94, 10, TARGET_STRING("xPC HC/Offset2/If Action/Gain"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 95, 10, TARGET_STRING("xPC HC/Offset2/If Action/Sum"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 96, 22, TARGET_STRING(
    "xPC HC/SubSystem0/Detect Fall Nonpositive/FixPt Relational Operator"),
    TARGET_STRING(""), 0, 4, 0, 0, 1 },

  { 97, 22, TARGET_STRING(
    "xPC HC/SubSystem0/Detect Fall Nonpositive/Delay Input1"),
    TARGET_STRING("U(k-1)"), 0, 4, 0, 0, 1 },

  { 98, 22, TARGET_STRING(
    "xPC HC/SubSystem0/Detect Rise Positive/FixPt Relational Operator"),
    TARGET_STRING(""), 0, 4, 0, 0, 1 },

  { 99, 22, TARGET_STRING("xPC HC/SubSystem0/Detect Rise Positive/Delay Input1"),
    TARGET_STRING("U(k-1)"), 0, 4, 0, 0, 1 },

  { 100, 22, TARGET_STRING("xPC HC/SubSystem1/Subsystem2/Add"),
    TARGET_STRING(""), 0, 4, 0, 0, 1 },

  { 101, 22, TARGET_STRING(
    "xPC HC/Offset1/Counter/Increment Real World/FixPt Sum1"),
    TARGET_STRING(""), 0, 1, 0, 0, 1 },

  { 102, 22, TARGET_STRING("xPC HC/Offset1/Counter/Wrap To Zero/FixPt Switch"),
    TARGET_STRING(""), 0, 1, 0, 0, 1 },

  { 103, 22, TARGET_STRING(
    "xPC HC/Offset2/Counter/Increment Real World/FixPt Sum1"),
    TARGET_STRING(""), 0, 1, 0, 0, 1 },

  { 104, 22, TARGET_STRING("xPC HC/Offset2/Counter/Wrap To Zero/FixPt Switch"),
    TARGET_STRING(""), 0, 1, 0, 0, 1 },

  { 105, 22, TARGET_STRING(
    "xPC HC/SubSystem0/Detect Fall Nonpositive/Nonpositive/Compare"),
    TARGET_STRING(""), 0, 4, 0, 0, 1 },

  { 106, 22, TARGET_STRING(
    "xPC HC/SubSystem0/Detect Rise Positive/Positive/Compare"),
    TARGET_STRING(""), 0, 4, 0, 0, 1 },

  { 107, 16, TARGET_STRING(
    "xPC HC/SubSystem1/For Each Subsystem/SubSystem/measDsp In"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 108, 16, TARGET_STRING(
    "xPC HC/SubSystem1/For Each Subsystem/SubSystem/measFrc In"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 109, 17, TARGET_STRING("xPC HC/SubSystem1/For Each Subsystem/Subsystem/Add"),
    TARGET_STRING(""), 0, 4, 0, 0, 1 },

  { 110, 20, TARGET_STRING(
    "xPC HC/SubSystem1/Subsystem2/If Action Subsystem1/Relational Operator"),
    TARGET_STRING(""), 0, 5, 0, 0, 1 },

  { 111, 21, TARGET_STRING(
    "xPC HC/SubSystem1/Subsystem2/If Action Subsystem2/Relational Operator"),
    TARGET_STRING(""), 0, 5, 0, 0, 1 },

  { 112, 15, TARGET_STRING(
    "xPC HC/SubSystem1/For Each Subsystem/Subsystem/If Action Subsystem1/Relational Operator"),
    TARGET_STRING(""), 0, 5, 0, 0, 1 },

  { 113, 14, TARGET_STRING(
    "xPC HC/SubSystem1/For Each Subsystem/Subsystem/If Action Subsystem2/Relational Operator"),
    TARGET_STRING(""), 0, 5, 0, 0, 1 },

  {
    0, 0, (NULL), (NULL), 0, 0, 0, 0, 0
  }
};

static const rtwCAPI_BlockParameters rtBlockParameters[] = {
  /* addrMapIndex, blockPath,
   * paramName, dataTypeIndex, dimIndex, fixPtIdx
   */
  { 114, TARGET_STRING("xPC HC"),
    TARGET_STRING("upFact"), 3, 0, 0 },

  { 115, TARGET_STRING("ctl modes"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 116, TARGET_STRING("force cmds"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 117, TARGET_STRING("master span"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 118, TARGET_STRING("valve cmds"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 119, TARGET_STRING("Setup "),
    TARGET_STRING("P1"), 0, 0, 0 },

  { 120, TARGET_STRING("Setup "),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 121, TARGET_STRING("Setup "),
    TARGET_STRING("P3"), 0, 7, 0 },

  { 122, TARGET_STRING("Setup "),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 123, TARGET_STRING("Setup "),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 124, TARGET_STRING("Setup "),
    TARGET_STRING("P6"), 0, 0, 0 },

  { 125, TARGET_STRING("ATS Switch"),
    TARGET_STRING("CurrentSetting"), 4, 0, 0 },

  { 126, TARGET_STRING("ATS compensator/Discrete Derivative"),
    TARGET_STRING("ICPrevScaledInput"), 0, 0, 0 },

  { 127, TARGET_STRING("ATS compensator/Discrete Derivative1"),
    TARGET_STRING("ICPrevScaledInput"), 0, 0, 0 },

  { 128, TARGET_STRING("ATS compensator/Tapped Delay"),
    TARGET_STRING("vinit"), 0, 0, 0 },

  { 129, TARGET_STRING("ATS compensator/Manual Switch"),
    TARGET_STRING("CurrentSetting"), 4, 0, 0 },

  { 130, TARGET_STRING("ATS compensator/Manual Switch1"),
    TARGET_STRING("CurrentSetting"), 4, 0, 0 },

  { 131, TARGET_STRING("ATS compensator/Butterworth filter"),
    TARGET_STRING("InitialStates"), 0, 0, 0 },

  { 132, TARGET_STRING("ATS compensator/Butterworth filter1"),
    TARGET_STRING("InitialStates"), 0, 0, 0 },

  { 133, TARGET_STRING("ATS compensator/Unit Delay"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 134, TARGET_STRING("ATS compensator/Unit Delay1"),
    TARGET_STRING("InitialCondition"), 0, 0, 0 },

  { 135, TARGET_STRING("Subsystem2/assemble3"),
    TARGET_STRING("id"), 0, 0, 0 },

  { 136, TARGET_STRING("Subsystem2/Saturation"),
    TARGET_STRING("UpperLimit"), 0, 0, 0 },

  { 137, TARGET_STRING("Subsystem2/Saturation"),
    TARGET_STRING("LowerLimit"), 0, 0, 0 },

  { 138, TARGET_STRING("Subsystem3/MovingAverage Filter"),
    TARGET_STRING("numSample"), 0, 0, 0 },

  { 139, TARGET_STRING("Subsystem3/MovingAverage Filter"),
    TARGET_STRING("InitialStates"), 0, 0, 0 },

  { 140, TARGET_STRING("Subsystem4/MovingAverage Filter1"),
    TARGET_STRING("numSample"), 0, 0, 0 },

  { 141, TARGET_STRING("Subsystem4/MovingAverage Filter1"),
    TARGET_STRING("InitialStates"), 0, 0, 0 },

  { 142, TARGET_STRING("input from MTS (FT60)/Read "),
    TARGET_STRING("P1"), 0, 0, 0 },

  { 143, TARGET_STRING("input from MTS (FT60)/Read "),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 144, TARGET_STRING("input from MTS (FT60)/Read "),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 145, TARGET_STRING("input from MTS (FT60)/Read "),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 146, TARGET_STRING("input from MTS (FT60)/Read "),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 147, TARGET_STRING("input from MTS (FT60)/SCGT unpack"),
    TARGET_STRING("P1"), 0, 8, 0 },

  { 148, TARGET_STRING("input from MTS (FT60)/SCGT unpack"),
    TARGET_STRING("P2"), 0, 9, 0 },

  { 149, TARGET_STRING("input from MTS (FT60)/SCGT unpack"),
    TARGET_STRING("P3"), 0, 8, 0 },

  { 150, TARGET_STRING("input from MTS (FT60)/SCGT unpack"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 151, TARGET_STRING("output to MTS (FT60)/SCGT pack"),
    TARGET_STRING("P1"), 0, 10, 0 },

  { 152, TARGET_STRING("output to MTS (FT60)/SCGT pack"),
    TARGET_STRING("P2"), 0, 11, 0 },

  { 153, TARGET_STRING("output to MTS (FT60)/SCGT pack"),
    TARGET_STRING("P3"), 0, 10, 0 },

  { 154, TARGET_STRING("output to MTS (FT60)/SCGT pack"),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 155, TARGET_STRING("output to MTS (FT60)/Write "),
    TARGET_STRING("P1"), 0, 0, 0 },

  { 156, TARGET_STRING("output to MTS (FT60)/Write "),
    TARGET_STRING("P2"), 0, 0, 0 },

  { 157, TARGET_STRING("output to MTS (FT60)/Write "),
    TARGET_STRING("P3"), 0, 0, 0 },

  { 158, TARGET_STRING("output to MTS (FT60)/Write "),
    TARGET_STRING("P4"), 0, 0, 0 },

  { 159, TARGET_STRING("output to MTS (FT60)/Write "),
    TARGET_STRING("P5"), 0, 0, 0 },

  { 160, TARGET_STRING("xPC HC/iMem"),
    TARGET_STRING("InitialValue"), 0, 0, 0 },

  { 161, TARGET_STRING("xPC HC/sMem"),
    TARGET_STRING("InitialValue"), 3, 0, 0 },

  { 162, TARGET_STRING("xPC HC/tMem"),
    TARGET_STRING("InitialValue"), 3, 0, 0 },

  { 163, TARGET_STRING("xPC HC/Offset1"),
    TARGET_STRING("nOffset"), 0, 0, 0 },

  { 164, TARGET_STRING("xPC HC/Offset2"),
    TARGET_STRING("nOffset"), 0, 0, 0 },

  { 165, TARGET_STRING("xPC HC/Predictor-Corrector"),
    TARGET_STRING("N"), 3, 0, 0 },

  { 166, TARGET_STRING("xPC HC/Predictor-Corrector"),
    TARGET_STRING("nDOF"), 3, 0, 0 },

  { 167, TARGET_STRING("xPC HC/newTarget"),
    TARGET_STRING("Value"), 3, 0, 0 },

  { 168, TARGET_STRING("xPC HC/targSignal"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 169, TARGET_STRING("xPC HC/Gain"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 170, TARGET_STRING("xPC HC/Gain1"),
    TARGET_STRING("Gain"), 3, 0, 1 },

  { 171, TARGET_STRING("xPC HC/measSignal"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 172, TARGET_STRING("xPC HC/MovingAverage Filter"),
    TARGET_STRING("numSample"), 0, 0, 0 },

  { 173, TARGET_STRING("xPC HC/MovingAverage Filter"),
    TARGET_STRING("InitialStates"), 0, 0, 0 },

  { 174, TARGET_STRING("xPC HC/MovingAverage Filter1"),
    TARGET_STRING("numSample"), 0, 0, 0 },

  { 175, TARGET_STRING("xPC HC/MovingAverage Filter1"),
    TARGET_STRING("InitialStates"), 0, 0, 0 },

  { 176, TARGET_STRING("ATS compensator/Discrete Derivative/TSamp"),
    TARGET_STRING("WtEt"), 0, 0, 0 },

  { 177, TARGET_STRING("ATS compensator/Discrete Derivative1/TSamp"),
    TARGET_STRING("WtEt"), 0, 0, 0 },

  { 178, TARGET_STRING("ATS compensator/Tapped delay subsystem/Discrete Derivative"),
    TARGET_STRING("ICPrevScaledInput"), 0, 0, 0 },

  { 179, TARGET_STRING("ATS compensator/Tapped delay subsystem/Discrete Derivative1"),
    TARGET_STRING("ICPrevScaledInput"), 0, 0, 0 },

  { 180, TARGET_STRING("ATS compensator/Tapped delay subsystem/Tapped Delay"),
    TARGET_STRING("vinit"), 0, 0, 0 },

  { 181, TARGET_STRING("ATS compensator/Tapped delay subsystem/Tapped Delay1"),
    TARGET_STRING("vinit"), 0, 0, 0 },

  { 182, TARGET_STRING("ATS compensator/Tapped delay subsystem/Tapped Delay2"),
    TARGET_STRING("vinit"), 0, 0, 0 },

  { 183, TARGET_STRING("xPC HC/Offset1/Data Store Memory"),
    TARGET_STRING("InitialValue"), 0, 0, 0 },

  { 184, TARGET_STRING("xPC HC/Offset1/Constant"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 185, TARGET_STRING("xPC HC/Offset2/Data Store Memory"),
    TARGET_STRING("InitialValue"), 0, 0, 0 },

  { 186, TARGET_STRING("xPC HC/Offset2/Constant"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 187, TARGET_STRING("xPC HC/SubSystem0/Detect Fall Nonpositive"),
    TARGET_STRING("vinit"), 4, 0, 0 },

  { 188, TARGET_STRING("xPC HC/SubSystem0/Detect Rise Positive"),
    TARGET_STRING("vinit"), 4, 0, 0 },

  { 189, TARGET_STRING("xPC HC/SubSystem1/Gain4"),
    TARGET_STRING("Gain"), 0, 0, 0 },

  { 190, TARGET_STRING("xPC HC/Subsystem/Dummy Zero"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 191, TARGET_STRING("ATS compensator/Tapped delay subsystem/Discrete Derivative/TSamp"),
    TARGET_STRING("WtEt"), 0, 0, 0 },

  { 192, TARGET_STRING("ATS compensator/Tapped delay subsystem/Discrete Derivative1/TSamp"),
    TARGET_STRING("WtEt"), 0, 0, 0 },

  { 193, TARGET_STRING("xPC HC/Offset1/Counter/Wrap To Zero"),
    TARGET_STRING("Threshold"), 1, 0, 0 },

  { 194, TARGET_STRING("xPC HC/Offset1/Counter/Output"),
    TARGET_STRING("InitialCondition"), 1, 0, 0 },

  { 195, TARGET_STRING("xPC HC/Offset2/Counter/Wrap To Zero"),
    TARGET_STRING("Threshold"), 1, 0, 0 },

  { 196, TARGET_STRING("xPC HC/Offset2/Counter/Output"),
    TARGET_STRING("InitialCondition"), 1, 0, 0 },

  { 197, TARGET_STRING("xPC HC/SubSystem0/If Action Subsystem0/atTargetFlag"),
    TARGET_STRING("Value"), 3, 0, 0 },

  { 198, TARGET_STRING("xPC HC/SubSystem0/If Action Subsystem0/switchFlag"),
    TARGET_STRING("Value"), 3, 0, 0 },

  { 199, TARGET_STRING("xPC HC/SubSystem0/If Action Subsystem1/switchFlag"),
    TARGET_STRING("Value"), 3, 0, 0 },

  { 200, TARGET_STRING("xPC HC/SubSystem1/SubSystem2/atTargetFlag"),
    TARGET_STRING("Value"), 3, 0, 0 },

  { 201, TARGET_STRING("xPC HC/SubSystem1/Subsystem2/Constant"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 202, TARGET_STRING("xPC HC/SubSystem1/Subsystem2/Constant1"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 203, TARGET_STRING("xPC HC/Offset1/Counter/Increment Real World/FixPt Constant"),
    TARGET_STRING("Value"), 1, 0, 0 },

  { 204, TARGET_STRING("xPC HC/Offset1/Counter/Wrap To Zero/Constant"),
    TARGET_STRING("Value"), 1, 0, 0 },

  { 205, TARGET_STRING("xPC HC/Offset2/Counter/Increment Real World/FixPt Constant"),
    TARGET_STRING("Value"), 1, 0, 0 },

  { 206, TARGET_STRING("xPC HC/Offset2/Counter/Wrap To Zero/Constant"),
    TARGET_STRING("Value"), 1, 0, 0 },

  { 207, TARGET_STRING("xPC HC/SubSystem0/Detect Fall Nonpositive/Nonpositive/Constant"),
    TARGET_STRING("Value"), 3, 0, 0 },

  { 208, TARGET_STRING("xPC HC/SubSystem0/Detect Rise Positive/Positive/Constant"),
    TARGET_STRING("Value"), 3, 0, 0 },

  { 209, TARGET_STRING("xPC HC/SubSystem1/For Each Subsystem/SubSystem/measDsp Out"),
    TARGET_STRING("InitialOutput"), 0, 0, 0 },

  { 210, TARGET_STRING("xPC HC/SubSystem1/For Each Subsystem/SubSystem/measFrc Out"),
    TARGET_STRING("InitialOutput"), 0, 0, 0 },

  { 211, TARGET_STRING("xPC HC/SubSystem1/For Each Subsystem/Subsystem/Constant1"),
    TARGET_STRING("Value"), 0, 0, 0 },

  { 212, TARGET_STRING("xPC HC/SubSystem1/Subsystem2/If Action Subsystem1/Out1"),
    TARGET_STRING("InitialOutput"), 5, 0, 0 },

  { 213, TARGET_STRING("xPC HC/SubSystem1/Subsystem2/If Action Subsystem2/Out1"),
    TARGET_STRING("InitialOutput"), 5, 0, 0 },

  { 214, TARGET_STRING("xPC HC/SubSystem1/For Each Subsystem/Subsystem/If Action Subsystem1/Out1"),
    TARGET_STRING("InitialOutput"), 5, 0, 0 },

  { 215, TARGET_STRING("xPC HC/SubSystem1/For Each Subsystem/Subsystem/If Action Subsystem2/Out1"),
    TARGET_STRING("InitialOutput"), 5, 0, 0 },

  {
    0, (NULL), (NULL), 0, 0, 0
  }
};

/* Tunable variable parameters */
static const rtwCAPI_ModelParameters rtModelParameters[] = {
  /* addrMapIndex, varName, dataTypeIndex, dimIndex, fixPtIndex */
  { 216, TARGET_STRING("HybridCtrlParameters"), 6, 0, 0 },

  { 217, TARGET_STRING("MRC"), 0, 13, 0 },

  { 218, TARGET_STRING("P_range"), 0, 14, 0 },

  { 219, TARGET_STRING("Par"), 0, 6, 0 },

  { 220, TARGET_STRING("Threshold"), 0, 0, 0 },

  { 221, TARGET_STRING("Zden"), 0, 15, 0 },

  { 222, TARGET_STRING("Znum"), 0, 15, 0 },

  { 0, (NULL), 0, 0, 0 }
};

#ifndef HOST_CAPI_BUILD

/* Declare Data Addresses statically */
static void* rtDataAddrMap[] = {
  &HybridControllerD2D2_B.ATSSwitch,   /* 0: Signal */
  &HybridControllerD2D2_B.CoreSubsys[0].apar[0],/* 1: Signal */
  &HybridControllerD2D2_B.CoreSubsys[0].ut_pred,/* 2: Signal */
  &HybridControllerD2D2_B.CoreSubsys[0].TappedDelay_d[0],/* 3: Signal */
  &HybridControllerD2D2_B.CoreSubsys[0].ManualSwitch,/* 4: Signal */
  &HybridControllerD2D2_B.CoreSubsys[0].ManualSwitch1,/* 5: Signal */
  &HybridControllerD2D2_B.CoreSubsys[0].Butterworthfilter,/* 6: Signal */
  &HybridControllerD2D2_B.CoreSubsys[0].Butterworthfilter1,/* 7: Signal */
  &HybridControllerD2D2_B.CoreSubsys[0].UnitDelay[0],/* 8: Signal */
  &HybridControllerD2D2_B.CoreSubsys[0].UnitDelay1,/* 9: Signal */
  &HybridControllerD2D2_B.Saturation,  /* 10: Signal */
  &HybridControllerD2D2_B.MovingAverageFilter,/* 11: Signal */
  &HybridControllerD2D2_B.MovingAverageFilter1,/* 12: Signal */
  &HybridControllerD2D2_B.typeConv1,   /* 13: Signal */
  &HybridControllerD2D2_B.typeConv2_p, /* 14: Signal */
  &HybridControllerD2D2_B.typeConv3,   /* 15: Signal */
  &HybridControllerD2D2_B.typeConv4,   /* 16: Signal */
  &HybridControllerD2D2_B.typeConv5,   /* 17: Signal */
  &HybridControllerD2D2_B.typeConv6,   /* 18: Signal */
  &HybridControllerD2D2_B.typeConv7,   /* 19: Signal */
  &HybridControllerD2D2_B.typeConv8,   /* 20: Signal */
  &HybridControllerD2D2_B.Read[0],     /* 21: Signal */
  &HybridControllerD2D2_B.SCGTunpack_o1,/* 22: Signal */
  &HybridControllerD2D2_B.SCGTunpack_o2,/* 23: Signal */
  &HybridControllerD2D2_B.SCGTunpack_o3,/* 24: Signal */
  &HybridControllerD2D2_B.SCGTunpack_o4,/* 25: Signal */
  &HybridControllerD2D2_B.SCGTunpack_o5,/* 26: Signal */
  &HybridControllerD2D2_B.SCGTunpack_o6,/* 27: Signal */
  &HybridControllerD2D2_B.SCGTunpack_o7,/* 28: Signal */
  &HybridControllerD2D2_B.SCGTunpack_o8,/* 29: Signal */
  &HybridControllerD2D2_B.typeConv1_p, /* 30: Signal */
  &HybridControllerD2D2_B.typeConv2_i, /* 31: Signal */
  &HybridControllerD2D2_B.typeConv3_k, /* 32: Signal */
  &HybridControllerD2D2_B.typeConv4_d, /* 33: Signal */
  &HybridControllerD2D2_B.typeConv5_d, /* 34: Signal */
  &HybridControllerD2D2_B.SCGTpack[0], /* 35: Signal */
  &HybridControllerD2D2_B.comD[0],     /* 36: Signal */
  &HybridControllerD2D2_B.comV[0],     /* 37: Signal */
  &HybridControllerD2D2_B.comA[0],     /* 38: Signal */
  &HybridControllerD2D2_B.state,       /* 39: Signal */
  &HybridControllerD2D2_B.i,           /* 40: Signal */
  &HybridControllerD2D2_B.atTarget,    /* 41: Signal */
  &HybridControllerD2D2_B.counter,     /* 42: Signal */
  &HybridControllerD2D2_B.switchPC,    /* 43: Signal */
  &HybridControllerD2D2_B.Gain,        /* 44: Signal */
  &HybridControllerD2D2_B.Gain1,       /* 45: Signal */
  &HybridControllerD2D2_B.measSignal[0],/* 46: Signal */
  &HybridControllerD2D2_B.MovingAverageFilter_p,/* 47: Signal */
  &HybridControllerD2D2_B.MovingAverageFilter1_j,/* 48: Signal */
  &HybridControllerD2D2_B.CoreSubsys[0].A11,/* 49: Signal */
  &HybridControllerD2D2_B.CoreSubsys[0].A12,/* 50: Signal */
  &HybridControllerD2D2_B.CoreSubsys[0].DotProduct10,/* 51: Signal */
  &HybridControllerD2D2_B.CoreSubsys[0].DotProduct11,/* 52: Signal */
  &HybridControllerD2D2_B.CoreSubsys[0].DotProduct12,/* 53: Signal */
  &HybridControllerD2D2_B.CoreSubsys[0].A13,/* 54: Signal */
  &HybridControllerD2D2_B.CoreSubsys[0].A22,/* 55: Signal */
  &HybridControllerD2D2_B.CoreSubsys[0].A23,/* 56: Signal */
  &HybridControllerD2D2_B.CoreSubsys[0].A33,/* 57: Signal */
  &HybridControllerD2D2_B.CoreSubsys[0].Diff,/* 58: Signal */
  &HybridControllerD2D2_B.CoreSubsys[0].TSamp,/* 59: Signal */
  &HybridControllerD2D2_B.CoreSubsys[0].Uk1,/* 60: Signal */
  &HybridControllerD2D2_B.CoreSubsys[0].Diff_i,/* 61: Signal */
  &HybridControllerD2D2_B.CoreSubsys[0].TSamp_f,/* 62: Signal */
  &HybridControllerD2D2_B.CoreSubsys[0].Uk1_e,/* 63: Signal */
  &HybridControllerD2D2_B.CoreSubsys[0].TappedDelay[0],/* 64: Signal */
  &HybridControllerD2D2_B.CoreSubsys[0].TappedDelay1[0],/* 65: Signal */
  &HybridControllerD2D2_B.CoreSubsys[0].TappedDelay2[0],/* 66: Signal */
  &HybridControllerD2D2_B.Assignment,  /* 67: Signal */
  &HybridControllerD2D2_B.DataStoreRead_k,/* 68: Signal */
  &HybridControllerD2D2_B.typeConv_p,  /* 69: Signal */
  &HybridControllerD2D2_B.Sum1_d,      /* 70: Signal */
  &HybridControllerD2D2_B.Switch_h,    /* 71: Signal */
  &HybridControllerD2D2_B.DataStoreRead_c,/* 72: Signal */
  &HybridControllerD2D2_B.typeConv,    /* 73: Signal */
  &HybridControllerD2D2_B.Sum1,        /* 74: Signal */
  &HybridControllerD2D2_B.Switch,      /* 75: Signal */
  &HybridControllerD2D2_B.typeConv_j,  /* 76: Signal */
  &HybridControllerD2D2_B.Gain4[0],    /* 77: Signal */
  &HybridControllerD2D2_B.DummyZero,   /* 78: Signal */
  &HybridControllerD2D2_B.typeConv1_c, /* 79: Signal */
  &HybridControllerD2D2_B.typeConv2[0],/* 80: Signal */
  &HybridControllerD2D2_B.typeConv3_h, /* 81: Signal */
  &HybridControllerD2D2_B.CoreSubsys[0].Diff_k,/* 82: Signal */
  &HybridControllerD2D2_B.CoreSubsys[0].TSamp_j,/* 83: Signal */
  &HybridControllerD2D2_B.CoreSubsys[0].Uk1_g,/* 84: Signal */
  &HybridControllerD2D2_B.CoreSubsys[0].Diff_e,/* 85: Signal */
  &HybridControllerD2D2_B.CoreSubsys[0].TSamp_n,/* 86: Signal */
  &HybridControllerD2D2_B.CoreSubsys[0].Uk1_k,/* 87: Signal */
  &HybridControllerD2D2_B.Output_b,    /* 88: Signal */
  &HybridControllerD2D2_B.DataStoreRead_p,/* 89: Signal */
  &HybridControllerD2D2_B.Gain_n,      /* 90: Signal */
  &HybridControllerD2D2_B.Sum_n,       /* 91: Signal */
  &HybridControllerD2D2_B.Output,      /* 92: Signal */
  &HybridControllerD2D2_B.DataStoreRead,/* 93: Signal */
  &HybridControllerD2D2_B.Gain_a,      /* 94: Signal */
  &HybridControllerD2D2_B.Sum,         /* 95: Signal */
  &HybridControllerD2D2_B.FixPtRelationalOperator_g,/* 96: Signal */
  &HybridControllerD2D2_B.Uk1_j,       /* 97: Signal */
  &HybridControllerD2D2_B.FixPtRelationalOperator,/* 98: Signal */
  &HybridControllerD2D2_B.Uk1,         /* 99: Signal */
  &HybridControllerD2D2_B.Add,         /* 100: Signal */
  &HybridControllerD2D2_B.FixPtSum1,   /* 101: Signal */
  &HybridControllerD2D2_B.FixPtSwitch, /* 102: Signal */
  &HybridControllerD2D2_B.FixPtSum1_a, /* 103: Signal */
  &HybridControllerD2D2_B.FixPtSwitch_m,/* 104: Signal */
  &HybridControllerD2D2_B.Compare_j,   /* 105: Signal */
  &HybridControllerD2D2_B.Compare,     /* 106: Signal */
  &HybridControllerD2D2_B.CoreSubsys_p[0].measDspIn,/* 107: Signal */
  &HybridControllerD2D2_B.CoreSubsys_p[0].measFrcIn,/* 108: Signal */
  &HybridControllerD2D2_B.CoreSubsys_p[0].Add,/* 109: Signal */
  &HybridControllerD2D2_B.IfActionSubsystem1_h.RelationalOperator,/* 110: Signal */
  &HybridControllerD2D2_B.IfActionSubsystem2.RelationalOperator,/* 111: Signal */
  &HybridControllerD2D2_B.CoreSubsys_p[0].IfActionSubsystem1.RelationalOperator,/* 112: Signal */
  &HybridControllerD2D2_B.CoreSubsys_p[0].IfActionSubsystem2.RelationalOperator,/* 113: Signal */
  &HybridControllerD2D2_P.xPCHC_upFact,/* 114: Mask Parameter */
  &HybridControllerD2D2_P.ctlmodes_Value,/* 115: Block Parameter */
  &HybridControllerD2D2_P.forcecmds_Value,/* 116: Block Parameter */
  &HybridControllerD2D2_P.masterspan_Value,/* 117: Block Parameter */
  &HybridControllerD2D2_P.valvecmds_Value,/* 118: Block Parameter */
  &HybridControllerD2D2_P.Setup_P1,    /* 119: Block Parameter */
  &HybridControllerD2D2_P.Setup_P2,    /* 120: Block Parameter */
  &HybridControllerD2D2_P.Setup_P3[0], /* 121: Block Parameter */
  &HybridControllerD2D2_P.Setup_P4,    /* 122: Block Parameter */
  &HybridControllerD2D2_P.Setup_P5,    /* 123: Block Parameter */
  &HybridControllerD2D2_P.Setup_P6,    /* 124: Block Parameter */
  &HybridControllerD2D2_P.ATSSwitch_CurrentSetting,/* 125: Block Parameter */
  &HybridControllerD2D2_P.CoreSubsys.DiscreteDerivative_ICPrevScaled,/* 126: Mask Parameter */
  &HybridControllerD2D2_P.CoreSubsys.DiscreteDerivative1_ICPrevScale,/* 127: Mask Parameter */
  &HybridControllerD2D2_P.CoreSubsys.TappedDelay_vinit_e,/* 128: Block Parameter */
  &HybridControllerD2D2_P.CoreSubsys.ManualSwitch_CurrentSetting,/* 129: Block Parameter */
  &HybridControllerD2D2_P.CoreSubsys.ManualSwitch1_CurrentSetting,/* 130: Block Parameter */
  &HybridControllerD2D2_P.CoreSubsys.Butterworthfilter_InitialStates,/* 131: Block Parameter */
  &HybridControllerD2D2_P.CoreSubsys.Butterworthfilter1_InitialState,/* 132: Block Parameter */
  &HybridControllerD2D2_P.CoreSubsys.UnitDelay_InitialCondition,/* 133: Block Parameter */
  &HybridControllerD2D2_P.CoreSubsys.UnitDelay1_InitialCondition,/* 134: Block Parameter */
  &HybridControllerD2D2_P.assemble3_id,/* 135: Mask Parameter */
  &HybridControllerD2D2_P.Saturation_UpperSat,/* 136: Block Parameter */
  &HybridControllerD2D2_P.Saturation_LowerSat,/* 137: Block Parameter */
  &HybridControllerD2D2_P.MovingAverageFilter_numSample_c,/* 138: Block Parameter */
  &HybridControllerD2D2_P.MovingAverageFilter_InitialSt_i,/* 139: Block Parameter */
  &HybridControllerD2D2_P.MovingAverageFilter1_numSampl_b,/* 140: Block Parameter */
  &HybridControllerD2D2_P.MovingAverageFilter1_InitialS_o,/* 141: Block Parameter */
  &HybridControllerD2D2_P.Read_P1,     /* 142: Block Parameter */
  &HybridControllerD2D2_P.Read_P2,     /* 143: Block Parameter */
  &HybridControllerD2D2_P.Read_P3,     /* 144: Block Parameter */
  &HybridControllerD2D2_P.Read_P4,     /* 145: Block Parameter */
  &HybridControllerD2D2_P.Read_P5,     /* 146: Block Parameter */
  &HybridControllerD2D2_P.SCGTunpack_P1[0],/* 147: Block Parameter */
  &HybridControllerD2D2_P.SCGTunpack_P2[0],/* 148: Block Parameter */
  &HybridControllerD2D2_P.SCGTunpack_P3[0],/* 149: Block Parameter */
  &HybridControllerD2D2_P.SCGTunpack_P4,/* 150: Block Parameter */
  &HybridControllerD2D2_P.SCGTpack_P1[0],/* 151: Block Parameter */
  &HybridControllerD2D2_P.SCGTpack_P2[0],/* 152: Block Parameter */
  &HybridControllerD2D2_P.SCGTpack_P3[0],/* 153: Block Parameter */
  &HybridControllerD2D2_P.SCGTpack_P4, /* 154: Block Parameter */
  &HybridControllerD2D2_P.Write_P1,    /* 155: Block Parameter */
  &HybridControllerD2D2_P.Write_P2,    /* 156: Block Parameter */
  &HybridControllerD2D2_P.Write_P3,    /* 157: Block Parameter */
  &HybridControllerD2D2_P.Write_P4,    /* 158: Block Parameter */
  &HybridControllerD2D2_P.Write_P5,    /* 159: Block Parameter */
  &HybridControllerD2D2_P.iMem_InitialValue,/* 160: Block Parameter */
  &HybridControllerD2D2_P.sMem_InitialValue,/* 161: Block Parameter */
  &HybridControllerD2D2_P.tMem_InitialValue,/* 162: Block Parameter */
  &HybridControllerD2D2_P.Offset1_nOffset,/* 163: Mask Parameter */
  &HybridControllerD2D2_P.Offset2_nOffset,/* 164: Mask Parameter */
  &HybridControllerD2D2_P.PredictorCorrector_N,/* 165: Block Parameter */
  &HybridControllerD2D2_P.PredictorCorrector_nDOF,/* 166: Block Parameter */
  &HybridControllerD2D2_P.newTarget_Value,/* 167: Block Parameter */
  &HybridControllerD2D2_P.targSignal_Value,/* 168: Block Parameter */
  &HybridControllerD2D2_P.Gain_Gain,   /* 169: Block Parameter */
  &HybridControllerD2D2_P.Gain1_Gain,  /* 170: Block Parameter */
  &HybridControllerD2D2_P.measSignal_Gain,/* 171: Block Parameter */
  &HybridControllerD2D2_P.MovingAverageFilter_numSample,/* 172: Block Parameter */
  &HybridControllerD2D2_P.MovingAverageFilter_InitialStat,/* 173: Block Parameter */
  &HybridControllerD2D2_P.MovingAverageFilter1_numSample,/* 174: Block Parameter */
  &HybridControllerD2D2_P.MovingAverageFilter1_InitialSta,/* 175: Block Parameter */
  &HybridControllerD2D2_P.CoreSubsys.TSamp_WtEt,/* 176: Block Parameter */
  &HybridControllerD2D2_P.CoreSubsys.TSamp_WtEt_o,/* 177: Block Parameter */
  &HybridControllerD2D2_P.CoreSubsys.DiscreteDerivative_ICPrevScal_a,/* 178: Mask Parameter */
  &HybridControllerD2D2_P.CoreSubsys.DiscreteDerivative1_ICPrevSca_b,/* 179: Mask Parameter */
  &HybridControllerD2D2_P.CoreSubsys.TappedDelay_vinit,/* 180: Block Parameter */
  &HybridControllerD2D2_P.CoreSubsys.TappedDelay1_vinit,/* 181: Block Parameter */
  &HybridControllerD2D2_P.CoreSubsys.TappedDelay2_vinit,/* 182: Block Parameter */
  &HybridControllerD2D2_P.DataStoreMemory_InitialValue,/* 183: Block Parameter */
  &HybridControllerD2D2_P.Constant_Value,/* 184: Block Parameter */
  &HybridControllerD2D2_P.DataStoreMemory_InitialValue_p,/* 185: Block Parameter */
  &HybridControllerD2D2_P.Constant_Value_k,/* 186: Block Parameter */
  &HybridControllerD2D2_P.DetectFallNonpositive_vinit,/* 187: Mask Parameter */
  &HybridControllerD2D2_P.DetectRisePositive_vinit,/* 188: Mask Parameter */
  &HybridControllerD2D2_P.Gain4_Gain,  /* 189: Block Parameter */
  &HybridControllerD2D2_P.DummyZero_Value,/* 190: Block Parameter */
  &HybridControllerD2D2_P.CoreSubsys.TSamp_WtEt_k,/* 191: Block Parameter */
  &HybridControllerD2D2_P.CoreSubsys.TSamp_WtEt_j,/* 192: Block Parameter */
  &HybridControllerD2D2_P.WrapToZero_Threshold,/* 193: Mask Parameter */
  &HybridControllerD2D2_P.Output_InitialCondition_j,/* 194: Block Parameter */
  &HybridControllerD2D2_P.WrapToZero_Threshold_f,/* 195: Mask Parameter */
  &HybridControllerD2D2_P.Output_InitialCondition,/* 196: Block Parameter */
  &HybridControllerD2D2_P.atTargetFlag_Value,/* 197: Block Parameter */
  &HybridControllerD2D2_P.switchFlag_Value,/* 198: Block Parameter */
  &HybridControllerD2D2_P.switchFlag_Value_l,/* 199: Block Parameter */
  &HybridControllerD2D2_P.atTargetFlag_Value_e,/* 200: Block Parameter */
  &HybridControllerD2D2_P.Constant_Value_m,/* 201: Block Parameter */
  &HybridControllerD2D2_P.Constant1_Value,/* 202: Block Parameter */
  &HybridControllerD2D2_P.FixPtConstant_Value,/* 203: Block Parameter */
  &HybridControllerD2D2_P.Constant_Value_d,/* 204: Block Parameter */
  &HybridControllerD2D2_P.FixPtConstant_Value_b,/* 205: Block Parameter */
  &HybridControllerD2D2_P.Constant_Value_p,/* 206: Block Parameter */
  &HybridControllerD2D2_P.Constant_Value_e,/* 207: Block Parameter */
  &HybridControllerD2D2_P.Constant_Value_h,/* 208: Block Parameter */
  &HybridControllerD2D2_P.CoreSubsys_p.measDspOut_Y0,/* 209: Block Parameter */
  &HybridControllerD2D2_P.CoreSubsys_p.measFrcOut_Y0,/* 210: Block Parameter */
  &HybridControllerD2D2_P.CoreSubsys_p.Constant1_Value,/* 211: Block Parameter */
  &HybridControllerD2D2_P.IfActionSubsystem1_h.Out1_Y0,/* 212: Block Parameter */
  &HybridControllerD2D2_P.IfActionSubsystem2.Out1_Y0,/* 213: Block Parameter */
  &HybridControllerD2D2_P.CoreSubsys_p.IfActionSubsystem1.Out1_Y0,/* 214: Block Parameter */
  &HybridControllerD2D2_P.CoreSubsys_p.IfActionSubsystem2.Out1_Y0,/* 215: Block Parameter */
  &HybridControllerD2D2_P.HybridCtrlParameters,/* 216: Model Parameter */
  &HybridControllerD2D2_P.MRC[0],      /* 217: Model Parameter */
  &HybridControllerD2D2_P.P_range[0],  /* 218: Model Parameter */
  &HybridControllerD2D2_P.Par[0],      /* 219: Model Parameter */
  &HybridControllerD2D2_P.Threshold,   /* 220: Model Parameter */
  &HybridControllerD2D2_P.Zden[0],     /* 221: Model Parameter */
  &HybridControllerD2D2_P.Znum[0],     /* 222: Model Parameter */
};

/* Declare Data Run-Time Dimension Buffer Addresses statically */
static int32_T* rtVarDimsAddrMap[] = {
  (NULL)
};

#endif

/* Data Type Map - use dataTypeMapIndex to access this structure */
static TARGET_CONST rtwCAPI_DataTypeMap rtDataTypeMap[] = {
  /* cName, mwName, numElements, elemMapIndex, dataSize, slDataId, *
   * isComplex, isPointer, enumStorageType */
  { "double", "real_T", 0, 0, sizeof(real_T), SS_DOUBLE, 0, 0, 0 },

  { "unsigned int", "uint32_T", 0, 0, sizeof(uint32_T), SS_UINT32, 0, 0, 0 },

  { "float", "real32_T", 0, 0, sizeof(real32_T), SS_SINGLE, 0, 0, 0 },

  { "int", "int32_T", 0, 0, sizeof(int32_T), SS_INT32, 0, 0, 0 },

  { "unsigned char", "uint8_T", 0, 0, sizeof(uint8_T), SS_UINT8, 0, 0, 0 },

  { "unsigned char", "boolean_T", 0, 0, sizeof(boolean_T), SS_BOOLEAN, 0, 0, 0 },

  { "struct", "struct_Kj73OsWN0x5S8L4NmJ8cwH", 9, 1, sizeof
    (struct_Kj73OsWN0x5S8L4NmJ8cwH), SS_STRUCT, 0, 0, 0 }
};

#ifdef HOST_CAPI_BUILD
#undef sizeof
#endif

/* Structure Element Map - use elemMapIndex to access this structure */
static TARGET_CONST rtwCAPI_ElementMap rtElementMap[] = {
  /* elementName, elementOffset, dataTypeIndex, dimIndex, fxpIndex */
  { (NULL), 0, 0, 0, 0 },

  { "nDOF", rt_offsetof(struct_Kj73OsWN0x5S8L4NmJ8cwH, nDOF), 0, 12, 0 },

  { "dtInt", rt_offsetof(struct_Kj73OsWN0x5S8L4NmJ8cwH, dtInt), 0, 12, 0 },

  { "dtSim", rt_offsetof(struct_Kj73OsWN0x5S8L4NmJ8cwH, dtSim), 0, 12, 0 },

  { "delay", rt_offsetof(struct_Kj73OsWN0x5S8L4NmJ8cwH, delay), 0, 12, 0 },

  { "upFact", rt_offsetof(struct_Kj73OsWN0x5S8L4NmJ8cwH, upFact), 0, 12, 0 },

  { "dtCon", rt_offsetof(struct_Kj73OsWN0x5S8L4NmJ8cwH, dtCon), 0, 12, 0 },

  { "N", rt_offsetof(struct_Kj73OsWN0x5S8L4NmJ8cwH, N), 0, 12, 0 },

  { "iDelay", rt_offsetof(struct_Kj73OsWN0x5S8L4NmJ8cwH, iDelay), 0, 12, 0 },

  { "rate", rt_offsetof(struct_Kj73OsWN0x5S8L4NmJ8cwH, rate), 0, 12, 0 }
};

/* Dimension Map - use dimensionMapIndex to access elements of ths structure*/
static const rtwCAPI_DimensionMap rtDimensionMap[] = {
  /* dataOrientation, dimArrayIndex, numDims, vardimsIndex */
  { rtwCAPI_SCALAR, 0, 2, 0 },

  { rtwCAPI_VECTOR, 2, 2, 0 },

  { rtwCAPI_VECTOR, 4, 2, 0 },

  { rtwCAPI_VECTOR, 6, 2, 0 },

  { rtwCAPI_VECTOR, 8, 2, 0 },

  { rtwCAPI_VECTOR, 10, 2, 0 },

  { rtwCAPI_VECTOR, 12, 2, 0 },

  { rtwCAPI_VECTOR, 14, 2, 0 },

  { rtwCAPI_VECTOR, 16, 2, 0 },

  { rtwCAPI_MATRIX_COL_MAJOR, 18, 2, 0 },

  { rtwCAPI_VECTOR, 20, 2, 0 },

  { rtwCAPI_MATRIX_COL_MAJOR, 22, 2, 0 },

  { rtwCAPI_MATRIX_COL_MAJOR, 0, 2, 0 },

  { rtwCAPI_VECTOR, 24, 2, 0 },

  { rtwCAPI_MATRIX_COL_MAJOR, 26, 2, 0 },

  { rtwCAPI_VECTOR, 28, 2, 0 }
};

/* Dimension Array- use dimArrayIndex to access elements of this array */
static const uint_T rtDimensionArray[] = {
  1,                                   /* 0 */
  1,                                   /* 1 */
  4,                                   /* 2 */
  1,                                   /* 3 */
  1024,                                /* 4 */
  1,                                   /* 5 */
  8,                                   /* 6 */
  1,                                   /* 7 */
  5,                                   /* 8 */
  1,                                   /* 9 */
  2,                                   /* 10 */
  1,                                   /* 11 */
  3,                                   /* 12 */
  1,                                   /* 13 */
  1,                                   /* 14 */
  15,                                  /* 15 */
  1,                                   /* 16 */
  8,                                   /* 17 */
  2,                                   /* 18 */
  8,                                   /* 19 */
  1,                                   /* 20 */
  5,                                   /* 21 */
  2,                                   /* 22 */
  5,                                   /* 23 */
  1,                                   /* 24 */
  3,                                   /* 25 */
  3,                                   /* 26 */
  2,                                   /* 27 */
  1,                                   /* 28 */
  7                                    /* 29 */
};

/* C-API stores floating point values in an array. The elements of this  *
 * are unique. This ensures that values which are shared across the model*
 * are stored in the most efficient way. These values are referenced by  *
 *           - rtwCAPI_FixPtMap.fracSlopePtr,                            *
 *           - rtwCAPI_FixPtMap.biasPtr,                                 *
 *           - rtwCAPI_SampleTimeMap.samplePeriodPtr,                    *
 *           - rtwCAPI_SampleTimeMap.sampleOffsetPtr                     */
static const real_T rtcapiStoredFloats[] = {
  0.0009765625, 0.0, 1.0
};

/* Fixed Point Map */
static const rtwCAPI_FixPtMap rtFixPtMap[] = {
  /* fracSlopePtr, biasPtr, scaleType, wordLength, exponent, isSigned */
  { (NULL), (NULL), rtwCAPI_FIX_RESERVED, 0, 0, 0 },

  { (const void *) &rtcapiStoredFloats[2], (const void *) &rtcapiStoredFloats[1],
    rtwCAPI_FIX_UNIFORM_SCALING, 32, -30, 1 }
};

/* Sample Time Map - use sTimeIndex to access elements of ths structure */
static const rtwCAPI_SampleTimeMap rtSampleTimeMap[] = {
  /* samplePeriodPtr, sampleOffsetPtr, tid, samplingMode */
  { (const void *) &rtcapiStoredFloats[0], (const void *) &rtcapiStoredFloats[1],
    0, 0 },

  { (NULL), (NULL), -1, 0 }
};

static rtwCAPI_ModelMappingStaticInfo mmiStatic = {
  /* Signals:{signals, numSignals,
   *           rootInputs, numRootInputs,
   *           rootOutputs, numRootOutputs},
   * Params: {blockParameters, numBlockParameters,
   *          modelParameters, numModelParameters},
   * States: {states, numStates},
   * Maps:   {dataTypeMap, dimensionMap, fixPtMap,
   *          elementMap, sampleTimeMap, dimensionArray},
   * TargetType: targetType
   */
  { rtBlockSignals, 114,
    (NULL), 0,
    (NULL), 0 },

  { rtBlockParameters, 102,
    rtModelParameters, 7 },

  { (NULL), 0 },

  { rtDataTypeMap, rtDimensionMap, rtFixPtMap,
    rtElementMap, rtSampleTimeMap, rtDimensionArray },
  "float",

  { 940842956U,
    1290952128U,
    3596436773U,
    640973084U },
  (NULL), 0,
  0
};

/* Function to get C API Model Mapping Static Info */
const rtwCAPI_ModelMappingStaticInfo*
  HybridControllerD2D2_GetCAPIStaticMap(void)
{
  return &mmiStatic;
}

/* Cache pointers into DataMapInfo substructure of RTModel */
#ifndef HOST_CAPI_BUILD

void HybridControllerD2D2_InitializeDataMapInfo(void)
{
  /* Set C-API version */
  rtwCAPI_SetVersion(HybridControllerD2D2_M->DataMapInfo.mmi, 1);

  /* Cache static C-API data into the Real-time Model Data structure */
  rtwCAPI_SetStaticMap(HybridControllerD2D2_M->DataMapInfo.mmi, &mmiStatic);

  /* Cache static C-API logging data into the Real-time Model Data structure */
  rtwCAPI_SetLoggingStaticMap(HybridControllerD2D2_M->DataMapInfo.mmi, (NULL));

  /* Cache C-API Data Addresses into the Real-Time Model Data structure */
  rtwCAPI_SetDataAddressMap(HybridControllerD2D2_M->DataMapInfo.mmi,
    rtDataAddrMap);

  /* Cache C-API Data Run-Time Dimension Buffer Addresses into the Real-Time Model Data structure */
  rtwCAPI_SetVarDimsAddressMap(HybridControllerD2D2_M->DataMapInfo.mmi,
    rtVarDimsAddrMap);

  /* Cache C-API rtp Address and size  into the Real-Time Model Data structure */
  HybridControllerD2D2_M->DataMapInfo.mmi.InstanceMap.rtpAddress =
    rtmGetDefaultParam(HybridControllerD2D2_M);
  HybridControllerD2D2_M->DataMapInfo.mmi.staticMap->rtpSize = sizeof
    (P_HybridControllerD2D2_T);

  /* Cache the instance C-API logging pointer */
  rtwCAPI_SetInstanceLoggingInfo(HybridControllerD2D2_M->DataMapInfo.mmi, (NULL));

  /* Set reference to submodels */
  rtwCAPI_SetChildMMIArray(HybridControllerD2D2_M->DataMapInfo.mmi, (NULL));
  rtwCAPI_SetChildMMIArrayLen(HybridControllerD2D2_M->DataMapInfo.mmi, 0);
}

#else                                  /* HOST_CAPI_BUILD */
#ifdef __cplusplus

extern "C" {

#endif

  void HybridControllerD2D2_host_InitializeDataMapInfo
    (HybridControllerD2D2_host_DataMapInfo_T *dataMap, const char *path)
  {
    /* Set C-API version */
    rtwCAPI_SetVersion(dataMap->mmi, 1);

    /* Cache static C-API data into the Real-time Model Data structure */
    rtwCAPI_SetStaticMap(dataMap->mmi, &mmiStatic);

    /* host data address map is NULL */
    rtwCAPI_SetDataAddressMap(dataMap->mmi, NULL);

    /* host vardims address map is NULL */
    rtwCAPI_SetVarDimsAddressMap(dataMap->mmi, NULL);

    /* Set Instance specific path */
    rtwCAPI_SetPath(dataMap->mmi, path);
    rtwCAPI_SetFullPath(dataMap->mmi, NULL);

    /* Set reference to submodels */
    rtwCAPI_SetChildMMIArray(dataMap->mmi, (NULL));
    rtwCAPI_SetChildMMIArrayLen(dataMap->mmi, 0);
  }

#ifdef __cplusplus

}
#endif
#endif                                 /* HOST_CAPI_BUILD */

/* EOF: HybridControllerD2D2_capi.c */
