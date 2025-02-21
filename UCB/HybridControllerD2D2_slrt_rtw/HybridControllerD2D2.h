/*
 * HybridControllerD2D2.h
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

#ifndef RTW_HEADER_HybridControllerD2D2_h_
#define RTW_HEADER_HybridControllerD2D2_h_
#include <stddef.h>
#include <string.h>
#include <math.h>
#include "rtw_modelmap.h"
#ifndef HybridControllerD2D2_COMMON_INCLUDES_
# define HybridControllerD2D2_COMMON_INCLUDES_
#include <xpcimports.h>
#include <xpcdatatypes.h>
#include <xpctarget.h>
#include "rtwtypes.h"
#include "zero_crossing_types.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "rt_logging.h"
#include "xpcimports.h"
#endif                               /* HybridControllerD2D2_COMMON_INCLUDES_ */

#include "HybridControllerD2D2_types.h"

/* Shared type includes */
#include "multiword_types.h"
#include "rtGetNaN.h"
#include "rt_nonfinite.h"
#include "rt_defines.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetBlockIO
# define rtmGetBlockIO(rtm)            ((rtm)->blockIO)
#endif

#ifndef rtmSetBlockIO
# define rtmSetBlockIO(rtm, val)       ((rtm)->blockIO = (val))
#endif

#ifndef rtmGetChecksums
# define rtmGetChecksums(rtm)          ((rtm)->Sizes.checksums)
#endif

#ifndef rtmSetChecksums
# define rtmSetChecksums(rtm, val)     ((rtm)->Sizes.checksums = (val))
#endif

#ifndef rtmGetConstBlockIO
# define rtmGetConstBlockIO(rtm)       ((rtm)->constBlockIO)
#endif

#ifndef rtmSetConstBlockIO
# define rtmSetConstBlockIO(rtm, val)  ((rtm)->constBlockIO = (val))
#endif

#ifndef rtmGetContStateDisabled
# define rtmGetContStateDisabled(rtm)  ((rtm)->contStateDisabled)
#endif

#ifndef rtmSetContStateDisabled
# define rtmSetContStateDisabled(rtm, val) ((rtm)->contStateDisabled = (val))
#endif

#ifndef rtmGetContStates
# define rtmGetContStates(rtm)         ((rtm)->contStates)
#endif

#ifndef rtmSetContStates
# define rtmSetContStates(rtm, val)    ((rtm)->contStates = (val))
#endif

#ifndef rtmGetContTimeOutputInconsistentWithStateAtMajorStepFlag
# define rtmGetContTimeOutputInconsistentWithStateAtMajorStepFlag(rtm) ((rtm)->CTOutputIncnstWithState)
#endif

#ifndef rtmSetContTimeOutputInconsistentWithStateAtMajorStepFlag
# define rtmSetContTimeOutputInconsistentWithStateAtMajorStepFlag(rtm, val) ((rtm)->CTOutputIncnstWithState = (val))
#endif

#ifndef rtmGetCtrlRateMdlRefTiming
# define rtmGetCtrlRateMdlRefTiming(rtm) ()
#endif

#ifndef rtmSetCtrlRateMdlRefTiming
# define rtmSetCtrlRateMdlRefTiming(rtm, val) ()
#endif

#ifndef rtmGetCtrlRateMdlRefTimingPtr
# define rtmGetCtrlRateMdlRefTimingPtr(rtm) ()
#endif

#ifndef rtmSetCtrlRateMdlRefTimingPtr
# define rtmSetCtrlRateMdlRefTimingPtr(rtm, val) ()
#endif

#ifndef rtmGetCtrlRateNumTicksToNextHit
# define rtmGetCtrlRateNumTicksToNextHit(rtm) ()
#endif

#ifndef rtmSetCtrlRateNumTicksToNextHit
# define rtmSetCtrlRateNumTicksToNextHit(rtm, val) ()
#endif

#ifndef rtmGetDataMapInfo
# define rtmGetDataMapInfo(rtm)        ((rtm)->DataMapInfo)
#endif

#ifndef rtmSetDataMapInfo
# define rtmSetDataMapInfo(rtm, val)   ((rtm)->DataMapInfo = (val))
#endif

#ifndef rtmGetDefaultParam
# define rtmGetDefaultParam(rtm)       ((rtm)->defaultParam)
#endif

#ifndef rtmSetDefaultParam
# define rtmSetDefaultParam(rtm, val)  ((rtm)->defaultParam = (val))
#endif

#ifndef rtmGetDerivCacheNeedsReset
# define rtmGetDerivCacheNeedsReset(rtm) ((rtm)->derivCacheNeedsReset)
#endif

#ifndef rtmSetDerivCacheNeedsReset
# define rtmSetDerivCacheNeedsReset(rtm, val) ((rtm)->derivCacheNeedsReset = (val))
#endif

#ifndef rtmGetDirectFeedThrough
# define rtmGetDirectFeedThrough(rtm)  ((rtm)->Sizes.sysDirFeedThru)
#endif

#ifndef rtmSetDirectFeedThrough
# define rtmSetDirectFeedThrough(rtm, val) ((rtm)->Sizes.sysDirFeedThru = (val))
#endif

#ifndef rtmGetErrorStatusFlag
# define rtmGetErrorStatusFlag(rtm)    ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatusFlag
# define rtmSetErrorStatusFlag(rtm, val) ((rtm)->errorStatus = (val))
#endif

#ifndef rtmGetFinalTime
# define rtmGetFinalTime(rtm)          ((rtm)->Timing.tFinal)
#endif

#ifndef rtmSetFinalTime
# define rtmSetFinalTime(rtm, val)     ((rtm)->Timing.tFinal = (val))
#endif

#ifndef rtmGetFirstInitCondFlag
# define rtmGetFirstInitCondFlag(rtm)  ()
#endif

#ifndef rtmSetFirstInitCondFlag
# define rtmSetFirstInitCondFlag(rtm, val) ()
#endif

#ifndef rtmGetIntgData
# define rtmGetIntgData(rtm)           ()
#endif

#ifndef rtmSetIntgData
# define rtmSetIntgData(rtm, val)      ()
#endif

#ifndef rtmGetMdlRefGlobalTID
# define rtmGetMdlRefGlobalTID(rtm)    ()
#endif

#ifndef rtmSetMdlRefGlobalTID
# define rtmSetMdlRefGlobalTID(rtm, val) ()
#endif

#ifndef rtmGetMdlRefTriggerTID
# define rtmGetMdlRefTriggerTID(rtm)   ()
#endif

#ifndef rtmSetMdlRefTriggerTID
# define rtmSetMdlRefTriggerTID(rtm, val) ()
#endif

#ifndef rtmGetModelMappingInfo
# define rtmGetModelMappingInfo(rtm)   ((rtm)->SpecialInfo.mappingInfo)
#endif

#ifndef rtmSetModelMappingInfo
# define rtmSetModelMappingInfo(rtm, val) ((rtm)->SpecialInfo.mappingInfo = (val))
#endif

#ifndef rtmGetModelName
# define rtmGetModelName(rtm)          ((rtm)->modelName)
#endif

#ifndef rtmSetModelName
# define rtmSetModelName(rtm, val)     ((rtm)->modelName = (val))
#endif

#ifndef rtmGetNonInlinedSFcns
# define rtmGetNonInlinedSFcns(rtm)    ((rtm)->NonInlinedSFcns)
#endif

#ifndef rtmSetNonInlinedSFcns
# define rtmSetNonInlinedSFcns(rtm, val) ((rtm)->NonInlinedSFcns = (val))
#endif

#ifndef rtmGetNumBlockIO
# define rtmGetNumBlockIO(rtm)         ((rtm)->Sizes.numBlockIO)
#endif

#ifndef rtmSetNumBlockIO
# define rtmSetNumBlockIO(rtm, val)    ((rtm)->Sizes.numBlockIO = (val))
#endif

#ifndef rtmGetNumBlockParams
# define rtmGetNumBlockParams(rtm)     ((rtm)->Sizes.numBlockPrms)
#endif

#ifndef rtmSetNumBlockParams
# define rtmSetNumBlockParams(rtm, val) ((rtm)->Sizes.numBlockPrms = (val))
#endif

#ifndef rtmGetNumBlocks
# define rtmGetNumBlocks(rtm)          ((rtm)->Sizes.numBlocks)
#endif

#ifndef rtmSetNumBlocks
# define rtmSetNumBlocks(rtm, val)     ((rtm)->Sizes.numBlocks = (val))
#endif

#ifndef rtmGetNumContStates
# define rtmGetNumContStates(rtm)      ((rtm)->Sizes.numContStates)
#endif

#ifndef rtmSetNumContStates
# define rtmSetNumContStates(rtm, val) ((rtm)->Sizes.numContStates = (val))
#endif

#ifndef rtmGetNumDWork
# define rtmGetNumDWork(rtm)           ((rtm)->Sizes.numDwork)
#endif

#ifndef rtmSetNumDWork
# define rtmSetNumDWork(rtm, val)      ((rtm)->Sizes.numDwork = (val))
#endif

#ifndef rtmGetNumInputPorts
# define rtmGetNumInputPorts(rtm)      ((rtm)->Sizes.numIports)
#endif

#ifndef rtmSetNumInputPorts
# define rtmSetNumInputPorts(rtm, val) ((rtm)->Sizes.numIports = (val))
#endif

#ifndef rtmGetNumNonSampledZCs
# define rtmGetNumNonSampledZCs(rtm)   ((rtm)->Sizes.numNonSampZCs)
#endif

#ifndef rtmSetNumNonSampledZCs
# define rtmSetNumNonSampledZCs(rtm, val) ((rtm)->Sizes.numNonSampZCs = (val))
#endif

#ifndef rtmGetNumOutputPorts
# define rtmGetNumOutputPorts(rtm)     ((rtm)->Sizes.numOports)
#endif

#ifndef rtmSetNumOutputPorts
# define rtmSetNumOutputPorts(rtm, val) ((rtm)->Sizes.numOports = (val))
#endif

