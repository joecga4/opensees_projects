/*
 * com_FT60_2020a.c
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

#include "rt_logging_mmi.h"
#include "com_FT60_2020a_capi.h"
#include "com_FT60_2020a.h"
#include "com_FT60_2020a_private.h"

/* Block signals (default storage) */
B_com_FT60_2020a_T com_FT60_2020a_B;

/* Block states (default storage) */
DW_com_FT60_2020a_T com_FT60_2020a_DW;

/* Real-time model */
RT_MODEL_com_FT60_2020a_T com_FT60_2020a_M_;
RT_MODEL_com_FT60_2020a_T *const com_FT60_2020a_M = &com_FT60_2020a_M_;

/* Model output function */
static void com_FT60_2020a_output(void)
{
  /* S-Function (sg_IO901_IO902_setup_s): '<Root>/Setup ' */

  /* Level2 S-Function Block: '<Root>/Setup ' (sg_IO901_IO902_setup_s) */
  {
    SimStruct *rts = com_FT60_2020a_M->childSfunctions[0];
    sfcnOutputs(rts,1);
  }

  /* S-Function (sg_IO901_IO902_read_s): '<Root>/Read ' */

  /* Level2 S-Function Block: '<Root>/Read ' (sg_IO901_IO902_read_s) */
  {
    SimStruct *rts = com_FT60_2020a_M->childSfunctions[1];
    sfcnOutputs(rts,1);
  }

  /* S-Function (xpcdword2any): '<Root>/Shared Memory Unpack ' */

  /* Level2 S-Function Block: '<Root>/Shared Memory Unpack ' (xpcdword2any) */
  {
    SimStruct *rts = com_FT60_2020a_M->childSfunctions[2];
    sfcnOutputs(rts,1);
  }

  /* DataTypeConversion: '<Root>/Cast To Single' */
  com_FT60_2020a_B.CastToSingle = com_FT60_2020a_B.SharedMemoryUnpack_o1;

  /* DataTypeConversion: '<Root>/Cast To Single1' */
  com_FT60_2020a_B.CastToSingle1 = com_FT60_2020a_B.SharedMemoryUnpack_o2;

  /* DataTypeConversion: '<Root>/Cast To Single2' */
  com_FT60_2020a_B.CastToSingle2 = com_FT60_2020a_B.SharedMemoryUnpack_o3;

  /* DataTypeConversion: '<Root>/Cast To Single3' */
  com_FT60_2020a_B.CastToSingle3 = com_FT60_2020a_B.SharedMemoryUnpack_o4;

  /* DataTypeConversion: '<Root>/Cast To Single4' */
  com_FT60_2020a_B.CastToSingle4 = com_FT60_2020a_B.SharedMemoryUnpack_o5;

  /* DataTypeConversion: '<Root>/Cast To Single5' */
  com_FT60_2020a_B.CastToSingle5 = com_FT60_2020a_B.SharedMemoryUnpack_o6;

  /* SignalGenerator: '<Root>/Signal Generator' */
  com_FT60_2020a_B.SignalGenerator = sin
    (com_FT60_2020a_P.SignalGenerator_Frequency * com_FT60_2020a_M->Timing.t[0])
    * com_FT60_2020a_P.SignalGenerator_Amplitude;

  /* DataTypeConversion: '<Root>/Cast To Single6' */
  com_FT60_2020a_B.CastToSingle6 = (real32_T)com_FT60_2020a_B.SignalGenerator;

  /* S-Function (xpcany2dword): '<Root>/Shared Memory Pack ' */

  /* Level2 S-Function Block: '<Root>/Shared Memory Pack ' (xpcany2dword) */
  {
    SimStruct *rts = com_FT60_2020a_M->childSfunctions[3];
    sfcnOutputs(rts,1);
  }

  /* S-Function (sg_IO901_IO902_write_s): '<Root>/Write ' */

  /* Level2 S-Function Block: '<Root>/Write ' (sg_IO901_IO902_write_s) */
  {
    SimStruct *rts = com_FT60_2020a_M->childSfunctions[4];
    sfcnOutputs(rts,1);
  }
}

