/*
 * com_FT60_2020a_capi.c
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "com_FT60_2020a".
 *
 * Model version              : 1.4
 * Simulink Coder version : 9.3 (R2020a) 18-Nov-2019
 * C source code generated on : Thu Feb 20 18:11:34 2025
 *
 * Target selection: slrt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Generic->32-bit x86 compatible
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "rtw_capi.h"
#ifdef HOST_CAPI_BUILD
#include "com_FT60_2020a_capi_host.h"
#define sizeof(s)                      ((size_t)(0xFFFF))
#undef rt_offsetof
#define rt_offsetof(s,el)              ((uint16_T)(0xFFFF))
#define TARGET_CONST
#define TARGET_STRING(s)               (s)
#else                                  /* HOST_CAPI_BUILD */
#include "builtin_typeid_types.h"
#include "com_FT60_2020a.h"
#include "com_FT60_2020a_capi.h"
#include "com_FT60_2020a_private.h"
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
  { 0, 0, TARGET_STRING("Cast To Single"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 1, 0, TARGET_STRING("Cast To Single1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 2, 0, TARGET_STRING("Cast To Single2"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 3, 0, TARGET_STRING("Cast To Single3"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 4, 0, TARGET_STRING("Cast To Single4"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 5, 0, TARGET_STRING("Cast To Single5"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 6, 0, TARGET_STRING("Cast To Single6"),
    TARGET_STRING(""), 0, 0, 0, 0, 1 },

  { 7, 0, TARGET_STRING("Read "),
    TARGET_STRING(""), 0, 1, 1, 0, 0 },

  { 8, 0, TARGET_STRING("Shared Memory Pack "),
    TARGET_STRING(""), 0, 1, 0, 0, 0 },

  { 9, 0, TARGET_STRING("Shared Memory Unpack /p1"),
    TARGET_STRING(""), 0, 0, 0, 0, 0 },

  { 10, 0, TARGET_STRING("Shared Memory Unpack /p2"),
    TARGET_STRING(""), 1, 0, 0, 0, 0 },

  { 11, 0, TARGET_STRING("Shared Memory Unpack /p3"),
    TARGET_STRING(""), 2, 0, 0, 0, 0 },

  { 12, 0, TARGET_STRING("Shared Memory Unpack /p4"),
    TARGET_STRING(""), 3, 0, 0, 0, 0 },

  { 13, 0, TARGET_STRING("Shared Memory Unpack /p5"),
    TARGET_STRING(""), 4, 0, 0, 0, 0 },

  { 14, 0, TARGET_STRING("Shared Memory Unpack /p6"),
    TARGET_STRING(""), 5, 0, 0, 0, 0 },

  { 15, 0, TARGET_STRING("Signal Generator"),
    TARGET_STRING(""), 0, 2, 0, 0, 1 },

  {
    0, 0, (NULL), (NULL), 0, 0, 0, 0, 0
  }
};

static const rtwCAPI_BlockParameters rtBlockParameters[] = {
  /* addrMapIndex, blockPath,
   * paramName, dataTypeIndex, dimIndex, fixPtIdx
   */
  { 16, TARGET_STRING("Read "),
    TARGET_STRING("P1"), 2, 0, 0 },

  { 17, TARGET_STRING("Read "),
    TARGET_STRING("P2"), 2, 0, 0 },

  { 18, TARGET_STRING("Read "),
    TARGET_STRING("P3"), 2, 0, 0 },

  { 19, TARGET_STRING("Read "),
    TARGET_STRING("P4"), 2, 0, 0 },

  { 20, TARGET_STRING("Read "),
    TARGET_STRING("P5"), 2, 0, 0 },

  { 21, TARGET_STRING("Setup "),
    TARGET_STRING("P1"), 2, 0, 0 },

  { 22, TARGET_STRING("Setup "),
    TARGET_STRING("P2"), 2, 0, 0 },

  { 23, TARGET_STRING("Setup "),
    TARGET_STRING("P3"), 2, 2, 0 },

  { 24, TARGET_STRING("Setup "),
    TARGET_STRING("P4"), 2, 0, 0 },

  { 25, TARGET_STRING("Setup "),
    TARGET_STRING("P5"), 2, 0, 0 },

  { 26, TARGET_STRING("Setup "),
    TARGET_STRING("P6"), 2, 0, 0 },

  { 27, TARGET_STRING("Shared Memory Pack "),
    TARGET_STRING("P1"), 2, 0, 0 },

  { 28, TARGET_STRING("Shared Memory Pack "),
    TARGET_STRING("P2"), 2, 3, 0 },

  { 29, TARGET_STRING("Shared Memory Pack "),
    TARGET_STRING("P3"), 2, 0, 0 },

  { 30, TARGET_STRING("Shared Memory Pack "),
    TARGET_STRING("P4"), 2, 0, 0 },

  { 31, TARGET_STRING("Shared Memory Unpack "),
    TARGET_STRING("P1"), 2, 4, 0 },

  { 32, TARGET_STRING("Shared Memory Unpack "),
    TARGET_STRING("P2"), 2, 5, 0 },

  { 33, TARGET_STRING("Shared Memory Unpack "),
    TARGET_STRING("P3"), 2, 4, 0 },

  { 34, TARGET_STRING("Shared Memory Unpack "),
    TARGET_STRING("P4"), 2, 0, 0 },

  { 35, TARGET_STRING("Write "),
    TARGET_STRING("P1"), 2, 0, 0 },

  { 36, TARGET_STRING("Write "),
    TARGET_STRING("P2"), 2, 0, 0 },

  { 37, TARGET_STRING("Write "),
    TARGET_STRING("P3"), 2, 0, 0 },

  { 38, TARGET_STRING("Write "),
    TARGET_STRING("P4"), 2, 0, 0 },

  { 39, TARGET_STRING("Write "),
    TARGET_STRING("P5"), 2, 0, 0 },

  { 40, TARGET_STRING("Signal Generator"),
    TARGET_STRING("Amplitude"), 2, 0, 0 },

  { 41, TARGET_STRING("Signal Generator"),
    TARGET_STRING("Frequency"), 2, 0, 0 },

  {
    0, (NULL), (NULL), 0, 0, 0
  }
};

/* Tunable variable parameters */
static const rtwCAPI_ModelParameters rtModelParameters[] = {
  /* addrMapIndex, varName, dataTypeIndex, dimIndex, fixPtIndex */
  { 0, (NULL), 0, 0, 0 }
};

#ifndef HOST_CAPI_BUILD

/* Declare Data Addresses statically */
static void* rtDataAddrMap[] = {
  &com_FT60_2020a_B.CastToSingle,      /* 0: Signal */
  &com_FT60_2020a_B.CastToSingle1,     /* 1: Signal */
  &com_FT60_2020a_B.CastToSingle2,     /* 2: Signal */
  &com_FT60_2020a_B.CastToSingle3,     /* 3: Signal */
  &com_FT60_2020a_B.CastToSingle4,     /* 4: Signal */
  &com_FT60_2020a_B.CastToSingle5,     /* 5: Signal */
  &com_FT60_2020a_B.CastToSingle6,     /* 6: Signal */
  &com_FT60_2020a_B.Read[0],           /* 7: Signal */
  &com_FT60_2020a_B.SharedMemoryPack,  /* 8: Signal */
  &com_FT60_2020a_B.SharedMemoryUnpack_o1,/* 9: Signal */
  &com_FT60_2020a_B.SharedMemoryUnpack_o2,/* 10: Signal */
  &com_FT60_2020a_B.SharedMemoryUnpack_o3,/* 11: Signal */
  &com_FT60_2020a_B.SharedMemoryUnpack_o4,/* 12: Signal */
  &com_FT60_2020a_B.SharedMemoryUnpack_o5,/* 13: Signal */
  &com_FT60_2020a_B.SharedMemoryUnpack_o6,/* 14: Signal */
  &com_FT60_2020a_B.SignalGenerator,   /* 15: Signal */
  &com_FT60_2020a_P.Read_P1,           /* 16: Block Parameter */
  &com_FT60_2020a_P.Read_P2,           /* 17: Block Parameter */
  &com_FT60_2020a_P.Read_P3,           /* 18: Block Parameter */
  &com_FT60_2020a_P.Read_P4,           /* 19: Block Parameter */
  &com_FT60_2020a_P.Read_P5,           /* 20: Block Parameter */
  &com_FT60_2020a_P.Setup_P1,          /* 21: Block Parameter */
  &com_FT60_2020a_P.Setup_P2,          /* 22: Block Parameter */
  &com_FT60_2020a_P.Setup_P3[0],       /* 23: Block Parameter */
  &com_FT60_2020a_P.Setup_P4,          /* 24: Block Parameter */
  &com_FT60_2020a_P.Setup_P5,          /* 25: Block Parameter */
  &com_FT60_2020a_P.Setup_P6,          /* 26: Block Parameter */
  &com_FT60_2020a_P.SharedMemoryPack_P1,/* 27: Block Parameter */
  &com_FT60_2020a_P.SharedMemoryPack_P2[0],/* 28: Block Parameter */
  &com_FT60_2020a_P.SharedMemoryPack_P3,/* 29: Block Parameter */
  &com_FT60_2020a_P.SharedMemoryPack_P4,/* 30: Block Parameter */
  &com_FT60_2020a_P.SharedMemoryUnpack_P1[0],/* 31: Block Parameter */
  &com_FT60_2020a_P.SharedMemoryUnpack_P2[0],/* 32: Block Parameter */
  &com_FT60_2020a_P.SharedMemoryUnpack_P3[0],/* 33: Block Parameter */
  &com_FT60_2020a_P.SharedMemoryUnpack_P4,/* 34: Block Parameter */
  &com_FT60_2020a_P.Write_P1,          /* 35: Block Parameter */
  &com_FT60_2020a_P.Write_P2,          /* 36: Block Parameter */
  &com_FT60_2020a_P.Write_P3,          /* 37: Block Parameter */
  &com_FT60_2020a_P.Write_P4,          /* 38: Block Parameter */
  &com_FT60_2020a_P.Write_P5,          /* 39: Block Parameter */
  &com_FT60_2020a_P.SignalGenerator_Amplitude,/* 40: Block Parameter */
  &com_FT60_2020a_P.SignalGenerator_Frequency,/* 41: Block Parameter */
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
  { "float", "real32_T", 0, 0, sizeof(real32_T), SS_SINGLE, 0, 0, 0 },

  { "unsigned int", "uint32_T", 0, 0, sizeof(uint32_T), SS_UINT32, 0, 0, 0 },

  { "double", "real_T", 0, 0, sizeof(real_T), SS_DOUBLE, 0, 0, 0 }
};

#ifdef HOST_CAPI_BUILD
#undef sizeof
#endif

/* Structure Element Map - use elemMapIndex to access this structure */
static TARGET_CONST rtwCAPI_ElementMap rtElementMap[] = {
  /* elementName, elementOffset, dataTypeIndex, dimIndex, fxpIndex */
  { (NULL), 0, 0, 0, 0 },
};

/* Dimension Map - use dimensionMapIndex to access elements of ths structure*/
static const rtwCAPI_DimensionMap rtDimensionMap[] = {
  /* dataOrientation, dimArrayIndex, numDims, vardimsIndex */
  { rtwCAPI_SCALAR, 0, 2, 0 },

  { rtwCAPI_VECTOR, 2, 2, 0 },

  { rtwCAPI_VECTOR, 4, 2, 0 },

  { rtwCAPI_VECTOR, 6, 2, 0 },

  { rtwCAPI_VECTOR, 8, 2, 0 },

  { rtwCAPI_MATRIX_COL_MAJOR, 10, 2, 0 }
};

/* Dimension Array- use dimArrayIndex to access elements of this array */
static const uint_T rtDimensionArray[] = {
  1,                                   /* 0 */
  1,                                   /* 1 */
  6,                                   /* 2 */
  1,                                   /* 3 */
  1,                                   /* 4 */
  15,                                  /* 5 */
  2,                                   /* 6 */
  1,                                   /* 7 */
  1,                                   /* 8 */
  6,                                   /* 9 */
  2,                                   /* 10 */
  6                                    /* 11 */
};

/* C-API stores floating point values in an array. The elements of this  *
 * are unique. This ensures that values which are shared across the model*
 * are stored in the most efficient way. These values are referenced by  *
 *           - rtwCAPI_FixPtMap.fracSlopePtr,                            *
 *           - rtwCAPI_FixPtMap.biasPtr,                                 *
 *           - rtwCAPI_SampleTimeMap.samplePeriodPtr,                    *
 *           - rtwCAPI_SampleTimeMap.sampleOffsetPtr                     */
static const real_T rtcapiStoredFloats[] = {
  0.001, 0.0
};

/* Fixed Point Map */
static const rtwCAPI_FixPtMap rtFixPtMap[] = {
  /* fracSlopePtr, biasPtr, scaleType, wordLength, exponent, isSigned */
  { (NULL), (NULL), rtwCAPI_FIX_RESERVED, 0, 0, 0 },
};

/* Sample Time Map - use sTimeIndex to access elements of ths structure */
static const rtwCAPI_SampleTimeMap rtSampleTimeMap[] = {
  /* samplePeriodPtr, sampleOffsetPtr, tid, samplingMode */
  { (const void *) &rtcapiStoredFloats[0], (const void *) &rtcapiStoredFloats[1],
    1, 0 },

  { (const void *) &rtcapiStoredFloats[1], (const void *) &rtcapiStoredFloats[1],
    0, 0 }
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
  { rtBlockSignals, 16,
    (NULL), 0,
    (NULL), 0 },

  { rtBlockParameters, 26,
    rtModelParameters, 0 },

  { (NULL), 0 },

  { rtDataTypeMap, rtDimensionMap, rtFixPtMap,
    rtElementMap, rtSampleTimeMap, rtDimensionArray },
  "float",

  { 4222836820U,
    139808716U,
    293787312U,
    3965706906U },
  (NULL), 0,
  0
};

/* Function to get C API Model Mapping Static Info */
const rtwCAPI_ModelMappingStaticInfo*
  com_FT60_2020a_GetCAPIStaticMap(void)
{
  return &mmiStatic;
}

/* Cache pointers into DataMapInfo substructure of RTModel */
#ifndef HOST_CAPI_BUILD

void com_FT60_2020a_InitializeDataMapInfo(void)
{
  /* Set C-API version */
  rtwCAPI_SetVersion(com_FT60_2020a_M->DataMapInfo.mmi, 1);

  /* Cache static C-API data into the Real-time Model Data structure */
  rtwCAPI_SetStaticMap(com_FT60_2020a_M->DataMapInfo.mmi, &mmiStatic);

  /* Cache static C-API logging data into the Real-time Model Data structure */
  rtwCAPI_SetLoggingStaticMap(com_FT60_2020a_M->DataMapInfo.mmi, (NULL));

  /* Cache C-API Data Addresses into the Real-Time Model Data structure */
  rtwCAPI_SetDataAddressMap(com_FT60_2020a_M->DataMapInfo.mmi, rtDataAddrMap);

  /* Cache C-API Data Run-Time Dimension Buffer Addresses into the Real-Time Model Data structure */
  rtwCAPI_SetVarDimsAddressMap(com_FT60_2020a_M->DataMapInfo.mmi,
    rtVarDimsAddrMap);

  /* Cache C-API rtp Address and size  into the Real-Time Model Data structure */
  com_FT60_2020a_M->DataMapInfo.mmi.InstanceMap.rtpAddress = rtmGetDefaultParam
    (com_FT60_2020a_M);
  com_FT60_2020a_M->DataMapInfo.mmi.staticMap->rtpSize = sizeof
    (P_com_FT60_2020a_T);

  /* Cache the instance C-API logging pointer */
  rtwCAPI_SetInstanceLoggingInfo(com_FT60_2020a_M->DataMapInfo.mmi, (NULL));

  /* Set reference to submodels */
  rtwCAPI_SetChildMMIArray(com_FT60_2020a_M->DataMapInfo.mmi, (NULL));
  rtwCAPI_SetChildMMIArrayLen(com_FT60_2020a_M->DataMapInfo.mmi, 0);
}

#else                                  /* HOST_CAPI_BUILD */
#ifdef __cplusplus

extern "C" {

#endif

  void com_FT60_2020a_host_InitializeDataMapInfo
    (com_FT60_2020a_host_DataMapInfo_T *dataMap, const char *path)
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

/* EOF: com_FT60_2020a_capi.c */