#ifndef rtmGetNumPeriodicContStates
# define rtmGetNumPeriodicContStates(rtm) ((rtm)->Sizes.numPeriodicContStates)
#endif

#ifndef rtmSetNumPeriodicContStates
# define rtmSetNumPeriodicContStates(rtm, val) ((rtm)->Sizes.numPeriodicContStates = (val))
#endif

#ifndef rtmGetNumSFcnParams
# define rtmGetNumSFcnParams(rtm)      ((rtm)->Sizes.numSFcnPrms)
#endif

#ifndef rtmSetNumSFcnParams
# define rtmSetNumSFcnParams(rtm, val) ((rtm)->Sizes.numSFcnPrms = (val))
#endif

#ifndef rtmGetNumSFunctions
# define rtmGetNumSFunctions(rtm)      ((rtm)->Sizes.numSFcns)
#endif

#ifndef rtmSetNumSFunctions
# define rtmSetNumSFunctions(rtm, val) ((rtm)->Sizes.numSFcns = (val))
#endif

#ifndef rtmGetNumSampleTimes
# define rtmGetNumSampleTimes(rtm)     ((rtm)->Sizes.numSampTimes)
#endif

#ifndef rtmSetNumSampleTimes
# define rtmSetNumSampleTimes(rtm, val) ((rtm)->Sizes.numSampTimes = (val))
#endif

#ifndef rtmGetNumU
# define rtmGetNumU(rtm)               ((rtm)->Sizes.numU)
#endif

#ifndef rtmSetNumU
# define rtmSetNumU(rtm, val)          ((rtm)->Sizes.numU = (val))
#endif

#ifndef rtmGetNumY
# define rtmGetNumY(rtm)               ((rtm)->Sizes.numY)
#endif

#ifndef rtmSetNumY
# define rtmSetNumY(rtm, val)          ((rtm)->Sizes.numY = (val))
#endif

#ifndef rtmGetOdeF
# define rtmGetOdeF(rtm)               ()
#endif

#ifndef rtmSetOdeF
# define rtmSetOdeF(rtm, val)          ()
#endif

#ifndef rtmGetOdeY
# define rtmGetOdeY(rtm)               ()
#endif

#ifndef rtmSetOdeY
# define rtmSetOdeY(rtm, val)          ()
#endif

#ifndef rtmGetOffsetTimeArray
# define rtmGetOffsetTimeArray(rtm)    ((rtm)->Timing.offsetTimesArray)
#endif

#ifndef rtmSetOffsetTimeArray
# define rtmSetOffsetTimeArray(rtm, val) ((rtm)->Timing.offsetTimesArray = (val))
#endif

#ifndef rtmGetOffsetTimePtr
# define rtmGetOffsetTimePtr(rtm)      ((rtm)->Timing.offsetTimes)
#endif

#ifndef rtmSetOffsetTimePtr
# define rtmSetOffsetTimePtr(rtm, val) ((rtm)->Timing.offsetTimes = (val))
#endif

#ifndef rtmGetOptions
# define rtmGetOptions(rtm)            ((rtm)->Sizes.options)
#endif

#ifndef rtmSetOptions
# define rtmSetOptions(rtm, val)       ((rtm)->Sizes.options = (val))
#endif

#ifndef rtmGetParamIsMalloced
# define rtmGetParamIsMalloced(rtm)    ()
#endif

#ifndef rtmSetParamIsMalloced
# define rtmSetParamIsMalloced(rtm, val) ()
#endif

#ifndef rtmGetPath
# define rtmGetPath(rtm)               ((rtm)->path)
#endif

#ifndef rtmSetPath
# define rtmSetPath(rtm, val)          ((rtm)->path = (val))
#endif

#ifndef rtmGetPerTaskSampleHits
# define rtmGetPerTaskSampleHits(rtm)  ()
#endif

#ifndef rtmSetPerTaskSampleHits
# define rtmSetPerTaskSampleHits(rtm, val) ()
#endif

#ifndef rtmGetPerTaskSampleHitsArray
# define rtmGetPerTaskSampleHitsArray(rtm) ((rtm)->Timing.perTaskSampleHitsArray)
#endif

#ifndef rtmSetPerTaskSampleHitsArray
# define rtmSetPerTaskSampleHitsArray(rtm, val) ((rtm)->Timing.perTaskSampleHitsArray = (val))
#endif

#ifndef rtmGetPerTaskSampleHitsPtr
# define rtmGetPerTaskSampleHitsPtr(rtm) ((rtm)->Timing.perTaskSampleHits)
#endif

#ifndef rtmSetPerTaskSampleHitsPtr
# define rtmSetPerTaskSampleHitsPtr(rtm, val) ((rtm)->Timing.perTaskSampleHits = (val))
#endif

#ifndef rtmGetPeriodicContStateIndices
# define rtmGetPeriodicContStateIndices(rtm) ((rtm)->periodicContStateIndices)
#endif

#ifndef rtmSetPeriodicContStateIndices
# define rtmSetPeriodicContStateIndices(rtm, val) ((rtm)->periodicContStateIndices = (val))
#endif

#ifndef rtmGetPeriodicContStateRanges
# define rtmGetPeriodicContStateRanges(rtm) ((rtm)->periodicContStateRanges)
#endif

#ifndef rtmSetPeriodicContStateRanges
# define rtmSetPeriodicContStateRanges(rtm, val) ((rtm)->periodicContStateRanges = (val))
#endif

#ifndef rtmGetPrevZCSigState
# define rtmGetPrevZCSigState(rtm)     ((rtm)->prevZCSigState)
#endif

#ifndef rtmSetPrevZCSigState
# define rtmSetPrevZCSigState(rtm, val) ((rtm)->prevZCSigState = (val))
#endif

#ifndef rtmGetRTWExtModeInfo
# define rtmGetRTWExtModeInfo(rtm)     ((rtm)->extModeInfo)
#endif

#ifndef rtmSetRTWExtModeInfo
# define rtmSetRTWExtModeInfo(rtm, val) ((rtm)->extModeInfo = (val))
#endif

#ifndef rtmGetRTWGeneratedSFcn
# define rtmGetRTWGeneratedSFcn(rtm)   ((rtm)->Sizes.rtwGenSfcn)
#endif

#ifndef rtmSetRTWGeneratedSFcn
# define rtmSetRTWGeneratedSFcn(rtm, val) ((rtm)->Sizes.rtwGenSfcn = (val))
#endif

#ifndef rtmGetRTWLogInfo
# define rtmGetRTWLogInfo(rtm)         ((rtm)->rtwLogInfo)
#endif

#ifndef rtmSetRTWLogInfo
# define rtmSetRTWLogInfo(rtm, val)    ((rtm)->rtwLogInfo = (val))
#endif

#ifndef rtmGetRTWRTModelMethodsInfo
# define rtmGetRTWRTModelMethodsInfo(rtm) ()
#endif

#ifndef rtmSetRTWRTModelMethodsInfo
# define rtmSetRTWRTModelMethodsInfo(rtm, val) ()
#endif

#ifndef rtmGetRTWSfcnInfo
# define rtmGetRTWSfcnInfo(rtm)        ((rtm)->sfcnInfo)
#endif

#ifndef rtmSetRTWSfcnInfo
# define rtmSetRTWSfcnInfo(rtm, val)   ((rtm)->sfcnInfo = (val))
#endif

#ifndef rtmGetRTWSolverInfo
# define rtmGetRTWSolverInfo(rtm)      ((rtm)->solverInfo)
#endif

#ifndef rtmSetRTWSolverInfo
# define rtmSetRTWSolverInfo(rtm, val) ((rtm)->solverInfo = (val))
#endif

#ifndef rtmGetRTWSolverInfoPtr
# define rtmGetRTWSolverInfoPtr(rtm)   ((rtm)->solverInfoPtr)
#endif

#ifndef rtmSetRTWSolverInfoPtr
# define rtmSetRTWSolverInfoPtr(rtm, val) ((rtm)->solverInfoPtr = (val))
#endif

#ifndef rtmGetReservedForXPC
# define rtmGetReservedForXPC(rtm)     ((rtm)->SpecialInfo.xpcData)
#endif

#ifndef rtmSetReservedForXPC
# define rtmSetReservedForXPC(rtm, val) ((rtm)->SpecialInfo.xpcData = (val))
#endif

#ifndef rtmGetRootDWork
# define rtmGetRootDWork(rtm)          ((rtm)->dwork)
#endif

#ifndef rtmSetRootDWork
# define rtmSetRootDWork(rtm, val)     ((rtm)->dwork = (val))
#endif

#ifndef rtmGetSFunctions
# define rtmGetSFunctions(rtm)         ((rtm)->childSfunctions)
#endif

#ifndef rtmSetSFunctions
# define rtmSetSFunctions(rtm, val)    ((rtm)->childSfunctions = (val))
#endif

#ifndef rtmGetSampleHitArray
# define rtmGetSampleHitArray(rtm)     ((rtm)->Timing.sampleHitArray)
#endif

#ifndef rtmSetSampleHitArray
# define rtmSetSampleHitArray(rtm, val) ((rtm)->Timing.sampleHitArray = (val))
#endif

#ifndef rtmGetSampleHitPtr
# define rtmGetSampleHitPtr(rtm)       ((rtm)->Timing.sampleHits)
#endif

#ifndef rtmSetSampleHitPtr
# define rtmSetSampleHitPtr(rtm, val)  ((rtm)->Timing.sampleHits = (val))
#endif

#ifndef rtmGetSampleTimeArray
# define rtmGetSampleTimeArray(rtm)    ((rtm)->Timing.sampleTimesArray)
#endif

#ifndef rtmSetSampleTimeArray
# define rtmSetSampleTimeArray(rtm, val) ((rtm)->Timing.sampleTimesArray = (val))
#endif

#ifndef rtmGetSampleTimePtr
# define rtmGetSampleTimePtr(rtm)      ((rtm)->Timing.sampleTimes)
#endif

#ifndef rtmSetSampleTimePtr
# define rtmSetSampleTimePtr(rtm, val) ((rtm)->Timing.sampleTimes = (val))
#endif