/* Model update function */
static void com_FT60_2020a_update(void)
{
  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick0 and the high bits
   * Timing.clockTickH0. When the low bit overflows to 0, the high bits increment.
   */
  if (!(++com_FT60_2020a_M->Timing.clockTick0)) {
    ++com_FT60_2020a_M->Timing.clockTickH0;
  }

  com_FT60_2020a_M->Timing.t[0] = com_FT60_2020a_M->Timing.clockTick0 *
    com_FT60_2020a_M->Timing.stepSize0 + com_FT60_2020a_M->Timing.clockTickH0 *
    com_FT60_2020a_M->Timing.stepSize0 * 4294967296.0;

  {
    /* Update absolute timer for sample time: [0.001s, 0.0s] */
    /* The "clockTick1" counts the number of times the code of this task has
     * been executed. The absolute time is the multiplication of "clockTick1"
     * and "Timing.stepSize1". Size of "clockTick1" ensures timer will not
     * overflow during the application lifespan selected.
     * Timer of this task consists of two 32 bit unsigned integers.
     * The two integers represent the low bits Timing.clockTick1 and the high bits
     * Timing.clockTickH1. When the low bit overflows to 0, the high bits increment.
     */
    if (!(++com_FT60_2020a_M->Timing.clockTick1)) {
      ++com_FT60_2020a_M->Timing.clockTickH1;
    }

    com_FT60_2020a_M->Timing.t[1] = com_FT60_2020a_M->Timing.clockTick1 *
      com_FT60_2020a_M->Timing.stepSize1 + com_FT60_2020a_M->Timing.clockTickH1 *
      com_FT60_2020a_M->Timing.stepSize1 * 4294967296.0;
  }
}