#ifndef rtmGetSampleTimeTaskIDArray
# define rtmGetSampleTimeTaskIDArray(rtm) ((rtm)->Timing.sampleTimeTaskIDArray)
#endif

#ifndef rtmSetSampleTimeTaskIDArray
# define rtmSetSampleTimeTaskIDArray(rtm, val) ((rtm)->Timing.sampleTimeTaskIDArray = (val))
#endif

#ifndef rtmGetSampleTimeTaskIDPtr
# define rtmGetSampleTimeTaskIDPtr(rtm) ((rtm)->Timing.sampleTimeTaskIDPtr)
#endif

#ifndef rtmSetSampleTimeTaskIDPtr
# define rtmSetSampleTimeTaskIDPtr(rtm, val) ((rtm)->Timing.sampleTimeTaskIDPtr = (val))
#endif

#ifndef rtmGetSelf
# define rtmGetSelf(rtm)               ()
#endif

#ifndef rtmSetSelf
# define rtmSetSelf(rtm, val)          ()
#endif

#ifndef rtmGetSimMode
# define rtmGetSimMode(rtm)            ((rtm)->simMode)
#endif

#ifndef rtmSetSimMode
# define rtmSetSimMode(rtm, val)       ((rtm)->simMode = (val))
#endif

#ifndef rtmGetSimTimeStep
# define rtmGetSimTimeStep(rtm)        ((rtm)->Timing.simTimeStep)
#endif

#ifndef rtmSetSimTimeStep
# define rtmSetSimTimeStep(rtm, val)   ((rtm)->Timing.simTimeStep = (val))
#endif

#ifndef rtmGetStartTime
# define rtmGetStartTime(rtm)          ((rtm)->Timing.tStart)
#endif

#ifndef rtmSetStartTime
# define rtmSetStartTime(rtm, val)     ((rtm)->Timing.tStart = (val))
#endif

#ifndef rtmGetStepSize
# define rtmGetStepSize(rtm)           ((rtm)->Timing.stepSize)
#endif

#ifndef rtmSetStepSize
# define rtmSetStepSize(rtm, val)      ((rtm)->Timing.stepSize = (val))
#endif

#ifndef rtmGetStopRequestedFlag
# define rtmGetStopRequestedFlag(rtm)  ((rtm)->Timing.stopRequestedFlag)
#endif

#ifndef rtmSetStopRequestedFlag
# define rtmSetStopRequestedFlag(rtm, val) ((rtm)->Timing.stopRequestedFlag = (val))
#endif

#ifndef rtmGetTaskCounters
# define rtmGetTaskCounters(rtm)       ()
#endif

#ifndef rtmSetTaskCounters
# define rtmSetTaskCounters(rtm, val)  ()
#endif

#ifndef rtmGetTaskTimeArray
# define rtmGetTaskTimeArray(rtm)      ((rtm)->Timing.tArray)
#endif

#ifndef rtmSetTaskTimeArray
# define rtmSetTaskTimeArray(rtm, val) ((rtm)->Timing.tArray = (val))
#endif

#ifndef rtmGetTimePtr
# define rtmGetTimePtr(rtm)            ((rtm)->Timing.t)
#endif

#ifndef rtmSetTimePtr
# define rtmSetTimePtr(rtm, val)       ((rtm)->Timing.t = (val))
#endif

#ifndef rtmGetTimingData
# define rtmGetTimingData(rtm)         ((rtm)->Timing.timingData)
#endif

#ifndef rtmSetTimingData
# define rtmSetTimingData(rtm, val)    ((rtm)->Timing.timingData = (val))
#endif

#ifndef rtmGetU
# define rtmGetU(rtm)                  ((rtm)->inputs)
#endif

#ifndef rtmSetU
# define rtmSetU(rtm, val)             ((rtm)->inputs = (val))
#endif

#ifndef rtmGetVarNextHitTimesListPtr
# define rtmGetVarNextHitTimesListPtr(rtm) ((rtm)->Timing.varNextHitTimesList)
#endif

#ifndef rtmSetVarNextHitTimesListPtr
# define rtmSetVarNextHitTimesListPtr(rtm, val) ((rtm)->Timing.varNextHitTimesList = (val))
#endif

#ifndef rtmGetY
# define rtmGetY(rtm)                  ((rtm)->outputs)
#endif

#ifndef rtmSetY
# define rtmSetY(rtm, val)             ((rtm)->outputs = (val))
#endif

#ifndef rtmGetZCCacheNeedsReset
# define rtmGetZCCacheNeedsReset(rtm)  ((rtm)->zCCacheNeedsReset)
#endif

#ifndef rtmSetZCCacheNeedsReset
# define rtmSetZCCacheNeedsReset(rtm, val) ((rtm)->zCCacheNeedsReset = (val))
#endif

#ifndef rtmGetZCSignalValues
# define rtmGetZCSignalValues(rtm)     ((rtm)->zcSignalValues)
#endif

#ifndef rtmSetZCSignalValues
# define rtmSetZCSignalValues(rtm, val) ((rtm)->zcSignalValues = (val))
#endif

#ifndef rtmGet_TimeOfLastOutput
# define rtmGet_TimeOfLastOutput(rtm)  ((rtm)->Timing.timeOfLastOutput)
#endif

#ifndef rtmSet_TimeOfLastOutput
# define rtmSet_TimeOfLastOutput(rtm, val) ((rtm)->Timing.timeOfLastOutput = (val))
#endif

#ifndef rtmGetdX
# define rtmGetdX(rtm)                 ((rtm)->derivs)
#endif

#ifndef rtmSetdX
# define rtmSetdX(rtm, val)            ((rtm)->derivs = (val))
#endif

#ifndef rtmGettimingBridge
# define rtmGettimingBridge(rtm)       ()
#endif

#ifndef rtmSettimingBridge
# define rtmSettimingBridge(rtm, val)  ()
#endif

#ifndef rtmGetChecksumVal
# define rtmGetChecksumVal(rtm, idx)   ((rtm)->Sizes.checksums[idx])
#endif

#ifndef rtmSetChecksumVal
# define rtmSetChecksumVal(rtm, idx, val) ((rtm)->Sizes.checksums[idx] = (val))
#endif

#ifndef rtmGetDWork
# define rtmGetDWork(rtm, idx)         ((rtm)->dwork[idx])
#endif

#ifndef rtmSetDWork
# define rtmSetDWork(rtm, idx, val)    ((rtm)->dwork[idx] = (val))
#endif

#ifndef rtmGetOffsetTime
# define rtmGetOffsetTime(rtm, idx)    ((rtm)->Timing.offsetTimes[idx])
#endif

#ifndef rtmSetOffsetTime
# define rtmSetOffsetTime(rtm, idx, val) ((rtm)->Timing.offsetTimes[idx] = (val))
#endif

#ifndef rtmGetSFunction
# define rtmGetSFunction(rtm, idx)     ((rtm)->childSfunctions[idx])
#endif

#ifndef rtmSetSFunction
# define rtmSetSFunction(rtm, idx, val) ((rtm)->childSfunctions[idx] = (val))
#endif

#ifndef rtmGetSampleTime
# define rtmGetSampleTime(rtm, idx)    ((rtm)->Timing.sampleTimes[idx])
#endif

#ifndef rtmSetSampleTime
# define rtmSetSampleTime(rtm, idx, val) ((rtm)->Timing.sampleTimes[idx] = (val))
#endif

#ifndef rtmGetSampleTimeTaskID
# define rtmGetSampleTimeTaskID(rtm, idx) ((rtm)->Timing.sampleTimeTaskIDPtr[idx])
#endif

#ifndef rtmSetSampleTimeTaskID
# define rtmSetSampleTimeTaskID(rtm, idx, val) ((rtm)->Timing.sampleTimeTaskIDPtr[idx] = (val))
#endif

#ifndef rtmGetVarNextHitTimeList
# define rtmGetVarNextHitTimeList(rtm, idx) ((rtm)->Timing.varNextHitTimesList[idx])
#endif

#ifndef rtmSetVarNextHitTimeList
# define rtmSetVarNextHitTimeList(rtm, idx, val) ((rtm)->Timing.varNextHitTimesList[idx] = (val))
#endif

#ifndef rtmIsContinuousTask
# define rtmIsContinuousTask(rtm, tid) 0
#endif

#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

#ifndef rtmIsSampleHit
# define rtmIsSampleHit(rtm, sti, tid) ((rtm)->Timing.sampleHits[(rtm)->Timing.sampleTimeTaskIDPtr[sti]])
#endif

#ifndef rtmGetStopRequested
# define rtmGetStopRequested(rtm)      ((rtm)->Timing.stopRequestedFlag)
#endif

#ifndef rtmSetStopRequested
# define rtmSetStopRequested(rtm, val) ((rtm)->Timing.stopRequestedFlag = (val))
#endif

#ifndef rtmGetStopRequestedPtr
# define rtmGetStopRequestedPtr(rtm)   (&((rtm)->Timing.stopRequestedFlag))
#endif

#ifndef rtmGetT
# define rtmGetT(rtm)                  (rtmGetTPtr((rtm))[0])
#endif

#ifndef rtmSetT
# define rtmSetT(rtm, val)                                       /* Do Nothing */
#endif

#ifndef rtmGetTFinal
# define rtmGetTFinal(rtm)             ((rtm)->Timing.tFinal)
#endif

#ifndef rtmSetTFinal
# define rtmSetTFinal(rtm, val)        ((rtm)->Timing.tFinal = (val))
#endif

#ifndef rtmGetTPtr
# define rtmGetTPtr(rtm)               ((rtm)->Timing.t)
#endif

#ifndef rtmSetTPtr
# define rtmSetTPtr(rtm, val)          ((rtm)->Timing.t = (val))
#endif

#ifndef rtmGetTStart
# define rtmGetTStart(rtm)             ((rtm)->Timing.tStart)
#endif

#ifndef rtmSetTStart
# define rtmSetTStart(rtm, val)        ((rtm)->Timing.tStart = (val))
#endif

#ifndef rtmGetTaskTime
# define rtmGetTaskTime(rtm, sti)      (rtmGetTPtr((rtm))[(rtm)->Timing.sampleTimeTaskIDPtr[sti]])
#endif

#ifndef rtmSetTaskTime
# define rtmSetTaskTime(rtm, sti, val) (rtmGetTPtr((rtm))[sti] = (val))
#endif

#ifndef rtmGetTimeOfLastOutput
# define rtmGetTimeOfLastOutput(rtm)   ((rtm)->Timing.timeOfLastOutput)
#endif

#ifdef rtmGetRTWSolverInfo
#undef rtmGetRTWSolverInfo
#endif

#define rtmGetRTWSolverInfo(rtm)       &((rtm)->solverInfo)
#define rtModel_HybridControllerD2D2   RT_MODEL_HybridControllerD2D2_T

/* Definition for use in the target main file */
#define HybridControllerD2D2_rtModel   RT_MODEL_HybridControllerD2D2_T

/* user code (top of header file) */
#include "PredictorCorrector.h"

/* Block signals for system '<Root>/ATS compensator' */
typedef struct {
  real_T Butterworthfilter;            /* '<S1>/Butterworth filter' */
  real_T Butterworthfilter1;           /* '<S1>/Butterworth filter1' */
  real_T TappedDelay[1024];            /* '<S14>/Tapped Delay' */
  real_T xm[64];
  real_T A11;                          /* '<S11>/Dot Product' */
  real_T TappedDelay1[1024];           /* '<S14>/Tapped Delay1' */
  real_T xdm[64];
  real_T A12;                          /* '<S11>/Dot Product1' */
  real_T TappedDelay_d[1024];          /* '<S1>/Tapped Delay' */
  real_T um[64];
  real_T DotProduct10;                 /* '<S11>/Dot Product10' */
  real_T DotProduct11;                 /* '<S11>/Dot Product11' */
  real_T TappedDelay2[1024];           /* '<S14>/Tapped Delay2' */
  real_T x2dm[64];
  real_T DotProduct12;                 /* '<S11>/Dot Product12' */
  real_T A13;                          /* '<S11>/Dot Product2' */
  real_T A22;                          /* '<S11>/Dot Product4' */
  real_T A23;                          /* '<S11>/Dot Product5' */
  real_T A33;                          /* '<S11>/Dot Product7' */
  real_T TSamp;                        /* '<S12>/TSamp' */
  real_T Uk1;                          /* '<S12>/UD' */
  real_T Diff;                         /* '<S12>/Diff' */
  real_T TSamp_f;                      /* '<S13>/TSamp' */
  real_T Uk1_e;                        /* '<S13>/UD' */
  real_T Diff_i;                       /* '<S13>/Diff' */
  real_T UnitDelay[4];                 /* '<S1>/Unit Delay' */
  real_T UnitDelay1;                   /* '<S1>/Unit Delay1' */
  real_T ManualSwitch;                 /* '<S1>/Manual Switch' */
  real_T ManualSwitch1;                /* '<S1>/Manual Switch1' */
  real_T TSamp_j;                      /* '<S17>/TSamp' */
  real_T Uk1_g;                        /* '<S17>/UD' */
  real_T Diff_k;                       /* '<S17>/Diff' */
  real_T TSamp_n;                      /* '<S18>/TSamp' */
  real_T Uk1_k;                        /* '<S18>/UD' */
  real_T Diff_e;                       /* '<S18>/Diff' */
  real_T TmpSignalConversionAtSFunctionI[3];
                                     /* '<S1>/calculate optimal coefficients' */
  real_T TmpSignalConversionAtSFunctio_c[3];
                                     /* '<S1>/calculate optimal coefficients' */
  real_T TmpSignalConversionAtSFunctio_a[3];
                                     /* '<S1>/calculate optimal coefficients' */
  real_T TmpSignalConversionAtSFunctio_n[3];
                                     /* '<S1>/calculate optimal coefficients' */
  real_T apar[4];                    /* '<S1>/calculate optimal coefficients' */
  real_T ut_pred;                  /* '<S1>/compensated actuator input disp.' */
} B_CoreSubsys_HybridController_T;

/* Block states (default storage) for system '<Root>/ATS compensator' */
typedef struct {
  real_T Butterworthfilter_states[6];  /* '<S1>/Butterworth filter' */
  real_T Butterworthfilter1_states[6]; /* '<S1>/Butterworth filter1' */
  real_T TappedDelay_X[1024];          /* '<S14>/Tapped Delay' */
  real_T TappedDelay1_X[1024];         /* '<S14>/Tapped Delay1' */
  real_T TappedDelay_X_p[1024];        /* '<S1>/Tapped Delay' */
  real_T TappedDelay2_X[1024];         /* '<S14>/Tapped Delay2' */
  real_T UD_DSTATE;                    /* '<S12>/UD' */
  real_T UD_DSTATE_p;                  /* '<S13>/UD' */
  real_T UnitDelay_DSTATE[4];          /* '<S1>/Unit Delay' */
  real_T UnitDelay1_DSTATE;            /* '<S1>/Unit Delay1' */
  real_T UD_DSTATE_b;                  /* '<S17>/UD' */
  real_T UD_DSTATE_b5;                 /* '<S18>/UD' */
} DW_CoreSubsys_HybridControlle_T;

/* Block signals for system '<S50>/If Action Subsystem1' */
typedef struct {
  boolean_T RelationalOperator;        /* '<S51>/Relational Operator' */
} B_IfActionSubsystem1_HybridCo_T;

/* Block states (default storage) for system '<S50>/If Action Subsystem1' */
typedef struct {
  int8_T IfActionSubsystem1_SubsysRanBC;/* '<S50>/If Action Subsystem1' */
} DW_IfActionSubsystem1_HybridC_T;

/* Block signals for system '<S26>/For Each Subsystem' */
typedef struct {
  real_T TmpSignalConversionAtImpAsg_Ins[2];
  real_T measDspIn;                    /* '<S49>/measDsp In' */
  real_T measFrcIn;                    /* '<S49>/measFrc In' */
  uint8_T Add;                         /* '<S50>/Add' */
  B_IfActionSubsystem1_HybridCo_T IfActionSubsystem2;/* '<S50>/If Action Subsystem2' */
  B_IfActionSubsystem1_HybridCo_T IfActionSubsystem1;/* '<S50>/If Action Subsystem1' */
} B_CoreSubsys_HybridControll_c_T;

/* Block states (default storage) for system '<S26>/For Each Subsystem' */
typedef struct {
  uint32_T Add_DWORK1;                 /* '<S50>/Add' */
  int8_T SubSystem_SubsysRanBC;        /* '<S46>/SubSystem' */
  DW_IfActionSubsystem1_HybridC_T IfActionSubsystem2;/* '<S50>/If Action Subsystem2' */
  DW_IfActionSubsystem1_HybridC_T IfActionSubsystem1;/* '<S50>/If Action Subsystem1' */
} DW_CoreSubsys_HybridControl_f_T;

/* Zero-crossing (trigger) state for system '<S26>/For Each Subsystem' */
typedef struct {
  ZCSigState SubSystem_Trig_ZCE;       /* '<S46>/SubSystem' */
} ZCE_CoreSubsys_HybridContro_f_T;