/* Model initialize function */
static void com_FT60_2020a_initialize(void)
{
  /* Start for S-Function (sg_IO901_IO902_setup_s): '<Root>/Setup ' */
  /* Level2 S-Function Block: '<Root>/Setup ' (sg_IO901_IO902_setup_s) */
  {
    SimStruct *rts = com_FT60_2020a_M->childSfunctions[0];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (sg_IO901_IO902_read_s): '<Root>/Read ' */
  /* Level2 S-Function Block: '<Root>/Read ' (sg_IO901_IO902_read_s) */
  {
    SimStruct *rts = com_FT60_2020a_M->childSfunctions[1];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (sg_IO901_IO902_write_s): '<Root>/Write ' */
  /* Level2 S-Function Block: '<Root>/Write ' (sg_IO901_IO902_write_s) */
  {
    SimStruct *rts = com_FT60_2020a_M->childSfunctions[4];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }
}

/* Model terminate function */
static void com_FT60_2020a_terminate(void)
{
  /* Terminate for S-Function (sg_IO901_IO902_setup_s): '<Root>/Setup ' */
  /* Level2 S-Function Block: '<Root>/Setup ' (sg_IO901_IO902_setup_s) */
  {
    SimStruct *rts = com_FT60_2020a_M->childSfunctions[0];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (sg_IO901_IO902_read_s): '<Root>/Read ' */
  /* Level2 S-Function Block: '<Root>/Read ' (sg_IO901_IO902_read_s) */
  {
    SimStruct *rts = com_FT60_2020a_M->childSfunctions[1];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (xpcdword2any): '<Root>/Shared Memory Unpack ' */
  /* Level2 S-Function Block: '<Root>/Shared Memory Unpack ' (xpcdword2any) */
  {
    SimStruct *rts = com_FT60_2020a_M->childSfunctions[2];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (xpcany2dword): '<Root>/Shared Memory Pack ' */
  /* Level2 S-Function Block: '<Root>/Shared Memory Pack ' (xpcany2dword) */
  {
    SimStruct *rts = com_FT60_2020a_M->childSfunctions[3];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (sg_IO901_IO902_write_s): '<Root>/Write ' */
  /* Level2 S-Function Block: '<Root>/Write ' (sg_IO901_IO902_write_s) */
  {
    SimStruct *rts = com_FT60_2020a_M->childSfunctions[4];
    sfcnTerminate(rts);
  }
}

/*========================================================================*
 * Start of Classic call interface                                        *
 *========================================================================*/
void MdlOutputs(int_T tid)
{
  com_FT60_2020a_output();
  UNUSED_PARAMETER(tid);
}

void MdlUpdate(int_T tid)
{
  com_FT60_2020a_update();
  UNUSED_PARAMETER(tid);
}

void MdlInitializeSizes(void)
{
}

void MdlInitializeSampleTimes(void)
{
}

void MdlInitialize(void)
{
}

void MdlStart(void)
{
  com_FT60_2020a_initialize();
}

void MdlTerminate(void)
{
  com_FT60_2020a_terminate();
}

/* Registration function */
RT_MODEL_com_FT60_2020a_T *com_FT60_2020a(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize real-time model */
  (void) memset((void *)com_FT60_2020a_M, 0,
                sizeof(RT_MODEL_com_FT60_2020a_T));

  {
    /* Setup solver object */
    rtsiSetSimTimeStepPtr(&com_FT60_2020a_M->solverInfo,
                          &com_FT60_2020a_M->Timing.simTimeStep);
    rtsiSetTPtr(&com_FT60_2020a_M->solverInfo, &rtmGetTPtr(com_FT60_2020a_M));
    rtsiSetStepSizePtr(&com_FT60_2020a_M->solverInfo,
                       &com_FT60_2020a_M->Timing.stepSize0);
    rtsiSetErrorStatusPtr(&com_FT60_2020a_M->solverInfo, (&rtmGetErrorStatus
      (com_FT60_2020a_M)));
    rtsiSetRTModelPtr(&com_FT60_2020a_M->solverInfo, com_FT60_2020a_M);
  }

  rtsiSetSimTimeStep(&com_FT60_2020a_M->solverInfo, MAJOR_TIME_STEP);
  rtsiSetSolverName(&com_FT60_2020a_M->solverInfo,"FixedStepDiscrete");
  com_FT60_2020a_M->solverInfoPtr = (&com_FT60_2020a_M->solverInfo);

  /* Initialize timing info */
  {
    int_T *mdlTsMap = com_FT60_2020a_M->Timing.sampleTimeTaskIDArray;
    mdlTsMap[0] = 0;
    mdlTsMap[1] = 1;
    com_FT60_2020a_M->Timing.sampleTimeTaskIDPtr = (&mdlTsMap[0]);
    com_FT60_2020a_M->Timing.sampleTimes =
      (&com_FT60_2020a_M->Timing.sampleTimesArray[0]);
    com_FT60_2020a_M->Timing.offsetTimes =
      (&com_FT60_2020a_M->Timing.offsetTimesArray[0]);

    /* task periods */
    com_FT60_2020a_M->Timing.sampleTimes[0] = (0.0);
    com_FT60_2020a_M->Timing.sampleTimes[1] = (0.001);

    /* task offsets */
    com_FT60_2020a_M->Timing.offsetTimes[0] = (0.0);
    com_FT60_2020a_M->Timing.offsetTimes[1] = (0.0);
  }

  rtmSetTPtr(com_FT60_2020a_M, &com_FT60_2020a_M->Timing.tArray[0]);

  {
    int_T *mdlSampleHits = com_FT60_2020a_M->Timing.sampleHitArray;
    mdlSampleHits[0] = 1;
    mdlSampleHits[1] = 1;
    com_FT60_2020a_M->Timing.sampleHits = (&mdlSampleHits[0]);
  }

  rtmSetTFinal(com_FT60_2020a_M, 180.0);
  com_FT60_2020a_M->Timing.stepSize0 = 0.001;
  com_FT60_2020a_M->Timing.stepSize1 = 0.001;

  /* Setup for data logging */
  {
    static RTWLogInfo rt_DataLoggingInfo;
    rt_DataLoggingInfo.loggingInterval = NULL;
    com_FT60_2020a_M->rtwLogInfo = &rt_DataLoggingInfo;
  }

  /* Setup for data logging */
  {
    rtliSetLogXSignalInfo(com_FT60_2020a_M->rtwLogInfo, (NULL));
    rtliSetLogXSignalPtrs(com_FT60_2020a_M->rtwLogInfo, (NULL));
    rtliSetLogT(com_FT60_2020a_M->rtwLogInfo, "tout");
    rtliSetLogX(com_FT60_2020a_M->rtwLogInfo, "");
    rtliSetLogXFinal(com_FT60_2020a_M->rtwLogInfo, "");
    rtliSetLogVarNameModifier(com_FT60_2020a_M->rtwLogInfo, "rt_");
    rtliSetLogFormat(com_FT60_2020a_M->rtwLogInfo, 2);
    rtliSetLogMaxRows(com_FT60_2020a_M->rtwLogInfo, 0);
    rtliSetLogDecimation(com_FT60_2020a_M->rtwLogInfo, 1);
    rtliSetLogY(com_FT60_2020a_M->rtwLogInfo, "");
    rtliSetLogYSignalInfo(com_FT60_2020a_M->rtwLogInfo, (NULL));
    rtliSetLogYSignalPtrs(com_FT60_2020a_M->rtwLogInfo, (NULL));
  }

  com_FT60_2020a_M->solverInfoPtr = (&com_FT60_2020a_M->solverInfo);
  com_FT60_2020a_M->Timing.stepSize = (0.001);
  rtsiSetFixedStepSize(&com_FT60_2020a_M->solverInfo, 0.001);
  rtsiSetSolverMode(&com_FT60_2020a_M->solverInfo, SOLVER_MODE_SINGLETASKING);

  /* block I/O */
  com_FT60_2020a_M->blockIO = ((void *) &com_FT60_2020a_B);
  (void) memset(((void *) &com_FT60_2020a_B), 0,
                sizeof(B_com_FT60_2020a_T));

  /* parameters */
  com_FT60_2020a_M->defaultParam = ((real_T *)&com_FT60_2020a_P);

  /* states (dwork) */
  com_FT60_2020a_M->dwork = ((void *) &com_FT60_2020a_DW);
  (void) memset((void *)&com_FT60_2020a_DW, 0,
                sizeof(DW_com_FT60_2020a_T));

  /* Initialize DataMapInfo substructure containing ModelMap for C API */
  com_FT60_2020a_InitializeDataMapInfo();

  /* child S-Function registration */
  {
    RTWSfcnInfo *sfcnInfo = &com_FT60_2020a_M->NonInlinedSFcns.sfcnInfo;
    com_FT60_2020a_M->sfcnInfo = (sfcnInfo);
    rtssSetErrorStatusPtr(sfcnInfo, (&rtmGetErrorStatus(com_FT60_2020a_M)));
    rtssSetNumRootSampTimesPtr(sfcnInfo, &com_FT60_2020a_M->Sizes.numSampTimes);
    com_FT60_2020a_M->NonInlinedSFcns.taskTimePtrs[0] = &(rtmGetTPtr
      (com_FT60_2020a_M)[0]);
    com_FT60_2020a_M->NonInlinedSFcns.taskTimePtrs[1] = &(rtmGetTPtr
      (com_FT60_2020a_M)[1]);
    rtssSetTPtrPtr(sfcnInfo,com_FT60_2020a_M->NonInlinedSFcns.taskTimePtrs);
    rtssSetTStartPtr(sfcnInfo, &rtmGetTStart(com_FT60_2020a_M));
    rtssSetTFinalPtr(sfcnInfo, &rtmGetTFinal(com_FT60_2020a_M));
    rtssSetTimeOfLastOutputPtr(sfcnInfo, &rtmGetTimeOfLastOutput
      (com_FT60_2020a_M));
    rtssSetStepSizePtr(sfcnInfo, &com_FT60_2020a_M->Timing.stepSize);
    rtssSetStopRequestedPtr(sfcnInfo, &rtmGetStopRequested(com_FT60_2020a_M));
    rtssSetDerivCacheNeedsResetPtr(sfcnInfo,
      &com_FT60_2020a_M->derivCacheNeedsReset);
    rtssSetZCCacheNeedsResetPtr(sfcnInfo, &com_FT60_2020a_M->zCCacheNeedsReset);
    rtssSetContTimeOutputInconsistentWithStateAtMajorStepPtr(sfcnInfo,
      &com_FT60_2020a_M->CTOutputIncnstWithState);
    rtssSetSampleHitsPtr(sfcnInfo, &com_FT60_2020a_M->Timing.sampleHits);
    rtssSetPerTaskSampleHitsPtr(sfcnInfo,
      &com_FT60_2020a_M->Timing.perTaskSampleHits);
    rtssSetSimModePtr(sfcnInfo, &com_FT60_2020a_M->simMode);
    rtssSetSolverInfoPtr(sfcnInfo, &com_FT60_2020a_M->solverInfoPtr);
  }

  com_FT60_2020a_M->Sizes.numSFcns = (5);

  /* register each child */
  {
    (void) memset((void *)&com_FT60_2020a_M->NonInlinedSFcns.childSFunctions[0],
                  0,
                  5*sizeof(SimStruct));
    com_FT60_2020a_M->childSfunctions =
      (&com_FT60_2020a_M->NonInlinedSFcns.childSFunctionPtrs[0]);

    {
      int_T i;
      for (i = 0; i < 5; i++) {
        com_FT60_2020a_M->childSfunctions[i] =
          (&com_FT60_2020a_M->NonInlinedSFcns.childSFunctions[i]);
      }
    }

    /* Level2 S-Function Block: com_FT60_2020a/<Root>/Setup  (sg_IO901_IO902_setup_s) */
    {
      SimStruct *rts = com_FT60_2020a_M->childSfunctions[0];

      /* timing info */
      time_T *sfcnPeriod = com_FT60_2020a_M->NonInlinedSFcns.Sfcn0.sfcnPeriod;
      time_T *sfcnOffset = com_FT60_2020a_M->NonInlinedSFcns.Sfcn0.sfcnOffset;
      int_T *sfcnTsMap = com_FT60_2020a_M->NonInlinedSFcns.Sfcn0.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &com_FT60_2020a_M->NonInlinedSFcns.blkInfo2[0]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &com_FT60_2020a_M->NonInlinedSFcns.inputOutputPortInfo2[0]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, com_FT60_2020a_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &com_FT60_2020a_M->NonInlinedSFcns.methods2[0]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &com_FT60_2020a_M->NonInlinedSFcns.methods3[0]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &com_FT60_2020a_M->NonInlinedSFcns.methods4[0]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &com_FT60_2020a_M->NonInlinedSFcns.statesInfo2[0]);
        ssSetPeriodicStatesInfo(rts,
          &com_FT60_2020a_M->NonInlinedSFcns.periodicStatesInfo[0]);
      }

      /* path info */
      ssSetModelName(rts, "Setup ");
      ssSetPath(rts, "com_FT60_2020a/Setup ");
      ssSetRTModel(rts,com_FT60_2020a_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &com_FT60_2020a_M->NonInlinedSFcns.Sfcn0.params;
        ssSetSFcnParamsCount(rts, 6);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)com_FT60_2020a_P.Setup_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)com_FT60_2020a_P.Setup_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)com_FT60_2020a_P.Setup_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)com_FT60_2020a_P.Setup_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)com_FT60_2020a_P.Setup_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)com_FT60_2020a_P.Setup_P6_Size);
      }

      /* work vectors */
      ssSetPWork(rts, (void **) &com_FT60_2020a_DW.Setup_PWORK);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &com_FT60_2020a_M->NonInlinedSFcns.Sfcn0.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &com_FT60_2020a_M->NonInlinedSFcns.Sfcn0.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* PWORK */
        ssSetDWorkWidth(rts, 0, 1);
        ssSetDWorkDataType(rts, 0,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &com_FT60_2020a_DW.Setup_PWORK);
      }

      /* registration */
      sg_IO901_IO902_setup_s(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.001);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: com_FT60_2020a/<Root>/Read  (sg_IO901_IO902_read_s) */
    {
      SimStruct *rts = com_FT60_2020a_M->childSfunctions[1];

      /* timing info */
      time_T *sfcnPeriod = com_FT60_2020a_M->NonInlinedSFcns.Sfcn1.sfcnPeriod;
      time_T *sfcnOffset = com_FT60_2020a_M->NonInlinedSFcns.Sfcn1.sfcnOffset;
      int_T *sfcnTsMap = com_FT60_2020a_M->NonInlinedSFcns.Sfcn1.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &com_FT60_2020a_M->NonInlinedSFcns.blkInfo2[1]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &com_FT60_2020a_M->NonInlinedSFcns.inputOutputPortInfo2[1]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, com_FT60_2020a_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &com_FT60_2020a_M->NonInlinedSFcns.methods2[1]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &com_FT60_2020a_M->NonInlinedSFcns.methods3[1]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &com_FT60_2020a_M->NonInlinedSFcns.methods4[1]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &com_FT60_2020a_M->NonInlinedSFcns.statesInfo2[1]);
        ssSetPeriodicStatesInfo(rts,
          &com_FT60_2020a_M->NonInlinedSFcns.periodicStatesInfo[1]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &com_FT60_2020a_M->NonInlinedSFcns.Sfcn1.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &com_FT60_2020a_M->NonInlinedSFcns.Sfcn1.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &com_FT60_2020a_M->NonInlinedSFcns.Sfcn1.outputPortCoSimAttribute[0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 6);
          ssSetOutputPortSignal(rts, 0, ((uint32_T *) com_FT60_2020a_B.Read));
        }
      }

      /* path info */
      ssSetModelName(rts, "Read ");
      ssSetPath(rts, "com_FT60_2020a/Read ");
      ssSetRTModel(rts,com_FT60_2020a_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &com_FT60_2020a_M->NonInlinedSFcns.Sfcn1.params;
        ssSetSFcnParamsCount(rts, 5);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)com_FT60_2020a_P.Read_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)com_FT60_2020a_P.Read_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)com_FT60_2020a_P.Read_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)com_FT60_2020a_P.Read_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)com_FT60_2020a_P.Read_P5_Size);
      }

      /* work vectors */
      ssSetPWork(rts, (void **) &com_FT60_2020a_DW.Read_PWORK);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &com_FT60_2020a_M->NonInlinedSFcns.Sfcn1.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &com_FT60_2020a_M->NonInlinedSFcns.Sfcn1.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* PWORK */
        ssSetDWorkWidth(rts, 0, 1);
        ssSetDWorkDataType(rts, 0,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &com_FT60_2020a_DW.Read_PWORK);
      }

      /* registration */
      sg_IO901_IO902_read_s(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.001);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: com_FT60_2020a/<Root>/Shared Memory Unpack  (xpcdword2any) */
    {
      SimStruct *rts = com_FT60_2020a_M->childSfunctions[2];

      /* timing info */
      time_T *sfcnPeriod = com_FT60_2020a_M->NonInlinedSFcns.Sfcn2.sfcnPeriod;
      time_T *sfcnOffset = com_FT60_2020a_M->NonInlinedSFcns.Sfcn2.sfcnOffset;
      int_T *sfcnTsMap = com_FT60_2020a_M->NonInlinedSFcns.Sfcn2.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &com_FT60_2020a_M->NonInlinedSFcns.blkInfo2[2]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &com_FT60_2020a_M->NonInlinedSFcns.inputOutputPortInfo2[2]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, com_FT60_2020a_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &com_FT60_2020a_M->NonInlinedSFcns.methods2[2]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &com_FT60_2020a_M->NonInlinedSFcns.methods3[2]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &com_FT60_2020a_M->NonInlinedSFcns.methods4[2]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &com_FT60_2020a_M->NonInlinedSFcns.statesInfo2[2]);
        ssSetPeriodicStatesInfo(rts,
          &com_FT60_2020a_M->NonInlinedSFcns.periodicStatesInfo[2]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &com_FT60_2020a_M->NonInlinedSFcns.Sfcn2.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &com_FT60_2020a_M->NonInlinedSFcns.Sfcn2.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &com_FT60_2020a_M->NonInlinedSFcns.Sfcn2.inputPortCoSimAttribute[0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, com_FT60_2020a_B.Read);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 6);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &com_FT60_2020a_M->NonInlinedSFcns.Sfcn2.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 6);
        _ssSetPortInfo2ForOutputUnits(rts,
          &com_FT60_2020a_M->NonInlinedSFcns.Sfcn2.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        ssSetOutputPortUnit(rts, 1, 0);
        ssSetOutputPortUnit(rts, 2, 0);
        ssSetOutputPortUnit(rts, 3, 0);
        ssSetOutputPortUnit(rts, 4, 0);
        ssSetOutputPortUnit(rts, 5, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &com_FT60_2020a_M->NonInlinedSFcns.Sfcn2.outputPortCoSimAttribute[0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 1, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 2, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 3, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 4, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 5, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real32_T *)
            &com_FT60_2020a_B.SharedMemoryUnpack_o1));
        }

        /* port 1 */
        {
          _ssSetOutputPortNumDimensions(rts, 1, 1);
          ssSetOutputPortWidth(rts, 1, 1);
          ssSetOutputPortSignal(rts, 1, ((real32_T *)
            &com_FT60_2020a_B.SharedMemoryUnpack_o2));
        }

        /* port 2 */
        {
          _ssSetOutputPortNumDimensions(rts, 2, 1);
          ssSetOutputPortWidth(rts, 2, 1);
          ssSetOutputPortSignal(rts, 2, ((real32_T *)
            &com_FT60_2020a_B.SharedMemoryUnpack_o3));
        }

        /* port 3 */
        {
          _ssSetOutputPortNumDimensions(rts, 3, 1);
          ssSetOutputPortWidth(rts, 3, 1);
          ssSetOutputPortSignal(rts, 3, ((real32_T *)
            &com_FT60_2020a_B.SharedMemoryUnpack_o4));
        }

        /* port 4 */
        {
          _ssSetOutputPortNumDimensions(rts, 4, 1);
          ssSetOutputPortWidth(rts, 4, 1);
          ssSetOutputPortSignal(rts, 4, ((real32_T *)
            &com_FT60_2020a_B.SharedMemoryUnpack_o5));
        }

        /* port 5 */
        {
          _ssSetOutputPortNumDimensions(rts, 5, 1);
          ssSetOutputPortWidth(rts, 5, 1);
          ssSetOutputPortSignal(rts, 5, ((real32_T *)
            &com_FT60_2020a_B.SharedMemoryUnpack_o6));
        }
      }

      /* path info */
      ssSetModelName(rts, "Shared Memory Unpack ");
      ssSetPath(rts, "com_FT60_2020a/Shared Memory Unpack ");
      ssSetRTModel(rts,com_FT60_2020a_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &com_FT60_2020a_M->NonInlinedSFcns.Sfcn2.params;
        ssSetSFcnParamsCount(rts, 4);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       com_FT60_2020a_P.SharedMemoryUnpack_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       com_FT60_2020a_P.SharedMemoryUnpack_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       com_FT60_2020a_P.SharedMemoryUnpack_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       com_FT60_2020a_P.SharedMemoryUnpack_P4_Size);
      }

      /* registration */
      xpcdword2any(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.001);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 1, 1);
      _ssSetOutputPortConnected(rts, 2, 1);
      _ssSetOutputPortConnected(rts, 3, 1);
      _ssSetOutputPortConnected(rts, 4, 1);
      _ssSetOutputPortConnected(rts, 5, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);
      _ssSetOutputPortBeingMerged(rts, 1, 0);
      _ssSetOutputPortBeingMerged(rts, 2, 0);
      _ssSetOutputPortBeingMerged(rts, 3, 0);
      _ssSetOutputPortBeingMerged(rts, 4, 0);
      _ssSetOutputPortBeingMerged(rts, 5, 0);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: com_FT60_2020a/<Root>/Shared Memory Pack  (xpcany2dword) */
    {
      SimStruct *rts = com_FT60_2020a_M->childSfunctions[3];

      /* timing info */
      time_T *sfcnPeriod = com_FT60_2020a_M->NonInlinedSFcns.Sfcn3.sfcnPeriod;
      time_T *sfcnOffset = com_FT60_2020a_M->NonInlinedSFcns.Sfcn3.sfcnOffset;
      int_T *sfcnTsMap = com_FT60_2020a_M->NonInlinedSFcns.Sfcn3.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &com_FT60_2020a_M->NonInlinedSFcns.blkInfo2[3]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &com_FT60_2020a_M->NonInlinedSFcns.inputOutputPortInfo2[3]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, com_FT60_2020a_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &com_FT60_2020a_M->NonInlinedSFcns.methods2[3]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &com_FT60_2020a_M->NonInlinedSFcns.methods3[3]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &com_FT60_2020a_M->NonInlinedSFcns.methods4[3]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &com_FT60_2020a_M->NonInlinedSFcns.statesInfo2[3]);
        ssSetPeriodicStatesInfo(rts,
          &com_FT60_2020a_M->NonInlinedSFcns.periodicStatesInfo[3]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &com_FT60_2020a_M->NonInlinedSFcns.Sfcn3.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &com_FT60_2020a_M->NonInlinedSFcns.Sfcn3.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &com_FT60_2020a_M->NonInlinedSFcns.Sfcn3.inputPortCoSimAttribute[0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, &com_FT60_2020a_B.CastToSingle6);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &com_FT60_2020a_M->NonInlinedSFcns.Sfcn3.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &com_FT60_2020a_M->NonInlinedSFcns.Sfcn3.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &com_FT60_2020a_M->NonInlinedSFcns.Sfcn3.outputPortCoSimAttribute[0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((uint32_T *)
            &com_FT60_2020a_B.SharedMemoryPack));
        }
      }

      /* path info */
      ssSetModelName(rts, "Shared Memory Pack ");
      ssSetPath(rts, "com_FT60_2020a/Shared Memory Pack ");
      ssSetRTModel(rts,com_FT60_2020a_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &com_FT60_2020a_M->NonInlinedSFcns.Sfcn3.params;
        ssSetSFcnParamsCount(rts, 4);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       com_FT60_2020a_P.SharedMemoryPack_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       com_FT60_2020a_P.SharedMemoryPack_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       com_FT60_2020a_P.SharedMemoryPack_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       com_FT60_2020a_P.SharedMemoryPack_P4_Size);
      }

      /* registration */
      xpcany2dword(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.001);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetInputPortWidth(rts, 0, 1);
      ssSetInputPortDataType(rts, 0, SS_SINGLE);
      ssSetInputPortComplexSignal(rts, 0, 0);
      ssSetInputPortFrameData(rts, 0, 0);
      ssSetInputPortUnit(rts, 0, 0);
      ssSetInputPortIsContinuousQuantity(rts, 0, 0);
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: com_FT60_2020a/<Root>/Write  (sg_IO901_IO902_write_s) */
    {
      SimStruct *rts = com_FT60_2020a_M->childSfunctions[4];

      /* timing info */
      time_T *sfcnPeriod = com_FT60_2020a_M->NonInlinedSFcns.Sfcn4.sfcnPeriod;
      time_T *sfcnOffset = com_FT60_2020a_M->NonInlinedSFcns.Sfcn4.sfcnOffset;
      int_T *sfcnTsMap = com_FT60_2020a_M->NonInlinedSFcns.Sfcn4.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &com_FT60_2020a_M->NonInlinedSFcns.blkInfo2[4]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &com_FT60_2020a_M->NonInlinedSFcns.inputOutputPortInfo2[4]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, com_FT60_2020a_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &com_FT60_2020a_M->NonInlinedSFcns.methods2[4]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &com_FT60_2020a_M->NonInlinedSFcns.methods3[4]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &com_FT60_2020a_M->NonInlinedSFcns.methods4[4]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &com_FT60_2020a_M->NonInlinedSFcns.statesInfo2[4]);
        ssSetPeriodicStatesInfo(rts,
          &com_FT60_2020a_M->NonInlinedSFcns.periodicStatesInfo[4]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &com_FT60_2020a_M->NonInlinedSFcns.Sfcn4.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &com_FT60_2020a_M->NonInlinedSFcns.Sfcn4.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &com_FT60_2020a_M->NonInlinedSFcns.Sfcn4.inputPortCoSimAttribute[0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, &com_FT60_2020a_B.SharedMemoryPack);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "Write ");
      ssSetPath(rts, "com_FT60_2020a/Write ");
      ssSetRTModel(rts,com_FT60_2020a_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &com_FT60_2020a_M->NonInlinedSFcns.Sfcn4.params;
        ssSetSFcnParamsCount(rts, 5);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)com_FT60_2020a_P.Write_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)com_FT60_2020a_P.Write_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)com_FT60_2020a_P.Write_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)com_FT60_2020a_P.Write_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)com_FT60_2020a_P.Write_P5_Size);
      }

      /* work vectors */
      ssSetPWork(rts, (void **) &com_FT60_2020a_DW.Write_PWORK);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &com_FT60_2020a_M->NonInlinedSFcns.Sfcn4.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &com_FT60_2020a_M->NonInlinedSFcns.Sfcn4.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* PWORK */
        ssSetDWorkWidth(rts, 0, 1);
        ssSetDWorkDataType(rts, 0,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &com_FT60_2020a_DW.Write_PWORK);
      }

      /* registration */
      sg_IO901_IO902_write_s(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.001);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }
  }

  /* Initialize Sizes */
  com_FT60_2020a_M->Sizes.numContStates = (0);/* Number of continuous states */
  com_FT60_2020a_M->Sizes.numY = (0);  /* Number of model outputs */
  com_FT60_2020a_M->Sizes.numU = (0);  /* Number of model inputs */
  com_FT60_2020a_M->Sizes.sysDirFeedThru = (0);/* The model is not direct feedthrough */
  com_FT60_2020a_M->Sizes.numSampTimes = (2);/* Number of sample times */
  com_FT60_2020a_M->Sizes.numBlocks = (19);/* Number of blocks */
  com_FT60_2020a_M->Sizes.numBlockIO = (16);/* Number of block outputs */
  com_FT60_2020a_M->Sizes.numBlockPrms = (110);/* Sum of parameter "widths" */
  return com_FT60_2020a_M;
}

/*========================================================================*
 * End of Classic call interface                                          *
 *========================================================================*/