/* Block signals (default storage) */
typedef struct {
  real_T typeConv6;                    /* '<S7>/typeConv6' */
  real_T MovingAverageFilter;          /* '<S5>/MovingAverage Filter' */
  real_T typeConv7;                    /* '<S7>/typeConv7' */
  real_T MovingAverageFilter1;         /* '<S6>/MovingAverage Filter1' */
  real_T ATSSwitch;                    /* '<Root>/ATS Switch' */
  real_T Assignment;                   /* '<S19>/Assignment' */
  real_T Saturation;                   /* '<S4>/Saturation' */
  real_T typeConv1;                    /* '<S7>/typeConv1' */
  real_T typeConv3;                    /* '<S7>/typeConv3' */
  real_T typeConv4;                    /* '<S7>/typeConv4' */
  real_T typeConv5;                    /* '<S7>/typeConv5' */
  real_T typeConv8;                    /* '<S7>/typeConv8' */
  real_T Gain;                         /* '<S9>/Gain' */
  real_T DummyZero;                    /* '<S27>/Dummy Zero' */
  real_T typeConv;                     /* '<S23>/typeConv' */
  real_T Switch;                       /* '<S23>/Switch' */
  real_T MovingAverageFilter_p;        /* '<S9>/MovingAverage Filter' */
  real_T typeConv_p;                   /* '<S22>/typeConv' */
  real_T Switch_h;                     /* '<S22>/Switch' */
  real_T MovingAverageFilter1_j;       /* '<S9>/MovingAverage Filter1' */
  real_T counter;                      /* '<S9>/counter' */
  real_T Gain4[2];                     /* '<S26>/Gain4' */
  real_T typeConv1_c;                  /* '<S31>/typeConv1' */
  real_T typeConv2[3];                 /* '<S31>/typeConv2' */
  real_T typeConv3_h;                  /* '<S31>/typeConv3' */
  real_T measSignal[2];                /* '<S9>/measSignal' */
  real_T ImpAsg_InsertedFor_measSig_at_i[2];
  real_T TmpSignalConversionAtSFunctionI[2];/* '<S9>/Predictor-Corrector' */
  real_T comD[2];                      /* '<S9>/Predictor-Corrector' */
  real_T comV[2];                      /* '<S9>/Predictor-Corrector' */
  real_T comA[2];                      /* '<S9>/Predictor-Corrector' */
  real_T i;                            /* '<S9>/Predictor-Corrector' */
  real_T Gain_a;                       /* '<S37>/Gain' */
  real_T DataStoreRead;                /* '<S37>/Data Store Read' */
  real_T Sum;                          /* '<S37>/Sum' */
  real_T DataStoreRead_c;              /* '<S23>/Data Store Read' */
  real_T Sum1;                         /* '<S23>/Sum1' */
  real_T Gain_n;                       /* '<S33>/Gain' */
  real_T DataStoreRead_p;              /* '<S33>/Data Store Read' */
  real_T Sum_n;                        /* '<S33>/Sum' */
  real_T DataStoreRead_k;              /* '<S22>/Data Store Read' */
  real_T Sum1_d;                       /* '<S22>/Sum1' */
  real_T ImpAsg_InsertedFor_compdisp_at_;
                                   /* '<S1>/compensated actuator input disp.' */
  real_T ImpAsg_InsertedFor_apar_at_inpo[4];
                                     /* '<S1>/calculate optimal coefficients' */
  uint32_T typeConv2_i;                /* '<S8>/typeConv2' */
  uint32_T Read[8];                    /* '<S7>/Read ' */
  uint32_T SCGTunpack_o2;              /* '<S7>/SCGT unpack' */
  uint32_T SCGTpack[5];                /* '<S8>/SCGT pack' */
  uint32_T typeConv2_p;                /* '<S7>/typeConv2' */
  uint32_T Output;                     /* '<S36>/Output' */
  uint32_T Output_b;                   /* '<S32>/Output' */
  uint32_T FixPtSum1;                  /* '<S34>/FixPt Sum1' */
  uint32_T FixPtSwitch;                /* '<S35>/FixPt Switch' */
  uint32_T FixPtSum1_a;                /* '<S38>/FixPt Sum1' */
  uint32_T FixPtSwitch_m;              /* '<S39>/FixPt Switch' */
  real32_T typeConv1_p;                /* '<S8>/typeConv1' */
  real32_T SCGTunpack_o1;              /* '<S7>/SCGT unpack' */
  real32_T SCGTunpack_o3;              /* '<S7>/SCGT unpack' */
  real32_T SCGTunpack_o4;              /* '<S7>/SCGT unpack' */
  real32_T SCGTunpack_o5;              /* '<S7>/SCGT unpack' */
  real32_T SCGTunpack_o6;              /* '<S7>/SCGT unpack' */
  real32_T SCGTunpack_o7;              /* '<S7>/SCGT unpack' */
  real32_T SCGTunpack_o8;              /* '<S7>/SCGT unpack' */
  real32_T typeConv3_k;                /* '<S8>/typeConv3' */
  real32_T typeConv4_d;                /* '<S8>/typeConv4' */
  real32_T typeConv5_d;                /* '<S8>/typeConv5' */
  int32_T Gain1;                       /* '<S9>/Gain1' */
  int32_T typeConv_j;                  /* '<S25>/typeConv' */
  int32_T switchPC;                    /* '<S9>/switchPC' */
  int32_T atTarget;                    /* '<S9>/atTarget' */
  int32_T state;                       /* '<S9>/Predictor-Corrector' */
  uint8_T Compare;                     /* '<S45>/Compare' */
  uint8_T Uk1;                         /* '<S41>/Delay Input1' */
  uint8_T FixPtRelationalOperator;     /* '<S41>/FixPt Relational Operator' */
  uint8_T Compare_j;                   /* '<S44>/Compare' */
  uint8_T Uk1_j;                       /* '<S40>/Delay Input1' */
  uint8_T FixPtRelationalOperator_g;   /* '<S40>/FixPt Relational Operator' */
  uint8_T Add;                         /* '<S48>/Add' */
  B_IfActionSubsystem1_HybridCo_T IfActionSubsystem2;/* '<S48>/If Action Subsystem2' */
  B_IfActionSubsystem1_HybridCo_T IfActionSubsystem1_h;/* '<S48>/If Action Subsystem1' */
  B_CoreSubsys_HybridControll_c_T CoreSubsys_p[1];/* '<S26>/For Each Subsystem' */
  B_CoreSubsys_HybridController_T CoreSubsys[1];/* '<Root>/ATS compensator' */
} B_HybridControllerD2D2_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  real_T x0;                           /* '<S22>/Data Store Memory' */
  real_T x10;                          /* '<S23>/Data Store Memory' */
  real_T counter;                      /* '<S9>/iMem' */
  real_T di;                           /* '<S9>/Predictor-Corrector' */
  real_T diSD;                         /* '<S9>/Predictor-Corrector' */
  real_T iSD;                          /* '<S9>/Predictor-Corrector' */
  real_T targLocal[2];                 /* '<S9>/Predictor-Corrector' */
  void *Setup_PWORK;                   /* '<Root>/Setup ' */
  void *Read_PWORK;                    /* '<S7>/Read ' */
  void *Write_PWORK;                   /* '<S8>/Write ' */
  uint32_T Output_DSTATE;              /* '<S36>/Output' */
  uint32_T Output_DSTATE_f;            /* '<S32>/Output' */
  int32_T sFlag;                       /* '<S9>/sMem' */
  int32_T tFlag;                       /* '<S9>/tMem' */
  int32_T sfEvent;                     /* '<S9>/Predictor-Corrector' */
  uint32_T Add_DWORK1;                 /* '<S48>/Add' */
  uint32_T is_HybridController;        /* '<S9>/Predictor-Corrector' */
  struct {
    int_T AcquireOK;
  } SFunction_IWORK;                   /* '<S2>/S-Function' */

  struct {
    int_T AcquireOK;
  } SFunction_IWORK_g;                 /* '<S3>/S-Function' */

  struct {
    int_T AcquireOK;
  } SFunction_IWORK_a;                 /* '<S55>/S-Function' */

  uint8_T DelayInput1_DSTATE;          /* '<S41>/Delay Input1' */
  uint8_T DelayInput1_DSTATE_a;        /* '<S40>/Delay Input1' */
  int8_T SubSystem2_SubsysRanBC;       /* '<S26>/SubSystem2' */
  int8_T IfActionSubsystem1_SubsysRanBC;/* '<S25>/If Action Subsystem1' */
  int8_T IfActionSubsystem0_SubsysRanBC;/* '<S25>/If Action Subsystem0' */
  int8_T IfAction_SubsysRanBC;         /* '<S23>/If Action' */
  int8_T IfAction_SubsysRanBC_n;       /* '<S22>/If Action' */
  uint8_T is_active_c2_HybridControllerD2;/* '<S9>/Predictor-Corrector' */
  uint8_T is_active_HybridController;  /* '<S9>/Predictor-Corrector' */
  DW_IfActionSubsystem1_HybridC_T IfActionSubsystem2;/* '<S48>/If Action Subsystem2' */
  DW_IfActionSubsystem1_HybridC_T IfActionSubsystem1_h;/* '<S48>/If Action Subsystem1' */
  DW_CoreSubsys_HybridControl_f_T CoreSubsys_p[1];/* '<S26>/For Each Subsystem' */
  DW_CoreSubsys_HybridControlle_T CoreSubsys[1];/* '<Root>/ATS compensator' */
} DW_HybridControllerD2D2_T;

/* Zero-crossing (trigger) state */
typedef struct {
  ZCSigState SubSystem2_Trig_ZCE;      /* '<S26>/SubSystem2' */
  ZCE_CoreSubsys_HybridContro_f_T CoreSubsys_p[1];/* '<S26>/For Each Subsystem' */
} PrevZCX_HybridControllerD2D2_T;

/* Backward compatible GRT Identifiers */
#define rtB                            HybridControllerD2D2_B
#define BlockIO                        B_HybridControllerD2D2_T
#define rtP                            HybridControllerD2D2_P
#define Parameters                     P_HybridControllerD2D2_T
#define rtDWork                        HybridControllerD2D2_DW
#define D_Work                         DW_HybridControllerD2D2_T
#define rtPrevZCSigState               HybridControllerD2D2_PrevZCX
#define PrevZCSigStates                PrevZCX_HybridControllerD2D2_T

/* Parameters for system: '<Root>/ATS compensator' */
struct P_CoreSubsys_HybridController_T_ {
  real_T DiscreteDerivative_ICPrevScaled;
                              /* Mask Parameter: DiscreteDerivative_ICPrevScaled
                               * Referenced by: '<S12>/UD'
                               */
  real_T DiscreteDerivative1_ICPrevScale;
                              /* Mask Parameter: DiscreteDerivative1_ICPrevScale
                               * Referenced by: '<S13>/UD'
                               */
  real_T DiscreteDerivative_ICPrevScal_a;
                              /* Mask Parameter: DiscreteDerivative_ICPrevScal_a
                               * Referenced by: '<S17>/UD'
                               */
  real_T DiscreteDerivative1_ICPrevSca_b;
                              /* Mask Parameter: DiscreteDerivative1_ICPrevSca_b
                               * Referenced by: '<S18>/UD'
                               */
  real_T TappedDelay_vinit;            /* Mask Parameter: TappedDelay_vinit
                                        * Referenced by: '<S14>/Tapped Delay'
                                        */
  real_T TappedDelay1_vinit;           /* Mask Parameter: TappedDelay1_vinit
                                        * Referenced by: '<S14>/Tapped Delay1'
                                        */
  real_T TappedDelay_vinit_e;          /* Mask Parameter: TappedDelay_vinit_e
                                        * Referenced by: '<S1>/Tapped Delay'
                                        */
  real_T TappedDelay2_vinit;           /* Mask Parameter: TappedDelay2_vinit
                                        * Referenced by: '<S14>/Tapped Delay2'
                                        */
  real_T Butterworthfilter_InitialStates;/* Expression: 0
                                          * Referenced by: '<S1>/Butterworth filter'
                                          */
  real_T Butterworthfilter1_InitialState;/* Expression: 0
                                          * Referenced by: '<S1>/Butterworth filter1'
                                          */
  real_T TSamp_WtEt;                   /* Computed Parameter: TSamp_WtEt
                                        * Referenced by: '<S12>/TSamp'
                                        */
  real_T TSamp_WtEt_o;                 /* Computed Parameter: TSamp_WtEt_o
                                        * Referenced by: '<S13>/TSamp'
                                        */
  real_T UnitDelay_InitialCondition;   /* Expression: 0
                                        * Referenced by: '<S1>/Unit Delay'
                                        */
  real_T UnitDelay1_InitialCondition;  /* Expression: 0
                                        * Referenced by: '<S1>/Unit Delay1'
                                        */
  real_T TSamp_WtEt_k;                 /* Computed Parameter: TSamp_WtEt_k
                                        * Referenced by: '<S17>/TSamp'
                                        */
  real_T TSamp_WtEt_j;                 /* Computed Parameter: TSamp_WtEt_j
                                        * Referenced by: '<S18>/TSamp'
                                        */
  uint8_T ManualSwitch_CurrentSetting;
                              /* Computed Parameter: ManualSwitch_CurrentSetting
                               * Referenced by: '<S1>/Manual Switch'
                               */
  uint8_T ManualSwitch1_CurrentSetting;
                             /* Computed Parameter: ManualSwitch1_CurrentSetting
                              * Referenced by: '<S1>/Manual Switch1'
                              */
};

/* Parameters for system: '<S50>/If Action Subsystem1' */
struct P_IfActionSubsystem1_HybridCo_T_ {
  boolean_T Out1_Y0;                   /* Computed Parameter: Out1_Y0
                                        * Referenced by: '<S51>/Out1'
                                        */
};

/* Parameters for system: '<S26>/For Each Subsystem' */
struct P_CoreSubsys_HybridControll_g_T_ {
  real_T measDspOut_Y0;                /* Expression: [0]
                                        * Referenced by: '<S49>/measDsp Out'
                                        */
  real_T measFrcOut_Y0;                /* Expression: [0]
                                        * Referenced by: '<S49>/measFrc Out'
                                        */
  real_T Constant1_Value;              /* Expression: N
                                        * Referenced by: '<S50>/Constant1'
                                        */
  P_IfActionSubsystem1_HybridCo_T IfActionSubsystem2;/* '<S50>/If Action Subsystem2' */
  P_IfActionSubsystem1_HybridCo_T IfActionSubsystem1;/* '<S50>/If Action Subsystem1' */
};

/* Parameters (default storage) */
struct P_HybridControllerD2D2_T_ {
  struct_Kj73OsWN0x5S8L4NmJ8cwH HybridCtrlParameters;/* Variable: HybridCtrlParameters
                                                      * Referenced by:
                                                      *   '<S9>/Predictor-Corrector'
                                                      *   '<S26>/Constant'
                                                      */
  real_T MRC[3];                       /* Variable: MRC
                                        * Referenced by: '<S1>/Constant4'
                                        */
  real_T P_range[6];                   /* Variable: P_range
                                        * Referenced by: '<S1>/Constant2'
                                        */
  real_T Par[3];                       /* Variable: Par
                                        * Referenced by: '<Root>/ATS compensator'
                                        */
  real_T Threshold;                    /* Variable: Threshold
                                        * Referenced by: '<S1>/Constant3'
                                        */
  real_T Zden[7];                      /* Variable: Zden
                                        * Referenced by:
                                        *   '<S1>/Butterworth filter'
                                        *   '<S1>/Butterworth filter1'
                                        */
  real_T Znum[7];                      /* Variable: Znum
                                        * Referenced by:
                                        *   '<S1>/Butterworth filter'
                                        *   '<S1>/Butterworth filter1'
                                        */
  real_T assemble3_id;                 /* Mask Parameter: assemble3_id
                                        * Referenced by: '<S19>/Constant'
                                        */
  real_T Offset1_nOffset;              /* Mask Parameter: Offset1_nOffset
                                        * Referenced by:
                                        *   '<S22>/Switch'
                                        *   '<S33>/Gain'
                                        */
  real_T Offset2_nOffset;              /* Mask Parameter: Offset2_nOffset
                                        * Referenced by:
                                        *   '<S23>/Switch'
                                        *   '<S37>/Gain'
                                        */
  real_T MovingAverageFilter_numSample;
                                /* Mask Parameter: MovingAverageFilter_numSample
                                 * Referenced by: '<S9>/MovingAverage Filter'
                                 */
  real_T MovingAverageFilter1_numSample;
                               /* Mask Parameter: MovingAverageFilter1_numSample
                                * Referenced by: '<S9>/MovingAverage Filter1'
                                */
  real_T MovingAverageFilter_numSample_c;
                              /* Mask Parameter: MovingAverageFilter_numSample_c
                               * Referenced by: '<S5>/MovingAverage Filter'
                               */
  real_T MovingAverageFilter1_numSampl_b;
                              /* Mask Parameter: MovingAverageFilter1_numSampl_b
                               * Referenced by: '<S6>/MovingAverage Filter1'
                               */
  int32_T xPCHC_upFact;                /* Mask Parameter: xPCHC_upFact
                                        * Referenced by: '<S9>/For Iterator'
                                        */
  uint32_T WrapToZero_Threshold;       /* Mask Parameter: WrapToZero_Threshold
                                        * Referenced by: '<S35>/FixPt Switch'
                                        */
  uint32_T WrapToZero_Threshold_f;     /* Mask Parameter: WrapToZero_Threshold_f
                                        * Referenced by: '<S39>/FixPt Switch'
                                        */
  uint8_T DetectRisePositive_vinit;  /* Mask Parameter: DetectRisePositive_vinit
                                      * Referenced by: '<S41>/Delay Input1'
                                      */
  uint8_T DetectFallNonpositive_vinit;
                                  /* Mask Parameter: DetectFallNonpositive_vinit
                                   * Referenced by: '<S40>/Delay Input1'
                                   */
  real_T Constant_Value;               /* Expression: zeros(1,nS)
                                        * Referenced by: '<S22>/Constant'
                                        */
  real_T Constant_Value_k;             /* Expression: zeros(1,nS)
                                        * Referenced by: '<S23>/Constant'
                                        */
  real_T targSignal_Value;             /* Expression: zeros(1,nDOF)
                                        * Referenced by: '<S9>/targSignal'
                                        */
  real_T Gain_Gain;                    /* Expression: 1
                                        * Referenced by: '<S9>/Gain'
                                        */
  real_T DummyZero_Value;              /* Expression: 0
                                        * Referenced by: '<S27>/Dummy Zero'
                                        */
  real_T MovingAverageFilter_InitialStat;/* Expression: 0
                                          * Referenced by: '<S9>/MovingAverage Filter'
                                          */
  real_T MovingAverageFilter1_InitialSta;/* Expression: 0
                                          * Referenced by: '<S9>/MovingAverage Filter1'
                                          */
  real_T DataStoreMemory_InitialValue; /* Expression: zeros(1,nS)
                                        * Referenced by: '<S22>/Data Store Memory'
                                        */
  real_T DataStoreMemory_InitialValue_p;/* Expression: zeros(1,nS)
                                         * Referenced by: '<S23>/Data Store Memory'
                                         */
  real_T Constant_Value_m;             /* Expression: max(iDelay)
                                        * Referenced by: '<S48>/Constant'
                                        */
  real_T Constant1_Value;              /* Expression: N
                                        * Referenced by: '<S48>/Constant1'
                                        */
  real_T Gain4_Gain;                   /* Expression: 1
                                        * Referenced by: '<S26>/Gain4'
                                        */
  real_T measSignal_Gain;              /* Expression: 1
                                        * Referenced by: '<S9>/measSignal'
                                        */
  real_T iMem_InitialValue;            /* Expression: 0
                                        * Referenced by: '<S9>/iMem'
                                        */
  real_T Setup_P1_Size[2];             /* Computed Parameter: Setup_P1_Size
                                        * Referenced by: '<Root>/Setup '
                                        */
  real_T Setup_P1;              /* Expression: node(1).Interface.Internal.NodeID
                                 * Referenced by: '<Root>/Setup '
                                 */
  real_T Setup_P2_Size[2];             /* Computed Parameter: Setup_P2_Size
                                        * Referenced by: '<Root>/Setup '
                                        */
  real_T Setup_P2;     /* Expression: node(1).Interface.Internal.ActiveInterface
                        * Referenced by: '<Root>/Setup '
                        */
  real_T Setup_P3_Size[2];             /* Computed Parameter: Setup_P3_Size
                                        * Referenced by: '<Root>/Setup '
                                        */
  real_T Setup_P3[15];            /* Expression: node.Interface.Internal.Options
                                   * Referenced by: '<Root>/Setup '
                                   */
  real_T Setup_P4_Size[2];             /* Computed Parameter: Setup_P4_Size
                                        * Referenced by: '<Root>/Setup '
                                        */
  real_T Setup_P4;                /* Expression: node(1).Interface.Internal.Mask
                                   * Referenced by: '<Root>/Setup '
                                   */
  real_T Setup_P5_Size[2];             /* Computed Parameter: Setup_P5_Size
                                        * Referenced by: '<Root>/Setup '
                                        */
  real_T Setup_P5;                     /* Expression: pci
                                        * Referenced by: '<Root>/Setup '
                                        */
  real_T Setup_P6_Size[2];             /* Computed Parameter: Setup_P6_Size
                                        * Referenced by: '<Root>/Setup '
                                        */
  real_T Setup_P6;                     /* Expression: id
                                        * Referenced by: '<Root>/Setup '
                                        */
  real_T masterspan_Value;             /* Expression: 0
                                        * Referenced by: '<Root>/master span'
                                        */
  real_T ctlmodes_Value;               /* Expression: zeros(nAct,1)
                                        * Referenced by: '<Root>/ctl modes'
                                        */
  real_T Read_P1_Size[2];              /* Computed Parameter: Read_P1_Size
                                        * Referenced by: '<S7>/Read '
                                        */
  real_T Read_P1;                   /* Expression: partition(1).Internal.Address
                                     * Referenced by: '<S7>/Read '
                                     */
  real_T Read_P2_Size[2];              /* Computed Parameter: Read_P2_Size
                                        * Referenced by: '<S7>/Read '
                                        */
  real_T Read_P2;                   /* Expression: partition(1).Internal.NDwords
                                     * Referenced by: '<S7>/Read '
                                     */
  real_T Read_P3_Size[2];              /* Computed Parameter: Read_P3_Size
                                        * Referenced by: '<S7>/Read '
                                        */
  real_T Read_P3;                      /* Expression: ts
                                        * Referenced by: '<S7>/Read '
                                        */
  real_T Read_P4_Size[2];              /* Computed Parameter: Read_P4_Size
                                        * Referenced by: '<S7>/Read '
                                        */
  real_T Read_P4;                      /* Expression: pci
                                        * Referenced by: '<S7>/Read '
                                        */
  real_T Read_P5_Size[2];              /* Computed Parameter: Read_P5_Size
                                        * Referenced by: '<S7>/Read '
                                        */
  real_T Read_P5;                      /* Expression: id
                                        * Referenced by: '<S7>/Read '
                                        */
  real_T SCGTunpack_P1_Size[2];        /* Computed Parameter: SCGTunpack_P1_Size
                                        * Referenced by: '<S7>/SCGT unpack'
                                        */
  real_T SCGTunpack_P1[8];             /* Expression: get(partition(1),'IType')
                                        * Referenced by: '<S7>/SCGT unpack'
                                        */
  real_T SCGTunpack_P2_Size[2];        /* Computed Parameter: SCGTunpack_P2_Size
                                        * Referenced by: '<S7>/SCGT unpack'
                                        */
  real_T SCGTunpack_P2[16];            /* Expression: get(partition(1),'ISize')
                                        * Referenced by: '<S7>/SCGT unpack'
                                        */
  real_T SCGTunpack_P3_Size[2];        /* Computed Parameter: SCGTunpack_P3_Size
                                        * Referenced by: '<S7>/SCGT unpack'
                                        */
  real_T SCGTunpack_P3[8];           /* Expression: get(partition(1),'IAddress')
                                      * Referenced by: '<S7>/SCGT unpack'
                                      */
  real_T SCGTunpack_P4_Size[2];        /* Computed Parameter: SCGTunpack_P4_Size
                                        * Referenced by: '<S7>/SCGT unpack'
                                        */
  real_T SCGTunpack_P4;                /* Expression: sizeof(partition(1))
                                        * Referenced by: '<S7>/SCGT unpack'
                                        */
  real_T MovingAverageFilter_InitialSt_i;/* Expression: 0
                                          * Referenced by: '<S5>/MovingAverage Filter'
                                          */
  real_T MovingAverageFilter1_InitialS_o;/* Expression: 0
                                          * Referenced by: '<S6>/MovingAverage Filter1'
                                          */
  real_T Saturation_UpperSat;          /* Expression: 5
                                        * Referenced by: '<S4>/Saturation'
                                        */
  real_T Saturation_LowerSat;          /* Expression: -5
                                        * Referenced by: '<S4>/Saturation'
                                        */
  real_T forcecmds_Value;              /* Expression: zeros(nAct,1)
                                        * Referenced by: '<Root>/force cmds'
                                        */
  real_T valvecmds_Value;              /* Expression: 0
                                        * Referenced by: '<Root>/valve cmds'
                                        */
  real_T SCGTpack_P1_Size[2];          /* Computed Parameter: SCGTpack_P1_Size
                                        * Referenced by: '<S8>/SCGT pack'
                                        */
  real_T SCGTpack_P1[5];               /* Expression: get(partition(1),'IType')
                                        * Referenced by: '<S8>/SCGT pack'
                                        */
  real_T SCGTpack_P2_Size[2];          /* Computed Parameter: SCGTpack_P2_Size
                                        * Referenced by: '<S8>/SCGT pack'
                                        */
  real_T SCGTpack_P2[10];              /* Expression: get(partition(1),'ISize')
                                        * Referenced by: '<S8>/SCGT pack'
                                        */
  real_T SCGTpack_P3_Size[2];          /* Computed Parameter: SCGTpack_P3_Size
                                        * Referenced by: '<S8>/SCGT pack'
                                        */
  real_T SCGTpack_P3[5];             /* Expression: get(partition(1),'IAddress')
                                      * Referenced by: '<S8>/SCGT pack'
                                      */
  real_T SCGTpack_P4_Size[2];          /* Computed Parameter: SCGTpack_P4_Size
                                        * Referenced by: '<S8>/SCGT pack'
                                        */
  real_T SCGTpack_P4;                  /* Expression: sizeof(partition(1))
                                        * Referenced by: '<S8>/SCGT pack'
                                        */
  real_T Write_P1_Size[2];             /* Computed Parameter: Write_P1_Size
                                        * Referenced by: '<S8>/Write '
                                        */
  real_T Write_P1;                  /* Expression: partition(1).Internal.Address
                                     * Referenced by: '<S8>/Write '
                                     */
  real_T Write_P2_Size[2];             /* Computed Parameter: Write_P2_Size
                                        * Referenced by: '<S8>/Write '
                                        */
  real_T Write_P2;                  /* Expression: partition(1).Internal.NDwords
                                     * Referenced by: '<S8>/Write '
                                     */
  real_T Write_P3_Size[2];             /* Computed Parameter: Write_P3_Size
                                        * Referenced by: '<S8>/Write '
                                        */
  real_T Write_P3;                     /* Expression: ts
                                        * Referenced by: '<S8>/Write '
                                        */
  real_T Write_P4_Size[2];             /* Computed Parameter: Write_P4_Size
                                        * Referenced by: '<S8>/Write '
                                        */
  real_T Write_P4;                     /* Expression: pci
                                        * Referenced by: '<S8>/Write '
                                        */
  real_T Write_P5_Size[2];             /* Computed Parameter: Write_P5_Size
                                        * Referenced by: '<S8>/Write '
                                        */
  real_T Write_P5;                     /* Expression: id
                                        * Referenced by: '<S8>/Write '
                                        */
  int32_T PredictorCorrector_N;        /* Expression: N
                                        * Referenced by: '<S9>/Predictor-Corrector'
                                        */
  int32_T PredictorCorrector_nDOF;/* Computed Parameter: PredictorCorrector_nDOF
                                   * Referenced by: '<S9>/Predictor-Corrector'
                                   */
  int32_T switchFlag_Value;            /* Computed Parameter: switchFlag_Value
                                        * Referenced by: '<S42>/switchFlag'
                                        */
  int32_T atTargetFlag_Value;          /* Computed Parameter: atTargetFlag_Value
                                        * Referenced by: '<S42>/atTargetFlag'
                                        */
  int32_T switchFlag_Value_l;          /* Computed Parameter: switchFlag_Value_l
                                        * Referenced by: '<S43>/switchFlag'
                                        */
  int32_T atTargetFlag_Value_e;      /* Computed Parameter: atTargetFlag_Value_e
                                      * Referenced by: '<S47>/atTargetFlag'
                                      */
  int32_T Constant_Value_e;            /* Computed Parameter: Constant_Value_e
                                        * Referenced by: '<S44>/Constant'
                                        */
  int32_T Constant_Value_h;            /* Computed Parameter: Constant_Value_h
                                        * Referenced by: '<S45>/Constant'
                                        */
  int32_T newTarget_Value;             /* Computed Parameter: newTarget_Value
                                        * Referenced by: '<S9>/newTarget'
                                        */
  int32_T sMem_InitialValue;           /* Computed Parameter: sMem_InitialValue
                                        * Referenced by: '<S9>/sMem'
                                        */
  int32_T tMem_InitialValue;           /* Computed Parameter: tMem_InitialValue
                                        * Referenced by: '<S9>/tMem'
                                        */
  int32_T Gain1_Gain;                  /* Computed Parameter: Gain1_Gain
                                        * Referenced by: '<S9>/Gain1'
                                        */
  uint32_T Output_InitialCondition;
                                  /* Computed Parameter: Output_InitialCondition
                                   * Referenced by: '<S36>/Output'
                                   */
  uint32_T Output_InitialCondition_j;
                                /* Computed Parameter: Output_InitialCondition_j
                                 * Referenced by: '<S32>/Output'
                                 */
  uint32_T FixPtConstant_Value;       /* Computed Parameter: FixPtConstant_Value
                                       * Referenced by: '<S34>/FixPt Constant'
                                       */
  uint32_T Constant_Value_d;           /* Computed Parameter: Constant_Value_d
                                        * Referenced by: '<S35>/Constant'
                                        */
  uint32_T FixPtConstant_Value_b;   /* Computed Parameter: FixPtConstant_Value_b
                                     * Referenced by: '<S38>/FixPt Constant'
                                     */
  uint32_T Constant_Value_p;           /* Computed Parameter: Constant_Value_p
                                        * Referenced by: '<S39>/Constant'
                                        */
  uint8_T ATSSwitch_CurrentSetting;
                                 /* Computed Parameter: ATSSwitch_CurrentSetting
                                  * Referenced by: '<Root>/ATS Switch'
                                  */
  P_IfActionSubsystem1_HybridCo_T IfActionSubsystem2;/* '<S48>/If Action Subsystem2' */
  P_IfActionSubsystem1_HybridCo_T IfActionSubsystem1_h;/* '<S48>/If Action Subsystem1' */
  P_CoreSubsys_HybridControll_g_T CoreSubsys_p;/* '<S26>/For Each Subsystem' */
  P_CoreSubsys_HybridController_T CoreSubsys;/* '<Root>/ATS compensator' */
};

/* Real-time Model Data Structure */
struct tag_RTM_HybridControllerD2D2_T {
  const char_T *path;
  const char_T *modelName;
  struct SimStruct_tag * *childSfunctions;
  const char_T *errorStatus;
  SS_SimMode simMode;
  RTWLogInfo *rtwLogInfo;
  RTWExtModeInfo *extModeInfo;
  RTWSolverInfo solverInfo;
  RTWSolverInfo *solverInfoPtr;
  void *sfcnInfo;

  /*
   * NonInlinedSFcns:
   * The following substructure contains information regarding
   * non-inlined s-functions used in the model.
   */
  struct {
    RTWSfcnInfo sfcnInfo;
    time_T *taskTimePtrs[1];
    SimStruct childSFunctions[5];
    SimStruct *childSFunctionPtrs[5];
    struct _ssBlkInfo2 blkInfo2[5];
    struct _ssSFcnModelMethods2 methods2[5];
    struct _ssSFcnModelMethods3 methods3[5];
    struct _ssSFcnModelMethods4 methods4[5];
    struct _ssStatesInfo2 statesInfo2[5];
    ssPeriodicStatesInfo periodicStatesInfo[5];
    struct _ssPortInfo2 inputOutputPortInfo2[5];
    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      uint_T attribs[6];
      mxArray *params[6];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn0;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[5];
      mxArray *params[5];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn1;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      struct _ssPortOutputs outputPortInfo[8];
      struct _ssOutPortUnit outputPortUnits[8];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[8];
      uint_T attribs[4];
      mxArray *params[4];
    } Sfcn2;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[5];
      struct _ssInPortUnit inputPortUnits[5];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[5];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[4];
      mxArray *params[4];
    } Sfcn3;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      uint_T attribs[5];
      mxArray *params[5];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn4;
  } NonInlinedSFcns;

  void *blockIO;
  const void *constBlockIO;
  void *defaultParam;
  ZCSigState *prevZCSigState;
  real_T *contStates;
  int_T *periodicContStateIndices;
  real_T *periodicContStateRanges;
  real_T *derivs;
  void *zcSignalValues;
  void *inputs;
  void *outputs;
  boolean_T *contStateDisabled;
  boolean_T zCCacheNeedsReset;
  boolean_T derivCacheNeedsReset;
  boolean_T CTOutputIncnstWithState;
  void *dwork;

  /*
   * DataMapInfo:
   * The following substructure contains information regarding
   * structures generated in the model's C API.
   */
  struct {
    rtwCAPI_ModelMappingInfo mmi;
  } DataMapInfo;

  /*
   * Sizes:
   * The following substructure contains sizes information
   * for many of the model attributes such as inputs, outputs,
   * dwork, sample times, etc.
   */
  struct {
    uint32_T checksums[4];
    uint32_T options;
    int_T numContStates;
    int_T numPeriodicContStates;
    int_T numU;
    int_T numY;
    int_T numSampTimes;
    int_T numBlocks;
    int_T numBlockIO;
    int_T numBlockPrms;
    int_T numDwork;
    int_T numSFcnPrms;
    int_T numSFcns;
    int_T numIports;
    int_T numOports;
    int_T numNonSampZCs;
    int_T sysDirFeedThru;
    int_T rtwGenSfcn;
  } Sizes;

  /*
   * SpecialInfo:
   * The following substructure contains special information
   * related to other components that are dependent on RTW.
   */
  struct {
    const void *mappingInfo;
    void *xpcData;
  } SpecialInfo;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    time_T stepSize;
    uint32_T clockTick0;
    uint32_T clockTickH0;
    time_T stepSize0;
    time_T tStart;
    time_T tFinal;
    time_T timeOfLastOutput;
    void *timingData;
    real_T *varNextHitTimesList;
    SimTimeStep simTimeStep;
    boolean_T stopRequestedFlag;
    time_T *sampleTimes;
    time_T *offsetTimes;
    int_T *sampleTimeTaskIDPtr;
    int_T *sampleHits;
    int_T *perTaskSampleHits;
    time_T *t;
    time_T sampleTimesArray[1];
    time_T offsetTimesArray[1];
    int_T sampleTimeTaskIDArray[1];
    int_T sampleHitArray[1];
    int_T perTaskSampleHitsArray[1];
    time_T tArray[1];
  } Timing;
};

/* Block parameters (default storage) */
extern P_HybridControllerD2D2_T HybridControllerD2D2_P;

/* Block signals (default storage) */
extern B_HybridControllerD2D2_T HybridControllerD2D2_B;

/* Block states (default storage) */
extern DW_HybridControllerD2D2_T HybridControllerD2D2_DW;

/* Zero-crossing (trigger) state */
extern PrevZCX_HybridControllerD2D2_T HybridControllerD2D2_PrevZCX;

/*====================*
 * External functions *
 *====================*/
extern HybridControllerD2D2_rtModel *HybridControllerD2D2(void);
extern void MdlInitializeSizes(void);
extern void MdlInitializeSampleTimes(void);
extern void MdlInitialize(void);
extern void MdlStart(void);
extern void MdlOutputs(int_T tid);
extern void MdlUpdate(int_T tid);
extern void MdlTerminate(void);

/* Function to get C API Model Mapping Static Info */
extern const rtwCAPI_ModelMappingStaticInfo*
  HybridControllerD2D2_GetCAPIStaticMap(void);

/* Real-time Model object */
extern RT_MODEL_HybridControllerD2D2_T *const HybridControllerD2D2_M;

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'HybridControllerD2D2'
 * '<S1>'   : 'HybridControllerD2D2/ATS compensator'
 * '<S2>'   : 'HybridControllerD2D2/Scope '
 * '<S3>'   : 'HybridControllerD2D2/Scope 1'
 * '<S4>'   : 'HybridControllerD2D2/Subsystem2'
 * '<S5>'   : 'HybridControllerD2D2/Subsystem3'
 * '<S6>'   : 'HybridControllerD2D2/Subsystem4'
 * '<S7>'   : 'HybridControllerD2D2/input from MTS (FT60)'
 * '<S8>'   : 'HybridControllerD2D2/output to MTS (FT60)'
 * '<S9>'   : 'HybridControllerD2D2/xPC HC'
 * '<S10>'  : 'HybridControllerD2D2/xPC Recorders'
 * '<S11>'  : 'HybridControllerD2D2/ATS compensator/Coefficient for LSM'
 * '<S12>'  : 'HybridControllerD2D2/ATS compensator/Discrete Derivative'
 * '<S13>'  : 'HybridControllerD2D2/ATS compensator/Discrete Derivative1'
 * '<S14>'  : 'HybridControllerD2D2/ATS compensator/Tapped delay subsystem'
 * '<S15>'  : 'HybridControllerD2D2/ATS compensator/calculate optimal coefficients'
 * '<S16>'  : 'HybridControllerD2D2/ATS compensator/compensated actuator input disp.'
 * '<S17>'  : 'HybridControllerD2D2/ATS compensator/Tapped delay subsystem/Discrete Derivative'
 * '<S18>'  : 'HybridControllerD2D2/ATS compensator/Tapped delay subsystem/Discrete Derivative1'
 * '<S19>'  : 'HybridControllerD2D2/Subsystem2/assemble3'
 * '<S20>'  : 'HybridControllerD2D2/Subsystem3/extract5'
 * '<S21>'  : 'HybridControllerD2D2/Subsystem4/extract6'
 * '<S22>'  : 'HybridControllerD2D2/xPC HC/Offset1'
 * '<S23>'  : 'HybridControllerD2D2/xPC HC/Offset2'
 * '<S24>'  : 'HybridControllerD2D2/xPC HC/Predictor-Corrector'
 * '<S25>'  : 'HybridControllerD2D2/xPC HC/SubSystem0'
 * '<S26>'  : 'HybridControllerD2D2/xPC HC/SubSystem1'
 * '<S27>'  : 'HybridControllerD2D2/xPC HC/Subsystem'
 * '<S28>'  : 'HybridControllerD2D2/xPC HC/Subsystem1'
 * '<S29>'  : 'HybridControllerD2D2/xPC HC/Subsystem2'
 * '<S30>'  : 'HybridControllerD2D2/xPC HC/Subsystem3'
 * '<S31>'  : 'HybridControllerD2D2/xPC HC/Subsystem4'
 * '<S32>'  : 'HybridControllerD2D2/xPC HC/Offset1/Counter'
 * '<S33>'  : 'HybridControllerD2D2/xPC HC/Offset1/If Action'
 * '<S34>'  : 'HybridControllerD2D2/xPC HC/Offset1/Counter/Increment Real World'
 * '<S35>'  : 'HybridControllerD2D2/xPC HC/Offset1/Counter/Wrap To Zero'
 * '<S36>'  : 'HybridControllerD2D2/xPC HC/Offset2/Counter'
 * '<S37>'  : 'HybridControllerD2D2/xPC HC/Offset2/If Action'
 * '<S38>'  : 'HybridControllerD2D2/xPC HC/Offset2/Counter/Increment Real World'
 * '<S39>'  : 'HybridControllerD2D2/xPC HC/Offset2/Counter/Wrap To Zero'
 * '<S40>'  : 'HybridControllerD2D2/xPC HC/SubSystem0/Detect Fall Nonpositive'
 * '<S41>'  : 'HybridControllerD2D2/xPC HC/SubSystem0/Detect Rise Positive'
 * '<S42>'  : 'HybridControllerD2D2/xPC HC/SubSystem0/If Action Subsystem0'
 * '<S43>'  : 'HybridControllerD2D2/xPC HC/SubSystem0/If Action Subsystem1'
 * '<S44>'  : 'HybridControllerD2D2/xPC HC/SubSystem0/Detect Fall Nonpositive/Nonpositive'
 * '<S45>'  : 'HybridControllerD2D2/xPC HC/SubSystem0/Detect Rise Positive/Positive'
 * '<S46>'  : 'HybridControllerD2D2/xPC HC/SubSystem1/For Each Subsystem'
 * '<S47>'  : 'HybridControllerD2D2/xPC HC/SubSystem1/SubSystem2'
 * '<S48>'  : 'HybridControllerD2D2/xPC HC/SubSystem1/Subsystem2'
 * '<S49>'  : 'HybridControllerD2D2/xPC HC/SubSystem1/For Each Subsystem/SubSystem'
 * '<S50>'  : 'HybridControllerD2D2/xPC HC/SubSystem1/For Each Subsystem/Subsystem'
 * '<S51>'  : 'HybridControllerD2D2/xPC HC/SubSystem1/For Each Subsystem/Subsystem/If Action Subsystem1'
 * '<S52>'  : 'HybridControllerD2D2/xPC HC/SubSystem1/For Each Subsystem/Subsystem/If Action Subsystem2'
 * '<S53>'  : 'HybridControllerD2D2/xPC HC/SubSystem1/Subsystem2/If Action Subsystem1'
 * '<S54>'  : 'HybridControllerD2D2/xPC HC/SubSystem1/Subsystem2/If Action Subsystem2'
 * '<S55>'  : 'HybridControllerD2D2/xPC Recorders/Scope (xPC) 1'
 */
#endif                                 /* RTW_HEADER_HybridControllerD2D2_h_ */
