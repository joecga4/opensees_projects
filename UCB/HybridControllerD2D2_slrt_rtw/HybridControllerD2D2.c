/*
 * HybridControllerD2D2.c
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "HybridControllerD2D2".
 *
 * Model version              : 1.536
 * Simulink Coder version : 9.3 (R2020a) 18-Nov-2019
 * C source code generated on : Mon Feb 24 20:08:06 2025
 *
 * Target selection: slrt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Generic->32-bit x86 compatible
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "rt_logging_mmi.h"
#include "HybridControllerD2D2_capi.h"
#include "HybridControllerD2D2.h"
#include "HybridControllerD2D2_private.h"

/* Named constants for Chart: '<S7>/Predictor-Corrector' */
#define HybridControlle_IN_AutoSlowDown (1U)
#define HybridControllerD2D2_IN_Correct (2U)
#define HybridControllerD2D2_IN_Predict (4U)
#define HybridControllerD_IN_Initialize (3U)

/* Block signals (default storage) */
B_HybridControllerD2D2_T HybridControllerD2D2_B;

/* Block states (default storage) */
DW_HybridControllerD2D2_T HybridControllerD2D2_DW;

/* Previous zero-crossings (trigger) states */
PrevZCX_HybridControllerD2D2_T HybridControllerD2D2_PrevZCX;

/* Real-time model */
RT_MODEL_HybridControllerD2D2_T HybridControllerD2D2_M_;
RT_MODEL_HybridControllerD2D2_T *const HybridControllerD2D2_M =
  &HybridControllerD2D2_M_;

/*
 * System initialize for action system:
 *    '<S48>/If Action Subsystem1'
 *    '<S48>/If Action Subsystem2'
 *    '<S46>/If Action Subsystem1'
 *    '<S46>/If Action Subsystem2'
 */
void HybridC_IfActionSubsystem1_Init(B_IfActionSubsystem1_HybridCo_T *localB,
  P_IfActionSubsystem1_HybridCo_T *localP)
{
  /* SystemInitialize for Outport: '<S49>/Out1' */
  localB->RelationalOperator = localP->Out1_Y0;
}

/*
 * Start for action system:
 *    '<S48>/If Action Subsystem1'
 *    '<S48>/If Action Subsystem2'
 *    '<S46>/If Action Subsystem1'
 *    '<S46>/If Action Subsystem2'
 */
void Hybrid_IfActionSubsystem1_Start(B_IfActionSubsystem1_HybridCo_T *localB)
{
  localB->RelationalOperator = false;
}

/*
 * Output and update for action system:
 *    '<S48>/If Action Subsystem1'
 *    '<S48>/If Action Subsystem2'
 *    '<S46>/If Action Subsystem1'
 *    '<S46>/If Action Subsystem2'
 */
void HybridContro_IfActionSubsystem1(real_T rtu_In1, real_T rtu_In2,
  B_IfActionSubsystem1_HybridCo_T *localB)
{
  /* RelationalOperator: '<S49>/Relational Operator' */
  localB->RelationalOperator = (rtu_In1 == rtu_In2);
}

/* Model output function */
static void HybridControllerD2D2_output(void)
{
  /* local block i/o variables */
  real_T rtb_ImpSel_InsertedFor_iDelay_a;

  /* local scratch DWork variables */
  int32_T ForEach_itr;
  int32_T ForEach_itr_b;
  real_T X[9];
  int32_T r1;
  int32_T r2;
  real_T maxval;
  int32_T rtemp;
  int32_T s7_iter;
  boolean_T zcEvent;
  real_T rtb_ImpSel_InsertedFor_commdisp;
  real_T rtb_ImpSel_InsertedFor_commvel_;
  real_T rtb_ImpSel_InsertedFor_commacce;
  real_T rtb_ImpSel_InsertedFor_measDsp_;
  real_T rtb_ImpSel_InsertedFor_measFrc_;
  real_T tmp;
  real_T tmp_0;
  real_T tmp_1;
  real_T tmp_2;
  real_T temp_idx_1;
  real_T temp_idx_2;
  uint32_T tmp_3;

  /* Reset subsysRan breadcrumbs */
  srClearBC(HybridControllerD2D2_DW.IfAction_SubsysRanBC_n);

  /* Reset subsysRan breadcrumbs */
  srClearBC(HybridControllerD2D2_DW.IfAction_SubsysRanBC);

  /* Reset subsysRan breadcrumbs */
  srClearBC(HybridControllerD2D2_DW.IfActionSubsystem0_SubsysRanBC);

  /* Reset subsysRan breadcrumbs */
  srClearBC(HybridControllerD2D2_DW.IfActionSubsystem1_SubsysRanBC);

  /* Reset subsysRan breadcrumbs */
  srClearBC(HybridControllerD2D2_DW.SubSystem2_SubsysRanBC);

  /* S-Function (sg_IO901_IO902_setup_s): '<Root>/Setup ' */

  /* Level2 S-Function Block: '<Root>/Setup ' (sg_IO901_IO902_setup_s) */
  {
    SimStruct *rts = HybridControllerD2D2_M->childSfunctions[0];
    sfcnOutputs(rts,0);
  }

  /* DataTypeConversion: '<S6>/typeConv1' incorporates:
   *  Constant: '<Root>/master span'
   */
  HybridControllerD2D2_B.typeConv1_p = (real32_T)
    HybridControllerD2D2_P.masterspan_Value;

  /* DataTypeConversion: '<S6>/typeConv2' incorporates:
   *  Constant: '<Root>/ctl modes'
   */
  maxval = HybridControllerD2D2_P.ctlmodes_Value;
  if (maxval < 4.294967296E+9) {
    if (maxval >= 0.0) {
      tmp_3 = (uint32_T)maxval;
    } else {
      tmp_3 = 0U;
    }
  } else {
    tmp_3 = MAX_uint32_T;
  }

  HybridControllerD2D2_B.typeConv2_i = tmp_3;

  /* End of DataTypeConversion: '<S6>/typeConv2' */

  /* S-Function (sg_IO901_IO902_read_s): '<S5>/Read ' */

  /* Level2 S-Function Block: '<S5>/Read ' (sg_IO901_IO902_read_s) */
  {
    SimStruct *rts = HybridControllerD2D2_M->childSfunctions[1];
    sfcnOutputs(rts,0);
  }

  /* S-Function (xpcdword2any): '<S5>/SCGT unpack' */

  /* Level2 S-Function Block: '<S5>/SCGT unpack' (xpcdword2any) */
  {
    SimStruct *rts = HybridControllerD2D2_M->childSfunctions[2];
    sfcnOutputs(rts,0);
  }

  /* DataTypeConversion: '<S5>/typeConv6' */
  HybridControllerD2D2_B.typeConv6 = HybridControllerD2D2_B.SCGTunpack_o6;

  /* DiscreteFir: '<S3>/MovingAverage Filter' */
  maxval = 1.0 / HybridControllerD2D2_P.MovingAverageFilter_numSample_c;
  HybridControllerD2D2_B.MovingAverageFilter = HybridControllerD2D2_B.typeConv6 *
    maxval;

  /* DataTypeConversion: '<S5>/typeConv7' */
  HybridControllerD2D2_B.typeConv7 = HybridControllerD2D2_B.SCGTunpack_o7;

  /* DiscreteFir: '<S4>/MovingAverage Filter1' */
  maxval = 1.0 / HybridControllerD2D2_P.MovingAverageFilter1_numSampl_b;
  HybridControllerD2D2_B.MovingAverageFilter1 = HybridControllerD2D2_B.typeConv7
    * maxval;

  /* Outputs for Iterator SubSystem: '<Root>/xPC HC' incorporates:
   *  ForIterator: '<S7>/For Iterator'
   */
  for (s7_iter = 1; s7_iter <= HybridControllerD2D2_P.xPCHC_upFact; s7_iter++) {
    /* Gain: '<S7>/Gain' incorporates:
     *  Constant: '<S7>/targSignal'
     */
    HybridControllerD2D2_B.Gain = HybridControllerD2D2_P.Gain_Gain *
      HybridControllerD2D2_P.targSignal_Value;

    /* Constant: '<S25>/Dummy Zero' */
    HybridControllerD2D2_B.DummyZero = HybridControllerD2D2_P.DummyZero_Value;

    /* Gain: '<S7>/Gain1' incorporates:
     *  Constant: '<S7>/newTarget'
     */
    HybridControllerD2D2_B.Gain1 = (int32_T)(((int64_T)
      HybridControllerD2D2_P.Gain1_Gain * HybridControllerD2D2_P.newTarget_Value)
      >> 30);

    /* RelationalOperator: '<S43>/Compare' incorporates:
     *  Constant: '<S43>/Constant'
     */
    HybridControllerD2D2_B.Compare = (uint8_T)(HybridControllerD2D2_B.Gain1 >
      HybridControllerD2D2_P.Constant_Value_h);

    /* UnitDelay: '<S39>/Delay Input1' */
    HybridControllerD2D2_B.Uk1 = HybridControllerD2D2_DW.DelayInput1_DSTATE;

    /* RelationalOperator: '<S39>/FixPt Relational Operator' */
    HybridControllerD2D2_B.FixPtRelationalOperator = (uint8_T)
      (HybridControllerD2D2_B.Compare > HybridControllerD2D2_B.Uk1);

    /* DataTypeConversion: '<S23>/typeConv' */
    HybridControllerD2D2_B.typeConv_j =
      HybridControllerD2D2_B.FixPtRelationalOperator;

    /* SignalConversion generated from: '<S22>/ SFunction ' incorporates:
     *  Chart: '<S7>/Predictor-Corrector'
     */
    HybridControllerD2D2_B.TmpSignalConversionAtSFunctionI[0] =
      HybridControllerD2D2_B.Gain;
    HybridControllerD2D2_B.TmpSignalConversionAtSFunctionI[1] =
      HybridControllerD2D2_B.DummyZero;

    /* Chart: '<S7>/Predictor-Corrector' */
    /* Gateway: xPC HC/Predictor-Corrector */
    HybridControllerD2D2_DW.sfEvent = -1;

    /* During: xPC HC/Predictor-Corrector */
    if (HybridControllerD2D2_DW.is_active_c2_HybridControllerD2 == 0U) {
      /* Entry: xPC HC/Predictor-Corrector */
      HybridControllerD2D2_DW.is_active_c2_HybridControllerD2 = 1U;

      /* Entry Internal: xPC HC/Predictor-Corrector */
      HybridControllerD2D2_DW.is_active_HybridController = 1U;

      /* Entry Internal 'HybridController': '<S22>:4' */
      /* Transition: '<S22>:7' */
      HybridControllerD2D2_DW.is_HybridController =
        HybridControllerD_IN_Initialize;

      /* Entry 'Initialize': '<S22>:2' */
      HybridControllerD2D2_B.i = 0.0;
      HybridControllerD2D2_DW.iSD = 0.0;
      HybridControllerD2D2_DW.diSD = 1.0;
      initData(HybridControllerD2D2_P.PredictorCorrector_nDOF,
               HybridControllerD2D2_P.HybridCtrlParameters.dtCon,
               HybridControllerD2D2_P.HybridCtrlParameters.dtSim,
               HybridControllerD2D2_P.HybridCtrlParameters.dtInt);
      zeroSig(HybridControllerD2D2_B.comD);
      zeroSig(HybridControllerD2D2_B.comV);
      zeroSig(HybridControllerD2D2_B.comA);
    } else {
      /* During 'HybridController': '<S22>:4' */
      switch (HybridControllerD2D2_DW.is_HybridController) {
       case HybridControlle_IN_AutoSlowDown:
        HybridControllerD2D2_B.state = 2;

        /* During 'AutoSlowDown': '<S22>:3' */
        if (HybridControllerD2D2_B.typeConv_j == 1) {
          /* Transition: '<S22>:10' */
          HybridControllerD2D2_DW.is_HybridController =
            HybridControllerD2D2_IN_Correct;

          /* Entry 'Correct': '<S22>:5' */
          HybridControllerD2D2_B.state = 0;
          setCurSig(HybridControllerD2D2_B.comD, HybridControllerD2D2_B.i /
                    (real_T)HybridControllerD2D2_P.PredictorCorrector_N);
          HybridControllerD2D2_DW.targLocal[0] =
            HybridControllerD2D2_B.TmpSignalConversionAtSFunctionI[0];
          HybridControllerD2D2_DW.targLocal[1] =
            HybridControllerD2D2_B.TmpSignalConversionAtSFunctionI[1];
          setNewSig(HybridControllerD2D2_DW.targLocal);
          maxval = 1.0 / (0.2 * (real_T)
                          HybridControllerD2D2_P.PredictorCorrector_N) *
            (HybridControllerD2D2_B.i - HybridControllerD2D2_DW.iSD) +
            HybridControllerD2D2_DW.diSD;
          if (!(maxval > 0.001)) {
            maxval = 0.001;
          }

          if (maxval < 1.0) {
            HybridControllerD2D2_DW.di = maxval;
          } else {
            HybridControllerD2D2_DW.di = 1.0;
          }

          maxval = HybridControllerD2D2_B.i + HybridControllerD2D2_DW.di;
          temp_idx_1 = HybridControllerD2D2_P.PredictorCorrector_N;
          if (maxval < temp_idx_1) {
            HybridControllerD2D2_B.i = maxval;
          } else {
            HybridControllerD2D2_B.i = temp_idx_1;
          }

          correctD2(HybridControllerD2D2_B.comD, HybridControllerD2D2_B.i /
                    (real_T)HybridControllerD2D2_P.PredictorCorrector_N);
          correctV2(HybridControllerD2D2_B.comV, HybridControllerD2D2_B.i /
                    (real_T)HybridControllerD2D2_P.PredictorCorrector_N);
          correctA2(HybridControllerD2D2_B.comA, HybridControllerD2D2_B.i /
                    (real_T)HybridControllerD2D2_P.PredictorCorrector_N);
        } else {
          HybridControllerD2D2_DW.diSD = 4.0 - HybridControllerD2D2_B.i / (0.2 *
            (real_T)HybridControllerD2D2_P.PredictorCorrector_N);
          HybridControllerD2D2_B.i += HybridControllerD2D2_DW.diSD;
          HybridControllerD2D2_DW.iSD = HybridControllerD2D2_B.i;
          predictD2(HybridControllerD2D2_B.comD, HybridControllerD2D2_B.i /
                    (real_T)HybridControllerD2D2_P.PredictorCorrector_N);
          predictV2(HybridControllerD2D2_B.comV, HybridControllerD2D2_B.i /
                    (real_T)HybridControllerD2D2_P.PredictorCorrector_N);
          predictA2(HybridControllerD2D2_B.comA, HybridControllerD2D2_B.i /
                    (real_T)HybridControllerD2D2_P.PredictorCorrector_N);
        }
        break;

       case HybridControllerD2D2_IN_Correct:
        HybridControllerD2D2_B.state = 0;

        /* During 'Correct': '<S22>:5' */
        if ((HybridControllerD2D2_B.i >=
             HybridControllerD2D2_P.PredictorCorrector_N) &&
            (HybridControllerD2D2_B.typeConv_j != 1)) {
          /* Transition: '<S22>:6' */
          HybridControllerD2D2_DW.is_HybridController =
            HybridControllerD2D2_IN_Predict;

          /* Entry 'Predict': '<S22>:1' */
          HybridControllerD2D2_B.state = 1;
          setCurSig(HybridControllerD2D2_B.comD, 1.0);
          HybridControllerD2D2_B.i = 1.0;
          HybridControllerD2D2_DW.iSD = 0.0;
          HybridControllerD2D2_DW.diSD = 1.0;
          predictD2(HybridControllerD2D2_B.comD, HybridControllerD2D2_B.i /
                    (real_T)HybridControllerD2D2_P.PredictorCorrector_N);
          predictV2(HybridControllerD2D2_B.comV, HybridControllerD2D2_B.i /
                    (real_T)HybridControllerD2D2_P.PredictorCorrector_N);
          predictA2(HybridControllerD2D2_B.comA, HybridControllerD2D2_B.i /
                    (real_T)HybridControllerD2D2_P.PredictorCorrector_N);
        } else if (HybridControllerD2D2_B.typeConv_j == 1) {
          /* Transition: '<S22>:26' */
          HybridControllerD2D2_B.i = 0.0;
          HybridControllerD2D2_DW.iSD = 0.0;
          HybridControllerD2D2_DW.diSD = 1.0;
          HybridControllerD2D2_DW.is_HybridController =
            HybridControllerD2D2_IN_Correct;

          /* Entry 'Correct': '<S22>:5' */
          HybridControllerD2D2_B.state = 0;
          setCurSig(HybridControllerD2D2_B.comD, HybridControllerD2D2_B.i /
                    (real_T)HybridControllerD2D2_P.PredictorCorrector_N);
          HybridControllerD2D2_DW.targLocal[0] =
            HybridControllerD2D2_B.TmpSignalConversionAtSFunctionI[0];
          HybridControllerD2D2_DW.targLocal[1] =
            HybridControllerD2D2_B.TmpSignalConversionAtSFunctionI[1];
          setNewSig(HybridControllerD2D2_DW.targLocal);
          maxval = 1.0 / (0.2 * (real_T)
                          HybridControllerD2D2_P.PredictorCorrector_N) *
            (HybridControllerD2D2_B.i - HybridControllerD2D2_DW.iSD) +
            HybridControllerD2D2_DW.diSD;
          if (!(maxval > 0.001)) {
            maxval = 0.001;
          }

          if (maxval < 1.0) {
            HybridControllerD2D2_DW.di = maxval;
          } else {
            HybridControllerD2D2_DW.di = 1.0;
          }

          maxval = HybridControllerD2D2_B.i + HybridControllerD2D2_DW.di;
          temp_idx_1 = HybridControllerD2D2_P.PredictorCorrector_N;
          if (maxval < temp_idx_1) {
            HybridControllerD2D2_B.i = maxval;
          } else {
            HybridControllerD2D2_B.i = temp_idx_1;
          }

          correctD2(HybridControllerD2D2_B.comD, HybridControllerD2D2_B.i /
                    (real_T)HybridControllerD2D2_P.PredictorCorrector_N);
          correctV2(HybridControllerD2D2_B.comV, HybridControllerD2D2_B.i /
                    (real_T)HybridControllerD2D2_P.PredictorCorrector_N);
          correctA2(HybridControllerD2D2_B.comA, HybridControllerD2D2_B.i /
                    (real_T)HybridControllerD2D2_P.PredictorCorrector_N);
        } else {
          maxval = 1.0 / (0.2 * (real_T)
                          HybridControllerD2D2_P.PredictorCorrector_N) *
            (HybridControllerD2D2_B.i - HybridControllerD2D2_DW.iSD) +
            HybridControllerD2D2_DW.diSD;
          if (!(maxval > 0.001)) {
            maxval = 0.001;
          }

          if (maxval < 1.0) {
            HybridControllerD2D2_DW.di = maxval;
          } else {
            HybridControllerD2D2_DW.di = 1.0;
          }

          maxval = HybridControllerD2D2_B.i + HybridControllerD2D2_DW.di;
          temp_idx_1 = HybridControllerD2D2_P.PredictorCorrector_N;
          if (maxval < temp_idx_1) {
            HybridControllerD2D2_B.i = maxval;
          } else {
            HybridControllerD2D2_B.i = temp_idx_1;
          }

          correctD2(HybridControllerD2D2_B.comD, HybridControllerD2D2_B.i /
                    (real_T)HybridControllerD2D2_P.PredictorCorrector_N);
          correctV2(HybridControllerD2D2_B.comV, HybridControllerD2D2_B.i /
                    (real_T)HybridControllerD2D2_P.PredictorCorrector_N);
          correctA2(HybridControllerD2D2_B.comA, HybridControllerD2D2_B.i /
                    (real_T)HybridControllerD2D2_P.PredictorCorrector_N);
        }
        break;

       case HybridControllerD_IN_Initialize:
        /* During 'Initialize': '<S22>:2' */
        if (HybridControllerD2D2_B.typeConv_j == 1) {
          /* Transition: '<S22>:9' */
          HybridControllerD2D2_DW.is_HybridController =
            HybridControllerD2D2_IN_Correct;

          /* Entry 'Correct': '<S22>:5' */
          HybridControllerD2D2_B.state = 0;
          setCurSig(HybridControllerD2D2_B.comD, HybridControllerD2D2_B.i /
                    (real_T)HybridControllerD2D2_P.PredictorCorrector_N);
          HybridControllerD2D2_DW.targLocal[0] =
            HybridControllerD2D2_B.TmpSignalConversionAtSFunctionI[0];
          HybridControllerD2D2_DW.targLocal[1] =
            HybridControllerD2D2_B.TmpSignalConversionAtSFunctionI[1];
          setNewSig(HybridControllerD2D2_DW.targLocal);
          maxval = 1.0 / (0.2 * (real_T)
                          HybridControllerD2D2_P.PredictorCorrector_N) *
            (HybridControllerD2D2_B.i - HybridControllerD2D2_DW.iSD) +
            HybridControllerD2D2_DW.diSD;
          if (!(maxval > 0.001)) {
            maxval = 0.001;
          }

          if (maxval < 1.0) {
            HybridControllerD2D2_DW.di = maxval;
          } else {
            HybridControllerD2D2_DW.di = 1.0;
          }

          maxval = HybridControllerD2D2_B.i + HybridControllerD2D2_DW.di;
          temp_idx_1 = HybridControllerD2D2_P.PredictorCorrector_N;
          if (maxval < temp_idx_1) {
            HybridControllerD2D2_B.i = maxval;
          } else {
            HybridControllerD2D2_B.i = temp_idx_1;
          }

          correctD2(HybridControllerD2D2_B.comD, HybridControllerD2D2_B.i /
                    (real_T)HybridControllerD2D2_P.PredictorCorrector_N);
          correctV2(HybridControllerD2D2_B.comV, HybridControllerD2D2_B.i /
                    (real_T)HybridControllerD2D2_P.PredictorCorrector_N);
          correctA2(HybridControllerD2D2_B.comA, HybridControllerD2D2_B.i /
                    (real_T)HybridControllerD2D2_P.PredictorCorrector_N);
        }
        break;

       default:
        HybridControllerD2D2_B.state = 1;

        /* During 'Predict': '<S22>:1' */
        if ((HybridControllerD2D2_B.i >= 0.6 * (real_T)
             HybridControllerD2D2_P.PredictorCorrector_N) &&
            (HybridControllerD2D2_B.typeConv_j != 1)) {
          /* Transition: '<S22>:11' */
          HybridControllerD2D2_DW.is_HybridController =
            HybridControlle_IN_AutoSlowDown;

          /* Entry 'AutoSlowDown': '<S22>:3' */
          HybridControllerD2D2_B.state = 2;
          HybridControllerD2D2_DW.diSD = 4.0 - HybridControllerD2D2_B.i / (0.2 *
            (real_T)HybridControllerD2D2_P.PredictorCorrector_N);
          HybridControllerD2D2_B.i += HybridControllerD2D2_DW.diSD;
          HybridControllerD2D2_DW.iSD = HybridControllerD2D2_B.i;
          predictD2(HybridControllerD2D2_B.comD, HybridControllerD2D2_B.i /
                    (real_T)HybridControllerD2D2_P.PredictorCorrector_N);
          predictV2(HybridControllerD2D2_B.comV, HybridControllerD2D2_B.i /
                    (real_T)HybridControllerD2D2_P.PredictorCorrector_N);
          predictA2(HybridControllerD2D2_B.comA, HybridControllerD2D2_B.i /
                    (real_T)HybridControllerD2D2_P.PredictorCorrector_N);
        } else if (HybridControllerD2D2_B.typeConv_j == 1) {
          /* Transition: '<S22>:8' */
          HybridControllerD2D2_DW.is_HybridController =
            HybridControllerD2D2_IN_Correct;

          /* Entry 'Correct': '<S22>:5' */
          HybridControllerD2D2_B.state = 0;
          setCurSig(HybridControllerD2D2_B.comD, HybridControllerD2D2_B.i /
                    (real_T)HybridControllerD2D2_P.PredictorCorrector_N);
          HybridControllerD2D2_DW.targLocal[0] =
            HybridControllerD2D2_B.TmpSignalConversionAtSFunctionI[0];
          HybridControllerD2D2_DW.targLocal[1] =
            HybridControllerD2D2_B.TmpSignalConversionAtSFunctionI[1];
          setNewSig(HybridControllerD2D2_DW.targLocal);
          maxval = 1.0 / (0.2 * (real_T)
                          HybridControllerD2D2_P.PredictorCorrector_N) *
            (HybridControllerD2D2_B.i - HybridControllerD2D2_DW.iSD) +
            HybridControllerD2D2_DW.diSD;
          if (!(maxval > 0.001)) {
            maxval = 0.001;
          }

          if (maxval < 1.0) {
            HybridControllerD2D2_DW.di = maxval;
          } else {
            HybridControllerD2D2_DW.di = 1.0;
          }

          maxval = HybridControllerD2D2_B.i + HybridControllerD2D2_DW.di;
          temp_idx_1 = HybridControllerD2D2_P.PredictorCorrector_N;
          if (maxval < temp_idx_1) {
            HybridControllerD2D2_B.i = maxval;
          } else {
            HybridControllerD2D2_B.i = temp_idx_1;
          }

          correctD2(HybridControllerD2D2_B.comD, HybridControllerD2D2_B.i /
                    (real_T)HybridControllerD2D2_P.PredictorCorrector_N);
          correctV2(HybridControllerD2D2_B.comV, HybridControllerD2D2_B.i /
                    (real_T)HybridControllerD2D2_P.PredictorCorrector_N);
          correctA2(HybridControllerD2D2_B.comA, HybridControllerD2D2_B.i /
                    (real_T)HybridControllerD2D2_P.PredictorCorrector_N);
        } else {
          HybridControllerD2D2_B.i++;
          predictD2(HybridControllerD2D2_B.comD, HybridControllerD2D2_B.i /
                    (real_T)HybridControllerD2D2_P.PredictorCorrector_N);
          predictV2(HybridControllerD2D2_B.comV, HybridControllerD2D2_B.i /
                    (real_T)HybridControllerD2D2_P.PredictorCorrector_N);
          predictA2(HybridControllerD2D2_B.comA, HybridControllerD2D2_B.i /
                    (real_T)HybridControllerD2D2_P.PredictorCorrector_N);
        }
        break;
      }
    }

    /* DataStoreWrite: '<S7>/Data Store Write' */
    HybridControllerD2D2_DW.counter = HybridControllerD2D2_B.i;

    /* If: '<S23>/If0' */
    if (HybridControllerD2D2_B.FixPtRelationalOperator == 1) {
      /* Outputs for IfAction SubSystem: '<S23>/If Action Subsystem0' incorporates:
       *  ActionPort: '<S40>/Action Port'
       */
      /* DataStoreWrite: '<S40>/Data Store Write0' incorporates:
       *  Constant: '<S40>/switchFlag'
       */
      HybridControllerD2D2_DW.sFlag = HybridControllerD2D2_P.switchFlag_Value;

      /* DataStoreWrite: '<S40>/Data Store Write1' incorporates:
       *  Constant: '<S40>/atTargetFlag'
       */
      HybridControllerD2D2_DW.tFlag = HybridControllerD2D2_P.atTargetFlag_Value;

      /* End of Outputs for SubSystem: '<S23>/If Action Subsystem0' */

      /* Update for IfAction SubSystem: '<S23>/If Action Subsystem0' incorporates:
       *  ActionPort: '<S40>/Action Port'
       */
      /* Update for If: '<S23>/If0' */
      HybridControllerD2D2_DW.IfActionSubsystem0_SubsysRanBC = 4;

      /* End of Update for SubSystem: '<S23>/If Action Subsystem0' */
    }

    /* End of If: '<S23>/If0' */

    /* RelationalOperator: '<S42>/Compare' incorporates:
     *  Constant: '<S42>/Constant'
     */
    HybridControllerD2D2_B.Compare_j = (uint8_T)(HybridControllerD2D2_B.Gain1 <=
      HybridControllerD2D2_P.Constant_Value_e);

    /* UnitDelay: '<S38>/Delay Input1' */
    HybridControllerD2D2_B.Uk1_j = HybridControllerD2D2_DW.DelayInput1_DSTATE_a;

    /* RelationalOperator: '<S38>/FixPt Relational Operator' */
    HybridControllerD2D2_B.FixPtRelationalOperator_g = (uint8_T)
      (HybridControllerD2D2_B.Compare_j > HybridControllerD2D2_B.Uk1_j);

    /* If: '<S23>/If1' */
    if (HybridControllerD2D2_B.FixPtRelationalOperator_g == 1) {
      /* Outputs for IfAction SubSystem: '<S23>/If Action Subsystem1' incorporates:
       *  ActionPort: '<S41>/Action Port'
       */
      /* DataStoreWrite: '<S41>/Data Store Write0' incorporates:
       *  Constant: '<S41>/switchFlag'
       */
      HybridControllerD2D2_DW.sFlag = HybridControllerD2D2_P.switchFlag_Value_l;

      /* End of Outputs for SubSystem: '<S23>/If Action Subsystem1' */

      /* Update for IfAction SubSystem: '<S23>/If Action Subsystem1' incorporates:
       *  ActionPort: '<S41>/Action Port'
       */
      /* Update for If: '<S23>/If1' */
      HybridControllerD2D2_DW.IfActionSubsystem1_SubsysRanBC = 4;

      /* End of Update for SubSystem: '<S23>/If Action Subsystem1' */
    }

    /* End of If: '<S23>/If1' */

    /* UnitDelay: '<S34>/Output' */
    HybridControllerD2D2_B.Output = HybridControllerD2D2_DW.Output_DSTATE;

    /* DataTypeConversion: '<S21>/typeConv' */
    HybridControllerD2D2_B.typeConv = HybridControllerD2D2_B.Output;

    /* Switch: '<S21>/Switch' incorporates:
     *  Constant: '<S21>/Constant'
     */
    if (HybridControllerD2D2_B.typeConv >=
        HybridControllerD2D2_P.Offset2_nOffset) {
      /* DataStoreRead: '<S21>/Data Store Read' */
      HybridControllerD2D2_B.DataStoreRead_c = HybridControllerD2D2_DW.x10;

      /* Sum: '<S21>/Sum1' */
      HybridControllerD2D2_B.Sum1 = HybridControllerD2D2_B.MovingAverageFilter -
        HybridControllerD2D2_B.DataStoreRead_c;
      HybridControllerD2D2_B.Switch = HybridControllerD2D2_B.Sum1;
    } else {
      HybridControllerD2D2_B.Switch = HybridControllerD2D2_P.Constant_Value_k;
    }

    /* End of Switch: '<S21>/Switch' */

    /* DiscreteFir: '<S7>/MovingAverage Filter' */
    maxval = 1.0 / HybridControllerD2D2_P.MovingAverageFilter_numSample;
    HybridControllerD2D2_B.MovingAverageFilter_p = HybridControllerD2D2_B.Switch
      * maxval;

    /* UnitDelay: '<S30>/Output' */
    HybridControllerD2D2_B.Output_b = HybridControllerD2D2_DW.Output_DSTATE_f;

    /* DataTypeConversion: '<S20>/typeConv' */
    HybridControllerD2D2_B.typeConv_p = HybridControllerD2D2_B.Output_b;

    /* Switch: '<S20>/Switch' incorporates:
     *  Constant: '<S20>/Constant'
     */
    if (HybridControllerD2D2_B.typeConv_p >=
        HybridControllerD2D2_P.Offset1_nOffset) {
      /* DataStoreRead: '<S20>/Data Store Read' */
      HybridControllerD2D2_B.DataStoreRead_k = HybridControllerD2D2_DW.x0;

      /* Sum: '<S20>/Sum1' */
      HybridControllerD2D2_B.Sum1_d =
        HybridControllerD2D2_B.MovingAverageFilter1 -
        HybridControllerD2D2_B.DataStoreRead_k;
      HybridControllerD2D2_B.Switch_h = HybridControllerD2D2_B.Sum1_d;
    } else {
      HybridControllerD2D2_B.Switch_h = HybridControllerD2D2_P.Constant_Value;
    }

    /* End of Switch: '<S20>/Switch' */

    /* DiscreteFir: '<S7>/MovingAverage Filter1' */
    maxval = 1.0 / HybridControllerD2D2_P.MovingAverageFilter1_numSample;
    HybridControllerD2D2_B.MovingAverageFilter1_j =
      HybridControllerD2D2_B.Switch_h * maxval;

    /* If: '<S20>/If' */
    if (HybridControllerD2D2_B.typeConv_p < -1.0) {
      /* Outputs for IfAction SubSystem: '<S20>/If Action' incorporates:
       *  ActionPort: '<S31>/Action Port'
       */
      /* Gain: '<S31>/Gain' */
      maxval = 1.0 / HybridControllerD2D2_P.Offset1_nOffset;
      HybridControllerD2D2_B.Gain_n = maxval *
        HybridControllerD2D2_B.MovingAverageFilter1;

      /* DataStoreRead: '<S31>/Data Store Read' */
      HybridControllerD2D2_B.DataStoreRead_p = HybridControllerD2D2_DW.x0;

      /* Sum: '<S31>/Sum' */
      HybridControllerD2D2_B.Sum_n = HybridControllerD2D2_B.Gain_n +
        HybridControllerD2D2_B.DataStoreRead_p;

      /* DataStoreWrite: '<S31>/Data Store Write' */
      HybridControllerD2D2_DW.x0 = HybridControllerD2D2_B.Sum_n;

      /* End of Outputs for SubSystem: '<S20>/If Action' */

      /* Update for IfAction SubSystem: '<S20>/If Action' incorporates:
       *  ActionPort: '<S31>/Action Port'
       */
      /* Update for If: '<S20>/If' */
      HybridControllerD2D2_DW.IfAction_SubsysRanBC_n = 4;

      /* End of Update for SubSystem: '<S20>/If Action' */
    }

    /* End of If: '<S20>/If' */

    /* Sum: '<S32>/FixPt Sum1' incorporates:
     *  Constant: '<S32>/FixPt Constant'
     */
    HybridControllerD2D2_B.FixPtSum1 = HybridControllerD2D2_B.Output_b +
      HybridControllerD2D2_P.FixPtConstant_Value;

    /* Switch: '<S33>/FixPt Switch' incorporates:
     *  Constant: '<S33>/Constant'
     */
    if (HybridControllerD2D2_B.FixPtSum1 >
        HybridControllerD2D2_P.WrapToZero_Threshold) {
      HybridControllerD2D2_B.FixPtSwitch =
        HybridControllerD2D2_P.Constant_Value_d;
    } else {
      HybridControllerD2D2_B.FixPtSwitch = HybridControllerD2D2_B.FixPtSum1;
    }

    /* End of Switch: '<S33>/FixPt Switch' */

    /* If: '<S21>/If' */
    if (HybridControllerD2D2_B.typeConv < -1.0) {
      /* Outputs for IfAction SubSystem: '<S21>/If Action' incorporates:
       *  ActionPort: '<S35>/Action Port'
       */
      /* Gain: '<S35>/Gain' */
      maxval = 1.0 / HybridControllerD2D2_P.Offset2_nOffset;
      HybridControllerD2D2_B.Gain_a = maxval *
        HybridControllerD2D2_B.MovingAverageFilter;

      /* DataStoreRead: '<S35>/Data Store Read' */
      HybridControllerD2D2_B.DataStoreRead = HybridControllerD2D2_DW.x10;

      /* Sum: '<S35>/Sum' */
      HybridControllerD2D2_B.Sum = HybridControllerD2D2_B.Gain_a +
        HybridControllerD2D2_B.DataStoreRead;

      /* DataStoreWrite: '<S35>/Data Store Write' */
      HybridControllerD2D2_DW.x10 = HybridControllerD2D2_B.Sum;

      /* End of Outputs for SubSystem: '<S21>/If Action' */

      /* Update for IfAction SubSystem: '<S21>/If Action' incorporates:
       *  ActionPort: '<S35>/Action Port'
       */
      /* Update for If: '<S21>/If' */
      HybridControllerD2D2_DW.IfAction_SubsysRanBC = 4;

      /* End of Update for SubSystem: '<S21>/If Action' */
    }

    /* End of If: '<S21>/If' */

    /* Sum: '<S36>/FixPt Sum1' incorporates:
     *  Constant: '<S36>/FixPt Constant'
     */
    HybridControllerD2D2_B.FixPtSum1_a = HybridControllerD2D2_B.Output +
      HybridControllerD2D2_P.FixPtConstant_Value_b;

    /* Switch: '<S37>/FixPt Switch' incorporates:
     *  Constant: '<S37>/Constant'
     */
    if (HybridControllerD2D2_B.FixPtSum1_a >
        HybridControllerD2D2_P.WrapToZero_Threshold_f) {
      HybridControllerD2D2_B.FixPtSwitch_m =
        HybridControllerD2D2_P.Constant_Value_p;
    } else {
      HybridControllerD2D2_B.FixPtSwitch_m = HybridControllerD2D2_B.FixPtSum1_a;
    }

    /* End of Switch: '<S37>/FixPt Switch' */

    /* DataStoreRead: '<S7>/counter' */
    HybridControllerD2D2_B.counter = HybridControllerD2D2_DW.counter;

    /* If: '<S46>/If' incorporates:
     *  Constant: '<S46>/Constant'
     *  Constant: '<S46>/Constant1'
     */
    if (HybridControllerD2D2_P.Constant_Value_m == 0.0) {
      /* Outputs for IfAction SubSystem: '<S46>/If Action Subsystem1' incorporates:
       *  ActionPort: '<S51>/Action Port'
       */
      HybridContro_IfActionSubsystem1(HybridControllerD2D2_P.Constant1_Value,
        HybridControllerD2D2_B.counter,
        &HybridControllerD2D2_B.IfActionSubsystem1_h);

      /* End of Outputs for SubSystem: '<S46>/If Action Subsystem1' */
    } else {
      /* Outputs for IfAction SubSystem: '<S46>/If Action Subsystem2' incorporates:
       *  ActionPort: '<S52>/Action Port'
       */
      HybridContro_IfActionSubsystem1(HybridControllerD2D2_B.counter,
        HybridControllerD2D2_P.Constant_Value_m,
        &HybridControllerD2D2_B.IfActionSubsystem2);

      /* End of Outputs for SubSystem: '<S46>/If Action Subsystem2' */
    }

    /* End of If: '<S46>/If' */

    /* Sum: '<S46>/Add' */
    HybridControllerD2D2_B.Add = (uint8_T)((uint32_T)
      HybridControllerD2D2_B.IfActionSubsystem1_h.RelationalOperator +
      HybridControllerD2D2_B.IfActionSubsystem2.RelationalOperator);

    /* Outputs for Triggered SubSystem: '<S24>/SubSystem2' incorporates:
     *  TriggerPort: '<S45>/Trigger'
     */
    zcEvent = ((HybridControllerD2D2_B.Add > 0) &&
               (HybridControllerD2D2_PrevZCX.SubSystem2_Trig_ZCE != 1));
    if (zcEvent) {
      /* DataStoreWrite: '<S45>/Data Store Write' incorporates:
       *  Constant: '<S45>/atTargetFlag'
       */
      HybridControllerD2D2_DW.tFlag =
        HybridControllerD2D2_P.atTargetFlag_Value_e;
      HybridControllerD2D2_DW.SubSystem2_SubsysRanBC = 4;
    }

    HybridControllerD2D2_PrevZCX.SubSystem2_Trig_ZCE = (ZCSigState)
      (HybridControllerD2D2_B.Add > 0);

    /* End of Outputs for SubSystem: '<S24>/SubSystem2' */

    /* Outputs for Iterator SubSystem: '<S24>/For Each Subsystem' incorporates:
     *  ForEach: '<S44>/For Each'
     */
    for (ForEach_itr = 0; ForEach_itr < 1; ForEach_itr++) {
      /* ForEachSliceSelector generated from: '<S44>/measDsp' */
      rtb_ImpSel_InsertedFor_measDsp_ =
        HybridControllerD2D2_B.MovingAverageFilter_p;

      /* ForEachSliceSelector generated from: '<S44>/measFrc' */
      rtb_ImpSel_InsertedFor_measFrc_ =
        HybridControllerD2D2_B.MovingAverageFilter1_j;

      /* ForEachSliceSelector generated from: '<S44>/iDelay' incorporates:
       *  Constant: '<S24>/Constant'
       */
      rtb_ImpSel_InsertedFor_iDelay_a =
        HybridControllerD2D2_P.HybridCtrlParameters.iDelay;

      /* If: '<S48>/If' incorporates:
       *  Constant: '<S48>/Constant1'
       */
      if (rtb_ImpSel_InsertedFor_iDelay_a == 0.0) {
        /* Outputs for IfAction SubSystem: '<S48>/If Action Subsystem1' incorporates:
         *  ActionPort: '<S49>/Action Port'
         */
        HybridContro_IfActionSubsystem1
          (HybridControllerD2D2_P.CoreSubsys_p.Constant1_Value,
           HybridControllerD2D2_B.counter,
           &HybridControllerD2D2_B.CoreSubsys_p[ForEach_itr].IfActionSubsystem1);

        /* End of Outputs for SubSystem: '<S48>/If Action Subsystem1' */
      } else {
        /* Outputs for IfAction SubSystem: '<S48>/If Action Subsystem2' incorporates:
         *  ActionPort: '<S50>/Action Port'
         */
        HybridContro_IfActionSubsystem1(HybridControllerD2D2_B.counter,
          rtb_ImpSel_InsertedFor_iDelay_a,
          &HybridControllerD2D2_B.CoreSubsys_p[ForEach_itr].IfActionSubsystem2);

        /* End of Outputs for SubSystem: '<S48>/If Action Subsystem2' */
      }

      /* End of If: '<S48>/If' */

      /* Sum: '<S48>/Add' */
      HybridControllerD2D2_B.CoreSubsys_p[ForEach_itr].Add = (uint8_T)((uint32_T)
        HybridControllerD2D2_B.CoreSubsys_p[ForEach_itr].
        IfActionSubsystem1.RelationalOperator +
        HybridControllerD2D2_B.CoreSubsys_p[ForEach_itr].
        IfActionSubsystem2.RelationalOperator);

      /* Outputs for Triggered SubSystem: '<S44>/SubSystem' incorporates:
       *  TriggerPort: '<S47>/Trigger'
       */
      zcEvent = ((HybridControllerD2D2_B.CoreSubsys_p[ForEach_itr].Add > 0) &&
                 (HybridControllerD2D2_PrevZCX.CoreSubsys_p[ForEach_itr].
                  SubSystem_Trig_ZCE != 1));
      if (zcEvent) {
        /* Inport: '<S47>/measDsp In' */
        HybridControllerD2D2_B.CoreSubsys_p[ForEach_itr].measDspIn =
          rtb_ImpSel_InsertedFor_measDsp_;

        /* Inport: '<S47>/measFrc In' */
        HybridControllerD2D2_B.CoreSubsys_p[ForEach_itr].measFrcIn =
          rtb_ImpSel_InsertedFor_measFrc_;
        HybridControllerD2D2_DW.CoreSubsys_p[ForEach_itr].SubSystem_SubsysRanBC =
          4;
      }

      HybridControllerD2D2_PrevZCX.CoreSubsys_p[ForEach_itr].SubSystem_Trig_ZCE =
        (ZCSigState)(HybridControllerD2D2_B.CoreSubsys_p[ForEach_itr].Add > 0);

      /* End of Outputs for SubSystem: '<S44>/SubSystem' */

      /* SignalConversion generated from: '<S44>/measSig' */
      HybridControllerD2D2_B.CoreSubsys_p[ForEach_itr].
        TmpSignalConversionAtImpAsg_Ins[0] =
        HybridControllerD2D2_B.CoreSubsys_p[ForEach_itr].measDspIn;
      HybridControllerD2D2_B.CoreSubsys_p[ForEach_itr].
        TmpSignalConversionAtImpAsg_Ins[1] =
        HybridControllerD2D2_B.CoreSubsys_p[ForEach_itr].measFrcIn;

      /* ForEachSliceAssignment generated from: '<S44>/measSig' */
      HybridControllerD2D2_B.ImpAsg_InsertedFor_measSig_at_i[ForEach_itr << 1] =
        HybridControllerD2D2_B.CoreSubsys_p[ForEach_itr].
        TmpSignalConversionAtImpAsg_Ins[0];
      HybridControllerD2D2_B.ImpAsg_InsertedFor_measSig_at_i[(ForEach_itr << 1)
        + 1] = HybridControllerD2D2_B.CoreSubsys_p[ForEach_itr].
        TmpSignalConversionAtImpAsg_Ins[1];
    }

    /* End of Outputs for SubSystem: '<S24>/For Each Subsystem' */

    /* Gain: '<S24>/Gain4' */
    HybridControllerD2D2_B.Gain4[0] = HybridControllerD2D2_P.Gain4_Gain *
      HybridControllerD2D2_B.ImpAsg_InsertedFor_measSig_at_i[0];
    HybridControllerD2D2_B.Gain4[1] = HybridControllerD2D2_P.Gain4_Gain *
      HybridControllerD2D2_B.ImpAsg_InsertedFor_measSig_at_i[1];

    /* DataTypeConversion: '<S29>/typeConv1' */
    HybridControllerD2D2_B.typeConv1_c = HybridControllerD2D2_B.counter;

    /* DataStoreRead: '<S7>/switchPC' */
    HybridControllerD2D2_B.switchPC = HybridControllerD2D2_DW.sFlag;

    /* DataStoreRead: '<S7>/atTarget' */
    HybridControllerD2D2_B.atTarget = HybridControllerD2D2_DW.tFlag;

    /* DataTypeConversion: '<S29>/typeConv2' */
    HybridControllerD2D2_B.typeConv2[0] = HybridControllerD2D2_B.Gain1;
    HybridControllerD2D2_B.typeConv2[1] = HybridControllerD2D2_B.switchPC;
    HybridControllerD2D2_B.typeConv2[2] = HybridControllerD2D2_B.atTarget;

    /* DataTypeConversion: '<S29>/typeConv3' */
    HybridControllerD2D2_B.typeConv3_h = HybridControllerD2D2_B.state;

    /* Gain: '<S7>/measSignal' */
    HybridControllerD2D2_B.measSignal[0] =
      HybridControllerD2D2_P.measSignal_Gain * HybridControllerD2D2_B.Gain4[0];
    HybridControllerD2D2_B.measSignal[1] =
      HybridControllerD2D2_P.measSignal_Gain * HybridControllerD2D2_B.Gain4[1];

    /* Update for UnitDelay: '<S39>/Delay Input1' */
    HybridControllerD2D2_DW.DelayInput1_DSTATE = HybridControllerD2D2_B.Compare;

    /* Update for UnitDelay: '<S38>/Delay Input1' */
    HybridControllerD2D2_DW.DelayInput1_DSTATE_a =
      HybridControllerD2D2_B.Compare_j;

    /* Update for UnitDelay: '<S34>/Output' */
    HybridControllerD2D2_DW.Output_DSTATE = HybridControllerD2D2_B.FixPtSwitch_m;

    /* Update for UnitDelay: '<S30>/Output' */
    HybridControllerD2D2_DW.Output_DSTATE_f = HybridControllerD2D2_B.FixPtSwitch;
  }

  /* End of Outputs for SubSystem: '<Root>/xPC HC' */

  /* Outputs for Iterator SubSystem: '<Root>/ATS compensator' incorporates:
   *  ForEach: '<S1>/For Each'
   */
  for (ForEach_itr_b = 0; ForEach_itr_b < 1; ForEach_itr_b++) {
    /* ForEachSliceSelector generated from: '<S1>/comm disp' */
    rtb_ImpSel_InsertedFor_commdisp = HybridControllerD2D2_B.comD[0];

    /* ForEachSliceSelector generated from: '<S1>/comm vel' */
    rtb_ImpSel_InsertedFor_commvel_ = HybridControllerD2D2_B.comV[0];

    /* ForEachSliceSelector generated from: '<S1>/comm accel' */
    rtb_ImpSel_InsertedFor_commacce = HybridControllerD2D2_B.comA[0];

    /* DiscreteTransferFcn: '<S1>/Butterworth filter' */
    r2 = 1;
    maxval = 0.0;
    rtemp = 1;
    for (r1 = 0; r1 < 6; r1++) {
      maxval += HybridControllerD2D2_P.Znum[rtemp] *
        HybridControllerD2D2_DW.CoreSubsys[ForEach_itr_b].
        Butterworthfilter_states[r1];
      rtemp++;
    }

    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].Butterworthfilter = maxval;

    /* End of DiscreteTransferFcn: '<S1>/Butterworth filter' */

    /* DiscreteTransferFcn: '<S1>/Butterworth filter1' */
    maxval = 0.0;
    rtemp = 1;
    for (r1 = 0; r1 < 6; r1++) {
      maxval += HybridControllerD2D2_P.Znum[rtemp] *
        HybridControllerD2D2_DW.CoreSubsys[ForEach_itr_b].
        Butterworthfilter1_states[r1];
      rtemp++;
    }

    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].Butterworthfilter1 = maxval;

    /* End of DiscreteTransferFcn: '<S1>/Butterworth filter1' */

    /* S-Function (sfix_udelay): '<S12>/Tapped Delay' */
    memcpy(&HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TappedDelay[0],
           &HybridControllerD2D2_DW.CoreSubsys[ForEach_itr_b].TappedDelay_X[0],
           sizeof(real_T) << 10U);

    /* SignalConversion generated from: '<S9>/Dot Product' */
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].xm[0] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TappedDelay[0];
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].xm[1] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TappedDelay[16];
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].xm[2] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TappedDelay[32];
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].xm[3] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TappedDelay[48];
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].xm[4] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TappedDelay[64];
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].xm[5] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TappedDelay[80];
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].xm[6] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TappedDelay[96];
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].xm[7] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TappedDelay[112];
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].xm[8] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TappedDelay[128];
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].xm[9] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TappedDelay[144];
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].xm[10] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TappedDelay[160];
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].xm[11] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TappedDelay[176];
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].xm[12] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TappedDelay[192];
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].xm[13] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TappedDelay[208];
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].xm[14] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TappedDelay[224];
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].xm[15] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TappedDelay[240];
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].xm[16] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TappedDelay[256];
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].xm[17] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TappedDelay[272];
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].xm[18] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TappedDelay[288];
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].xm[19] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TappedDelay[304];
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].xm[20] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TappedDelay[320];
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].xm[21] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TappedDelay[336];
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].xm[22] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TappedDelay[352];
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].xm[23] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TappedDelay[368];
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].xm[24] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TappedDelay[384];
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].xm[25] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TappedDelay[400];
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].xm[26] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TappedDelay[416];
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].xm[27] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TappedDelay[432];
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].xm[28] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TappedDelay[448];
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].xm[29] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TappedDelay[464];
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].xm[30] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TappedDelay[480];
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].xm[31] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TappedDelay[496];
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].xm[32] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TappedDelay[512];
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].xm[33] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TappedDelay[528];
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].xm[34] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TappedDelay[544];
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].xm[35] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TappedDelay[560];
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].xm[36] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TappedDelay[576];
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].xm[37] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TappedDelay[592];
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].xm[38] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TappedDelay[608];
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].xm[39] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TappedDelay[624];
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].xm[40] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TappedDelay[640];
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].xm[41] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TappedDelay[656];
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].xm[42] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TappedDelay[672];
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].xm[43] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TappedDelay[688];
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].xm[44] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TappedDelay[704];
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].xm[45] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TappedDelay[720];
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].xm[46] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TappedDelay[736];
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].xm[47] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TappedDelay[752];
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].xm[48] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TappedDelay[768];
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].xm[49] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TappedDelay[784];
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].xm[50] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TappedDelay[800];
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].xm[51] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TappedDelay[816];
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].xm[52] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TappedDelay[832];
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].xm[53] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TappedDelay[848];
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].xm[54] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TappedDelay[864];
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].xm[55] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TappedDelay[880];
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].xm[56] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TappedDelay[896];
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].xm[57] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TappedDelay[912];
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].xm[58] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TappedDelay[928];
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].xm[59] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TappedDelay[944];
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].xm[60] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TappedDelay[960];
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].xm[61] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TappedDelay[976];
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].xm[62] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TappedDelay[992];
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].xm[63] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TappedDelay[1008];

    /* DotProduct: '<S9>/Dot Product' */
    maxval = 0.0;
    for (s7_iter = 0; s7_iter < 64; s7_iter++) {
      temp_idx_1 = HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].xm[s7_iter];
      temp_idx_2 = HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].xm[s7_iter];
      maxval += temp_idx_1 * temp_idx_2;
    }

    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].A11 = maxval;

    /* End of DotProduct: '<S9>/Dot Product' */

    /* S-Function (sfix_udelay): '<S12>/Tapped Delay1' */
    memcpy(&HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TappedDelay1[0],
           &HybridControllerD2D2_DW.CoreSubsys[ForEach_itr_b].TappedDelay1_X[0],
           sizeof(real_T) << 10U);

    /* SignalConversion generated from: '<S9>/Dot Product1' */
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].xdm[0] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TappedDelay1[0];
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].xdm[1] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TappedDelay1[16];
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].xdm[2] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TappedDelay1[32];
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].xdm[3] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TappedDelay1[48];
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].xdm[4] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TappedDelay1[64];
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].xdm[5] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TappedDelay1[80];
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].xdm[6] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TappedDelay1[96];
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].xdm[7] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TappedDelay1[112];
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].xdm[8] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TappedDelay1[128];
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].xdm[9] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TappedDelay1[144];
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].xdm[10] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TappedDelay1[160];
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].xdm[11] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TappedDelay1[176];
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].xdm[12] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TappedDelay1[192];
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].xdm[13] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TappedDelay1[208];
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].xdm[14] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TappedDelay1[224];
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].xdm[15] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TappedDelay1[240];
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].xdm[16] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TappedDelay1[256];
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].xdm[17] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TappedDelay1[272];
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].xdm[18] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TappedDelay1[288];
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].xdm[19] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TappedDelay1[304];
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].xdm[20] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TappedDelay1[320];
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].xdm[21] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TappedDelay1[336];
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].xdm[22] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TappedDelay1[352];
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].xdm[23] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TappedDelay1[368];
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].xdm[24] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TappedDelay1[384];
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].xdm[25] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TappedDelay1[400];
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].xdm[26] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TappedDelay1[416];
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].xdm[27] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TappedDelay1[432];
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].xdm[28] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TappedDelay1[448];
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].xdm[29] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TappedDelay1[464];
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].xdm[30] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TappedDelay1[480];
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].xdm[31] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TappedDelay1[496];
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].xdm[32] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TappedDelay1[512];
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].xdm[33] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TappedDelay1[528];
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].xdm[34] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TappedDelay1[544];
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].xdm[35] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TappedDelay1[560];
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].xdm[36] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TappedDelay1[576];
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].xdm[37] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TappedDelay1[592];
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].xdm[38] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TappedDelay1[608];
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].xdm[39] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TappedDelay1[624];
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].xdm[40] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TappedDelay1[640];
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].xdm[41] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TappedDelay1[656];
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].xdm[42] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TappedDelay1[672];
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].xdm[43] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TappedDelay1[688];
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].xdm[44] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TappedDelay1[704];
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].xdm[45] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TappedDelay1[720];
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].xdm[46] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TappedDelay1[736];
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].xdm[47] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TappedDelay1[752];
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].xdm[48] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TappedDelay1[768];
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].xdm[49] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TappedDelay1[784];
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].xdm[50] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TappedDelay1[800];
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].xdm[51] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TappedDelay1[816];
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].xdm[52] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TappedDelay1[832];
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].xdm[53] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TappedDelay1[848];
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].xdm[54] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TappedDelay1[864];
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].xdm[55] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TappedDelay1[880];
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].xdm[56] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TappedDelay1[896];
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].xdm[57] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TappedDelay1[912];
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].xdm[58] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TappedDelay1[928];
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].xdm[59] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TappedDelay1[944];
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].xdm[60] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TappedDelay1[960];
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].xdm[61] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TappedDelay1[976];
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].xdm[62] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TappedDelay1[992];
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].xdm[63] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TappedDelay1[1008];

    /* DotProduct: '<S9>/Dot Product1' */
    maxval = 0.0;
    for (s7_iter = 0; s7_iter < 64; s7_iter++) {
      temp_idx_1 = HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].xm[s7_iter];
      temp_idx_2 = HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].xdm[s7_iter];
      maxval += temp_idx_1 * temp_idx_2;
    }

    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].A12 = maxval;

    /* End of DotProduct: '<S9>/Dot Product1' */

    /* S-Function (sfix_udelay): '<S1>/Tapped Delay' */
    memcpy(&HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TappedDelay_d[0],
           &HybridControllerD2D2_DW.CoreSubsys[ForEach_itr_b].TappedDelay_X_p[0],
           sizeof(real_T) << 10U);

    /* SignalConversion generated from: '<S9>/Dot Product10' */
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].um[0] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TappedDelay_d[0];
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].um[1] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TappedDelay_d[16];
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].um[2] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TappedDelay_d[32];
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].um[3] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TappedDelay_d[48];
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].um[4] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TappedDelay_d[64];
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].um[5] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TappedDelay_d[80];
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].um[6] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TappedDelay_d[96];
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].um[7] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TappedDelay_d[112];
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].um[8] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TappedDelay_d[128];
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].um[9] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TappedDelay_d[144];
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].um[10] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TappedDelay_d[160];
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].um[11] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TappedDelay_d[176];
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].um[12] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TappedDelay_d[192];
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].um[13] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TappedDelay_d[208];
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].um[14] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TappedDelay_d[224];
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].um[15] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TappedDelay_d[240];
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].um[16] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TappedDelay_d[256];
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].um[17] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TappedDelay_d[272];
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].um[18] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TappedDelay_d[288];
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].um[19] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TappedDelay_d[304];
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].um[20] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TappedDelay_d[320];
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].um[21] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TappedDelay_d[336];
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].um[22] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TappedDelay_d[352];
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].um[23] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TappedDelay_d[368];
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].um[24] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TappedDelay_d[384];
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].um[25] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TappedDelay_d[400];
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].um[26] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TappedDelay_d[416];
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].um[27] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TappedDelay_d[432];
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].um[28] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TappedDelay_d[448];
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].um[29] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TappedDelay_d[464];
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].um[30] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TappedDelay_d[480];
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].um[31] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TappedDelay_d[496];
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].um[32] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TappedDelay_d[512];
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].um[33] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TappedDelay_d[528];
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].um[34] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TappedDelay_d[544];
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].um[35] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TappedDelay_d[560];
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].um[36] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TappedDelay_d[576];
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].um[37] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TappedDelay_d[592];
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].um[38] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TappedDelay_d[608];
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].um[39] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TappedDelay_d[624];
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].um[40] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TappedDelay_d[640];
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].um[41] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TappedDelay_d[656];
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].um[42] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TappedDelay_d[672];
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].um[43] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TappedDelay_d[688];
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].um[44] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TappedDelay_d[704];
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].um[45] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TappedDelay_d[720];
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].um[46] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TappedDelay_d[736];
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].um[47] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TappedDelay_d[752];
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].um[48] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TappedDelay_d[768];
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].um[49] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TappedDelay_d[784];
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].um[50] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TappedDelay_d[800];
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].um[51] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TappedDelay_d[816];
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].um[52] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TappedDelay_d[832];
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].um[53] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TappedDelay_d[848];
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].um[54] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TappedDelay_d[864];
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].um[55] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TappedDelay_d[880];
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].um[56] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TappedDelay_d[896];
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].um[57] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TappedDelay_d[912];
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].um[58] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TappedDelay_d[928];
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].um[59] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TappedDelay_d[944];
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].um[60] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TappedDelay_d[960];
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].um[61] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TappedDelay_d[976];
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].um[62] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TappedDelay_d[992];
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].um[63] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TappedDelay_d[1008];

    /* DotProduct: '<S9>/Dot Product10' */
    maxval = 0.0;

    /* DotProduct: '<S9>/Dot Product11' */
    temp_idx_1 = 0.0;
    for (s7_iter = 0; s7_iter < 64; s7_iter++) {
      /* DotProduct: '<S9>/Dot Product10' */
      temp_idx_2 = HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].um[s7_iter];
      tmp_0 = HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].xm[s7_iter];
      maxval += temp_idx_2 * tmp_0;

      /* DotProduct: '<S9>/Dot Product11' */
      temp_idx_2 = HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].um[s7_iter];
      tmp_0 = HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].xdm[s7_iter];
      temp_idx_1 += temp_idx_2 * tmp_0;
    }

    /* DotProduct: '<S9>/Dot Product10' */
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].DotProduct10 = maxval;

    /* DotProduct: '<S9>/Dot Product11' */
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].DotProduct11 = temp_idx_1;

    /* S-Function (sfix_udelay): '<S12>/Tapped Delay2' */
    memcpy(&HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TappedDelay2[0],
           &HybridControllerD2D2_DW.CoreSubsys[ForEach_itr_b].TappedDelay2_X[0],
           sizeof(real_T) << 10U);

    /* SignalConversion generated from: '<S9>/Dot Product12' */
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].x2dm[0] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TappedDelay2[0];
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].x2dm[1] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TappedDelay2[16];
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].x2dm[2] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TappedDelay2[32];
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].x2dm[3] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TappedDelay2[48];
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].x2dm[4] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TappedDelay2[64];
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].x2dm[5] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TappedDelay2[80];
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].x2dm[6] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TappedDelay2[96];
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].x2dm[7] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TappedDelay2[112];
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].x2dm[8] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TappedDelay2[128];
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].x2dm[9] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TappedDelay2[144];
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].x2dm[10] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TappedDelay2[160];
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].x2dm[11] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TappedDelay2[176];
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].x2dm[12] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TappedDelay2[192];
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].x2dm[13] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TappedDelay2[208];
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].x2dm[14] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TappedDelay2[224];
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].x2dm[15] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TappedDelay2[240];
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].x2dm[16] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TappedDelay2[256];
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].x2dm[17] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TappedDelay2[272];
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].x2dm[18] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TappedDelay2[288];
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].x2dm[19] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TappedDelay2[304];
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].x2dm[20] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TappedDelay2[320];
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].x2dm[21] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TappedDelay2[336];
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].x2dm[22] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TappedDelay2[352];
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].x2dm[23] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TappedDelay2[368];
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].x2dm[24] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TappedDelay2[384];
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].x2dm[25] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TappedDelay2[400];
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].x2dm[26] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TappedDelay2[416];
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].x2dm[27] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TappedDelay2[432];
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].x2dm[28] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TappedDelay2[448];
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].x2dm[29] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TappedDelay2[464];
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].x2dm[30] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TappedDelay2[480];
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].x2dm[31] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TappedDelay2[496];
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].x2dm[32] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TappedDelay2[512];
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].x2dm[33] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TappedDelay2[528];
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].x2dm[34] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TappedDelay2[544];
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].x2dm[35] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TappedDelay2[560];
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].x2dm[36] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TappedDelay2[576];
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].x2dm[37] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TappedDelay2[592];
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].x2dm[38] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TappedDelay2[608];
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].x2dm[39] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TappedDelay2[624];
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].x2dm[40] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TappedDelay2[640];
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].x2dm[41] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TappedDelay2[656];
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].x2dm[42] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TappedDelay2[672];
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].x2dm[43] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TappedDelay2[688];
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].x2dm[44] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TappedDelay2[704];
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].x2dm[45] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TappedDelay2[720];
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].x2dm[46] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TappedDelay2[736];
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].x2dm[47] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TappedDelay2[752];
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].x2dm[48] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TappedDelay2[768];
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].x2dm[49] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TappedDelay2[784];
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].x2dm[50] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TappedDelay2[800];
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].x2dm[51] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TappedDelay2[816];
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].x2dm[52] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TappedDelay2[832];
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].x2dm[53] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TappedDelay2[848];
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].x2dm[54] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TappedDelay2[864];
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].x2dm[55] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TappedDelay2[880];
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].x2dm[56] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TappedDelay2[896];
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].x2dm[57] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TappedDelay2[912];
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].x2dm[58] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TappedDelay2[928];
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].x2dm[59] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TappedDelay2[944];
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].x2dm[60] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TappedDelay2[960];
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].x2dm[61] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TappedDelay2[976];
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].x2dm[62] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TappedDelay2[992];
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].x2dm[63] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TappedDelay2[1008];

    /* DotProduct: '<S9>/Dot Product12' */
    maxval = 0.0;

    /* DotProduct: '<S9>/Dot Product2' */
    temp_idx_1 = 0.0;

    /* DotProduct: '<S9>/Dot Product4' */
    temp_idx_2 = 0.0;

    /* DotProduct: '<S9>/Dot Product5' */
    tmp_0 = 0.0;

    /* DotProduct: '<S9>/Dot Product7' */
    tmp = 0.0;
    for (s7_iter = 0; s7_iter < 64; s7_iter++) {
      /* DotProduct: '<S9>/Dot Product12' */
      tmp_1 = HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].um[s7_iter];
      tmp_2 = HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].x2dm[s7_iter];
      maxval += tmp_1 * tmp_2;

      /* DotProduct: '<S9>/Dot Product2' */
      tmp_1 = HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].xm[s7_iter];
      tmp_2 = HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].x2dm[s7_iter];
      temp_idx_1 += tmp_1 * tmp_2;

      /* DotProduct: '<S9>/Dot Product4' */
      tmp_1 = HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].xdm[s7_iter];
      tmp_2 = HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].xdm[s7_iter];
      temp_idx_2 += tmp_1 * tmp_2;

      /* DotProduct: '<S9>/Dot Product5' */
      tmp_1 = HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].xdm[s7_iter];
      tmp_2 = HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].x2dm[s7_iter];
      tmp_0 += tmp_1 * tmp_2;

      /* DotProduct: '<S9>/Dot Product7' */
      tmp_1 = HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].x2dm[s7_iter];
      tmp_2 = HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].x2dm[s7_iter];
      tmp += tmp_1 * tmp_2;
    }

    /* DotProduct: '<S9>/Dot Product12' */
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].DotProduct12 = maxval;

    /* DotProduct: '<S9>/Dot Product2' */
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].A13 = temp_idx_1;

    /* DotProduct: '<S9>/Dot Product4' */
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].A22 = temp_idx_2;

    /* DotProduct: '<S9>/Dot Product5' */
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].A23 = tmp_0;

    /* DotProduct: '<S9>/Dot Product7' */
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].A33 = tmp;

    /* SampleTimeMath: '<S10>/TSamp'
     *
     * About '<S10>/TSamp':
     *  y = u * K where K = 1 / ( w * Ts )
     */
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TSamp =
      rtb_ImpSel_InsertedFor_commdisp *
      HybridControllerD2D2_P.CoreSubsys.TSamp_WtEt;

    /* UnitDelay: '<S10>/UD' */
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].Uk1 =
      HybridControllerD2D2_DW.CoreSubsys[ForEach_itr_b].UD_DSTATE;

    /* Sum: '<S10>/Diff' */
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].Diff =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TSamp -
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].Uk1;

    /* SampleTimeMath: '<S11>/TSamp'
     *
     * About '<S11>/TSamp':
     *  y = u * K where K = 1 / ( w * Ts )
     */
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TSamp_f =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].Diff *
      HybridControllerD2D2_P.CoreSubsys.TSamp_WtEt_o;

    /* UnitDelay: '<S11>/UD' */
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].Uk1_e =
      HybridControllerD2D2_DW.CoreSubsys[ForEach_itr_b].UD_DSTATE_p;

    /* Sum: '<S11>/Diff' */
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].Diff_i =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TSamp_f -
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].Uk1_e;

    /* UnitDelay: '<S1>/Unit Delay' */
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].UnitDelay[0] =
      HybridControllerD2D2_DW.CoreSubsys[ForEach_itr_b].UnitDelay_DSTATE[0];
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].UnitDelay[1] =
      HybridControllerD2D2_DW.CoreSubsys[ForEach_itr_b].UnitDelay_DSTATE[1];
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].UnitDelay[2] =
      HybridControllerD2D2_DW.CoreSubsys[ForEach_itr_b].UnitDelay_DSTATE[2];
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].UnitDelay[3] =
      HybridControllerD2D2_DW.CoreSubsys[ForEach_itr_b].UnitDelay_DSTATE[3];

    /* UnitDelay: '<S1>/Unit Delay1' */
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].UnitDelay1 =
      HybridControllerD2D2_DW.CoreSubsys[ForEach_itr_b].UnitDelay1_DSTATE;

    /* SignalConversion generated from: '<S13>/ SFunction ' incorporates:
     *  MATLAB Function: '<S1>/calculate optimal coefficients'
     */
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].
      TmpSignalConversionAtSFunctionI[0] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].A11;
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].
      TmpSignalConversionAtSFunctionI[1] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].A12;
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].
      TmpSignalConversionAtSFunctionI[2] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].A13;

    /* SignalConversion generated from: '<S13>/ SFunction ' incorporates:
     *  MATLAB Function: '<S1>/calculate optimal coefficients'
     */
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].
      TmpSignalConversionAtSFunctio_c[0] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].A12;
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].
      TmpSignalConversionAtSFunctio_c[1] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].A22;
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].
      TmpSignalConversionAtSFunctio_c[2] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].A23;

    /* SignalConversion generated from: '<S13>/ SFunction ' incorporates:
     *  MATLAB Function: '<S1>/calculate optimal coefficients'
     */
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].
      TmpSignalConversionAtSFunctio_a[0] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].A13;
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].
      TmpSignalConversionAtSFunctio_a[1] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].A23;
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].
      TmpSignalConversionAtSFunctio_a[2] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].A33;

    /* SignalConversion generated from: '<S13>/ SFunction ' incorporates:
     *  MATLAB Function: '<S1>/calculate optimal coefficients'
     */
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].
      TmpSignalConversionAtSFunctio_n[0] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].DotProduct10;
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].
      TmpSignalConversionAtSFunctio_n[1] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].DotProduct11;
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].
      TmpSignalConversionAtSFunctio_n[2] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].DotProduct12;

    /* MATLAB Function: '<S1>/calculate optimal coefficients' incorporates:
     *  Constant: '<S1>/Constant1'
     *  Constant: '<S1>/Constant2'
     *  Constant: '<S1>/Constant3'
     *  Constant: '<S1>/Constant4'
     */
    /* MATLAB Function 'ATS compensator/calculate optimal coefficients': '<S13>:1' */
    /* '<S13>:1:4' */
    temp_idx_2 = HybridControllerD2D2_P.Par[0];
    maxval = temp_idx_2;
    temp_idx_2 = HybridControllerD2D2_P.Par[1];
    temp_idx_1 = temp_idx_2;
    temp_idx_2 = HybridControllerD2D2_P.Par[2];
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].apar[0] = maxval;
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].apar[1] = temp_idx_1;
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].apar[2] = temp_idx_2;
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].apar[3] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].UnitDelay1;
    if ((fabs(HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].
              Butterworthfilter1) > HybridControllerD2D2_P.Threshold) ||
        (HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].apar[3] != 0.0)) {
      /* '<S13>:1:6' */
      /* '<S13>:1:7' */
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].apar[3] = 1.0;

      /* '<S13>:1:9' */
      X[0] = HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].
        TmpSignalConversionAtSFunctionI[0];
      X[3] = HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].
        TmpSignalConversionAtSFunctio_c[0];
      X[6] = HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].
        TmpSignalConversionAtSFunctio_a[0];
      X[1] = HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].
        TmpSignalConversionAtSFunctionI[1];
      X[4] = HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].
        TmpSignalConversionAtSFunctio_c[1];
      X[7] = HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].
        TmpSignalConversionAtSFunctio_a[1];
      X[2] = HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].
        TmpSignalConversionAtSFunctionI[2];
      X[5] = HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].
        TmpSignalConversionAtSFunctio_c[2];
      X[8] = HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].
        TmpSignalConversionAtSFunctio_a[2];

      /* '<S13>:1:11' */
      r1 = 0;
      s7_iter = 2;
      maxval = fabs(X[0]);
      temp_idx_1 = fabs(X[1]);
      if (temp_idx_1 > fabs(X[0])) {
        maxval = temp_idx_1;
        r1 = 1;
        r2 = 0;
      }

      if (fabs(X[2]) > maxval) {
        r1 = 2;
        r2 = 1;
        s7_iter = 0;
      }

      X[r2] /= X[r1];
      X[s7_iter] /= X[r1];
      X[r2 + 3] -= X[r1 + 3] * X[r2];
      X[s7_iter + 3] -= X[r1 + 3] * X[s7_iter];
      X[r2 + 6] -= X[r1 + 6] * X[r2];
      X[s7_iter + 6] -= X[r1 + 6] * X[s7_iter];
      if (fabs(X[s7_iter + 3]) > fabs(X[r2 + 3])) {
        rtemp = r2;
        r2 = s7_iter;
        s7_iter = rtemp;
      }

      X[s7_iter + 3] /= X[r2 + 3];
      X[s7_iter + 6] -= X[s7_iter + 3] * X[r2 + 6];
      temp_idx_1 = HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].
        TmpSignalConversionAtSFunctio_n[r2] -
        HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].
        TmpSignalConversionAtSFunctio_n[r1] * X[r2];
      temp_idx_2 = (HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].
                    TmpSignalConversionAtSFunctio_n[s7_iter] -
                    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].
                    TmpSignalConversionAtSFunctio_n[r1] * X[s7_iter]) -
        X[s7_iter + 3] * temp_idx_1;
      temp_idx_2 /= X[s7_iter + 6];
      maxval = HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].
        TmpSignalConversionAtSFunctio_n[r1] - X[r1 + 6] * temp_idx_2;
      temp_idx_1 -= X[r2 + 6] * temp_idx_2;
      temp_idx_1 /= X[r2 + 3];
      maxval -= X[r1 + 3] * temp_idx_1;
      maxval /= X[r1];

      /* '<S13>:1:13' */
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].apar[0] = maxval;
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].apar[1] = temp_idx_1;
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].apar[2] = temp_idx_2;
      if ((rtIsNaN(HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].apar[0]) +
           rtIsNaN(HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].apar[1])) +
          rtIsNaN(HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].apar[2]) != 0)
      {
        /* '<S13>:1:16' */
        temp_idx_2 = HybridControllerD2D2_P.Par[0];
        maxval = temp_idx_2;
        temp_idx_2 = HybridControllerD2D2_P.Par[1];
        temp_idx_1 = temp_idx_2;
        temp_idx_2 = HybridControllerD2D2_P.Par[2];
        HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].apar[0] = maxval;
        HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].apar[1] = temp_idx_1;
        HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].apar[2] = temp_idx_2;
        HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].apar[3] =
          HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].UnitDelay1;
      }

      if (fabs(HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].apar[0] -
               HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].UnitDelay[0]) >
          HybridControllerD2D2_P.MRC[0]) {
        /* '<S13>:1:21' */
        /* '<S13>:1:22' */
        maxval = HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].apar[0] -
          HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].UnitDelay[0];
        if (maxval < 0.0) {
          temp_idx_1 = -1.0;
        } else if (maxval > 0.0) {
          temp_idx_1 = 1.0;
        } else if (maxval == 0.0) {
          temp_idx_1 = 0.0;
        } else {
          temp_idx_1 = (rtNaN);
        }

        HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].apar[0] = temp_idx_1 *
          HybridControllerD2D2_P.MRC[0] +
          HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].UnitDelay[0];
      }

      if (fabs(HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].apar[1] -
               HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].UnitDelay[1]) >
          HybridControllerD2D2_P.MRC[1]) {
        /* '<S13>:1:24' */
        /* '<S13>:1:25' */
        maxval = HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].apar[1] -
          HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].UnitDelay[1];
        if (maxval < 0.0) {
          temp_idx_1 = -1.0;
        } else if (maxval > 0.0) {
          temp_idx_1 = 1.0;
        } else if (maxval == 0.0) {
          temp_idx_1 = 0.0;
        } else {
          temp_idx_1 = (rtNaN);
        }

        HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].apar[1] = temp_idx_1 *
          HybridControllerD2D2_P.MRC[1] +
          HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].UnitDelay[1];
      }

      if (fabs(HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].apar[2] -
               HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].UnitDelay[2]) >
          HybridControllerD2D2_P.MRC[2]) {
        /* '<S13>:1:27' */
        /* '<S13>:1:28' */
        maxval = HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].apar[2] -
          HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].UnitDelay[2];
        if (maxval < 0.0) {
          temp_idx_1 = -1.0;
        } else if (maxval > 0.0) {
          temp_idx_1 = 1.0;
        } else if (maxval == 0.0) {
          temp_idx_1 = 0.0;
        } else {
          temp_idx_1 = (rtNaN);
        }

        HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].apar[2] = temp_idx_1 *
          HybridControllerD2D2_P.MRC[2] +
          HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].UnitDelay[2];
      }

      if (HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].apar[0] <
          HybridControllerD2D2_P.P_range[0]) {
        /* '<S13>:1:32' */
        /* '<S13>:1:33' */
        HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].apar[0] =
          HybridControllerD2D2_P.P_range[0];
      }

      if (HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].apar[0] >
          HybridControllerD2D2_P.P_range[3]) {
        /* '<S13>:1:36' */
        /* '<S13>:1:37' */
        HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].apar[0] =
          HybridControllerD2D2_P.P_range[3];
      }

      if (HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].apar[1] <
          HybridControllerD2D2_P.P_range[1]) {
        /* '<S13>:1:40' */
        /* '<S13>:1:41' */
        HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].apar[1] =
          HybridControllerD2D2_P.P_range[1];
      }

      if (HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].apar[1] >
          HybridControllerD2D2_P.P_range[4]) {
        /* '<S13>:1:44' */
        /* '<S13>:1:45' */
        HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].apar[1] =
          HybridControllerD2D2_P.P_range[4];
      }

      if (HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].apar[2] <
          HybridControllerD2D2_P.P_range[2]) {
        /* '<S13>:1:48' */
        /* '<S13>:1:49' */
        HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].apar[2] =
          HybridControllerD2D2_P.P_range[2];
      }

      if (HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].apar[2] >
          HybridControllerD2D2_P.P_range[5]) {
        /* '<S13>:1:52' */
        /* '<S13>:1:53' */
        HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].apar[2] =
          HybridControllerD2D2_P.P_range[5];
      }
    }

    /* ManualSwitch: '<S1>/Manual Switch' */
    if (HybridControllerD2D2_P.CoreSubsys.ManualSwitch_CurrentSetting == 1) {
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].ManualSwitch =
        HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].Diff;
    } else {
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].ManualSwitch =
        rtb_ImpSel_InsertedFor_commvel_;
    }

    /* End of ManualSwitch: '<S1>/Manual Switch' */

    /* ManualSwitch: '<S1>/Manual Switch1' */
    if (HybridControllerD2D2_P.CoreSubsys.ManualSwitch1_CurrentSetting == 1) {
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].ManualSwitch1 =
        HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].Diff_i;
    } else {
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].ManualSwitch1 =
        rtb_ImpSel_InsertedFor_commacce;
    }

    /* End of ManualSwitch: '<S1>/Manual Switch1' */

    /* MATLAB Function: '<S1>/compensated actuator input disp.' */
    /* MATLAB Function 'ATS compensator/compensated actuator input disp.': '<S14>:1' */
    /* '<S14>:1:4' */
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].ut_pred =
      (HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].apar[0] *
       rtb_ImpSel_InsertedFor_commdisp +
       HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].apar[1] *
       HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].ManualSwitch) +
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].apar[2] *
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].ManualSwitch1;

    /* SampleTimeMath: '<S15>/TSamp'
     *
     * About '<S15>/TSamp':
     *  y = u * K where K = 1 / ( w * Ts )
     */
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TSamp_j =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].Butterworthfilter1 *
      HybridControllerD2D2_P.CoreSubsys.TSamp_WtEt_k;

    /* UnitDelay: '<S15>/UD' */
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].Uk1_g =
      HybridControllerD2D2_DW.CoreSubsys[ForEach_itr_b].UD_DSTATE_b;

    /* Sum: '<S15>/Diff' */
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].Diff_k =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TSamp_j -
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].Uk1_g;

    /* SampleTimeMath: '<S16>/TSamp'
     *
     * About '<S16>/TSamp':
     *  y = u * K where K = 1 / ( w * Ts )
     */
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TSamp_n =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].Diff_k *
      HybridControllerD2D2_P.CoreSubsys.TSamp_WtEt_j;

    /* UnitDelay: '<S16>/UD' */
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].Uk1_k =
      HybridControllerD2D2_DW.CoreSubsys[ForEach_itr_b].UD_DSTATE_b5;

    /* Sum: '<S16>/Diff' */
    HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].Diff_e =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TSamp_n -
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].Uk1_k;

    /* ForEachSliceAssignment generated from: '<S1>/comp disp' */
    HybridControllerD2D2_B.ImpAsg_InsertedFor_compdisp_at_ =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].ut_pred;

    /* ForEachSliceAssignment generated from: '<S1>/apar' */
    HybridControllerD2D2_B.ImpAsg_InsertedFor_apar_at_inpo[ForEach_itr_b << 2] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].apar[0];
    HybridControllerD2D2_B.ImpAsg_InsertedFor_apar_at_inpo[(ForEach_itr_b << 2)
      + 1] = HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].apar[1];
    HybridControllerD2D2_B.ImpAsg_InsertedFor_apar_at_inpo[(ForEach_itr_b << 2)
      + 2] = HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].apar[2];
    HybridControllerD2D2_B.ImpAsg_InsertedFor_apar_at_inpo[(ForEach_itr_b << 2)
      + 3] = HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].apar[3];
  }

  /* End of Outputs for SubSystem: '<Root>/ATS compensator' */

  /* ManualSwitch: '<Root>/ATS Switch' */
  if (HybridControllerD2D2_P.ATSSwitch_CurrentSetting == 1) {
    HybridControllerD2D2_B.ATSSwitch =
      HybridControllerD2D2_B.ImpAsg_InsertedFor_compdisp_at_;
  } else {
    HybridControllerD2D2_B.ATSSwitch = HybridControllerD2D2_B.comD[0];
  }

  /* End of ManualSwitch: '<Root>/ATS Switch' */

  /* Assignment: '<S17>/Assignment' */
  HybridControllerD2D2_B.Assignment = HybridControllerD2D2_B.ATSSwitch;

  /* Saturate: '<S2>/Saturation' */
  maxval = HybridControllerD2D2_B.Assignment;
  temp_idx_1 = HybridControllerD2D2_P.Saturation_LowerSat;
  temp_idx_2 = HybridControllerD2D2_P.Saturation_UpperSat;
  if (maxval > temp_idx_2) {
    HybridControllerD2D2_B.Saturation = temp_idx_2;
  } else if (maxval < temp_idx_1) {
    HybridControllerD2D2_B.Saturation = temp_idx_1;
  } else {
    HybridControllerD2D2_B.Saturation = maxval;
  }

  /* End of Saturate: '<S2>/Saturation' */

  /* DataTypeConversion: '<S6>/typeConv3' */
  HybridControllerD2D2_B.typeConv3_k = (real32_T)
    HybridControllerD2D2_B.Saturation;

  /* DataTypeConversion: '<S6>/typeConv4' incorporates:
   *  Constant: '<Root>/force cmds'
   */
  HybridControllerD2D2_B.typeConv4_d = (real32_T)
    HybridControllerD2D2_P.forcecmds_Value;

  /* DataTypeConversion: '<S6>/typeConv5' incorporates:
   *  Constant: '<Root>/valve cmds'
   */
  HybridControllerD2D2_B.typeConv5_d = (real32_T)
    HybridControllerD2D2_P.valvecmds_Value;

  /* S-Function (xpcany2dword): '<S6>/SCGT pack' */

  /* Level2 S-Function Block: '<S6>/SCGT pack' (xpcany2dword) */
  {
    SimStruct *rts = HybridControllerD2D2_M->childSfunctions[3];
    sfcnOutputs(rts,0);
  }

  /* S-Function (sg_IO901_IO902_write_s): '<S6>/Write ' */

  /* Level2 S-Function Block: '<S6>/Write ' (sg_IO901_IO902_write_s) */
  {
    SimStruct *rts = HybridControllerD2D2_M->childSfunctions[4];
    sfcnOutputs(rts,0);
  }

  /* S-Function (scblock): '<S53>/S-Function' */
  /* ok to acquire for <S53>/S-Function */
  HybridControllerD2D2_DW.SFunction_IWORK.AcquireOK = 1;

  /* DataTypeConversion: '<S5>/typeConv1' */
  HybridControllerD2D2_B.typeConv1 = HybridControllerD2D2_B.SCGTunpack_o1;

  /* DataTypeConversion: '<S5>/typeConv2' */
  HybridControllerD2D2_B.typeConv2_p = HybridControllerD2D2_B.SCGTunpack_o2;

  /* DataTypeConversion: '<S5>/typeConv3' */
  HybridControllerD2D2_B.typeConv3 = HybridControllerD2D2_B.SCGTunpack_o3;

  /* DataTypeConversion: '<S5>/typeConv4' */
  HybridControllerD2D2_B.typeConv4 = HybridControllerD2D2_B.SCGTunpack_o4;

  /* DataTypeConversion: '<S5>/typeConv5' */
  HybridControllerD2D2_B.typeConv5 = HybridControllerD2D2_B.SCGTunpack_o5;

  /* DataTypeConversion: '<S5>/typeConv8' */
  HybridControllerD2D2_B.typeConv8 = HybridControllerD2D2_B.SCGTunpack_o8;
}

/* Model update function */
static void HybridControllerD2D2_update(void)
{
  /* local scratch DWork variables */
  int32_T ForEach_itr_b;
  real_T denAccum;
  int32_T j;
  int32_T numIdx;
  real_T rtb_measuredactdisp;

  /* Update for Iterator SubSystem: '<Root>/ATS compensator' */
  for (ForEach_itr_b = 0; ForEach_itr_b < 1; ForEach_itr_b++) {
    /* Update for ForEachSliceSelector generated from: '<S1>/meas disp' */
    rtb_measuredactdisp = HybridControllerD2D2_B.MovingAverageFilter;

    /* Update for DiscreteTransferFcn: '<S1>/Butterworth filter' */
    denAccum = HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].ut_pred;
    numIdx = 1;
    for (j = 0; j < 6; j++) {
      denAccum -= HybridControllerD2D2_P.Zden[numIdx] *
        HybridControllerD2D2_DW.CoreSubsys[ForEach_itr_b].
        Butterworthfilter_states[j];
      numIdx++;
    }

    denAccum /= HybridControllerD2D2_P.Zden[0];
    for (j = 0; j < 5; j++) {
      HybridControllerD2D2_DW.CoreSubsys[ForEach_itr_b]
        .Butterworthfilter_states[5 - j] =
        HybridControllerD2D2_DW.CoreSubsys[ForEach_itr_b].
        Butterworthfilter_states[4 - j];
    }

    HybridControllerD2D2_DW.CoreSubsys[ForEach_itr_b].Butterworthfilter_states[0]
      = denAccum;

    /* End of Update for DiscreteTransferFcn: '<S1>/Butterworth filter' */

    /* Update for DiscreteTransferFcn: '<S1>/Butterworth filter1' */
    denAccum = rtb_measuredactdisp;
    numIdx = 1;
    for (j = 0; j < 6; j++) {
      denAccum -= HybridControllerD2D2_P.Zden[numIdx] *
        HybridControllerD2D2_DW.CoreSubsys[ForEach_itr_b].
        Butterworthfilter1_states[j];
      numIdx++;
    }

    denAccum /= HybridControllerD2D2_P.Zden[0];
    for (j = 0; j < 5; j++) {
      HybridControllerD2D2_DW.CoreSubsys[ForEach_itr_b].
        Butterworthfilter1_states[5 - j] =
        HybridControllerD2D2_DW.CoreSubsys[ForEach_itr_b].
        Butterworthfilter1_states[4 - j];
    }

    HybridControllerD2D2_DW.CoreSubsys[ForEach_itr_b].Butterworthfilter1_states
      [0] = denAccum;

    /* End of Update for DiscreteTransferFcn: '<S1>/Butterworth filter1' */

    /* Update for S-Function (sfix_udelay): '<S12>/Tapped Delay' */
    for (numIdx = 0; numIdx < 1023; numIdx++) {
      HybridControllerD2D2_DW.CoreSubsys[ForEach_itr_b].TappedDelay_X[numIdx] =
        HybridControllerD2D2_DW.CoreSubsys[ForEach_itr_b].TappedDelay_X[numIdx +
        1];
    }

    HybridControllerD2D2_DW.CoreSubsys[ForEach_itr_b].TappedDelay_X[1023] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].Butterworthfilter1;

    /* End of Update for S-Function (sfix_udelay): '<S12>/Tapped Delay' */

    /* Update for S-Function (sfix_udelay): '<S12>/Tapped Delay1' */
    for (numIdx = 0; numIdx < 1023; numIdx++) {
      HybridControllerD2D2_DW.CoreSubsys[ForEach_itr_b].TappedDelay1_X[numIdx] =
        HybridControllerD2D2_DW.CoreSubsys[ForEach_itr_b].TappedDelay1_X[numIdx
        + 1];
    }

    HybridControllerD2D2_DW.CoreSubsys[ForEach_itr_b].TappedDelay1_X[1023] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].Diff_k;

    /* End of Update for S-Function (sfix_udelay): '<S12>/Tapped Delay1' */

    /* Update for S-Function (sfix_udelay): '<S1>/Tapped Delay' */
    for (numIdx = 0; numIdx < 1023; numIdx++) {
      HybridControllerD2D2_DW.CoreSubsys[ForEach_itr_b].TappedDelay_X_p[numIdx] =
        HybridControllerD2D2_DW.CoreSubsys[ForEach_itr_b].TappedDelay_X_p[numIdx
        + 1];
    }

    HybridControllerD2D2_DW.CoreSubsys[ForEach_itr_b].TappedDelay_X_p[1023] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].Butterworthfilter;

    /* End of Update for S-Function (sfix_udelay): '<S1>/Tapped Delay' */

    /* Update for S-Function (sfix_udelay): '<S12>/Tapped Delay2' */
    for (numIdx = 0; numIdx < 1023; numIdx++) {
      HybridControllerD2D2_DW.CoreSubsys[ForEach_itr_b].TappedDelay2_X[numIdx] =
        HybridControllerD2D2_DW.CoreSubsys[ForEach_itr_b].TappedDelay2_X[numIdx
        + 1];
    }

    HybridControllerD2D2_DW.CoreSubsys[ForEach_itr_b].TappedDelay2_X[1023] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].Diff_e;

    /* End of Update for S-Function (sfix_udelay): '<S12>/Tapped Delay2' */

    /* Update for UnitDelay: '<S10>/UD' */
    HybridControllerD2D2_DW.CoreSubsys[ForEach_itr_b].UD_DSTATE =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TSamp;

    /* Update for UnitDelay: '<S11>/UD' */
    HybridControllerD2D2_DW.CoreSubsys[ForEach_itr_b].UD_DSTATE_p =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TSamp_f;

    /* Update for UnitDelay: '<S1>/Unit Delay' */
    HybridControllerD2D2_DW.CoreSubsys[ForEach_itr_b].UnitDelay_DSTATE[0] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].apar[0];
    HybridControllerD2D2_DW.CoreSubsys[ForEach_itr_b].UnitDelay_DSTATE[1] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].apar[1];
    HybridControllerD2D2_DW.CoreSubsys[ForEach_itr_b].UnitDelay_DSTATE[2] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].apar[2];
    HybridControllerD2D2_DW.CoreSubsys[ForEach_itr_b].UnitDelay_DSTATE[3] =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].apar[3];

    /* Update for UnitDelay: '<S1>/Unit Delay1' */
    HybridControllerD2D2_DW.CoreSubsys[ForEach_itr_b].UnitDelay1_DSTATE =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].apar[3];

    /* Update for UnitDelay: '<S15>/UD' */
    HybridControllerD2D2_DW.CoreSubsys[ForEach_itr_b].UD_DSTATE_b =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TSamp_j;

    /* Update for UnitDelay: '<S16>/UD' */
    HybridControllerD2D2_DW.CoreSubsys[ForEach_itr_b].UD_DSTATE_b5 =
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TSamp_n;
  }

  /* End of Update for SubSystem: '<Root>/ATS compensator' */

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick0 and the high bits
   * Timing.clockTickH0. When the low bit overflows to 0, the high bits increment.
   */
  if (!(++HybridControllerD2D2_M->Timing.clockTick0)) {
    ++HybridControllerD2D2_M->Timing.clockTickH0;
  }

  HybridControllerD2D2_M->Timing.t[0] =
    HybridControllerD2D2_M->Timing.clockTick0 *
    HybridControllerD2D2_M->Timing.stepSize0 +
    HybridControllerD2D2_M->Timing.clockTickH0 *
    HybridControllerD2D2_M->Timing.stepSize0 * 4294967296.0;
}

/* Model initialize function */
static void HybridControllerD2D2_initialize(void)
{
  {
    /* local scratch DWork variables */
    int32_T ForEach_itr;
    int32_T ForEach_itr_b;
    int32_T i;

    /* Start for S-Function (sg_IO901_IO902_setup_s): '<Root>/Setup ' */
    /* Level2 S-Function Block: '<Root>/Setup ' (sg_IO901_IO902_setup_s) */
    {
      SimStruct *rts = HybridControllerD2D2_M->childSfunctions[0];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for S-Function (sg_IO901_IO902_read_s): '<S5>/Read ' */
    /* Level2 S-Function Block: '<S5>/Read ' (sg_IO901_IO902_read_s) */
    {
      SimStruct *rts = HybridControllerD2D2_M->childSfunctions[1];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for Iterator SubSystem: '<Root>/xPC HC' */
    /* Start for DataStoreMemory: '<S20>/Data Store Memory' */
    HybridControllerD2D2_DW.x0 =
      HybridControllerD2D2_P.DataStoreMemory_InitialValue;

    /* Start for DataStoreMemory: '<S21>/Data Store Memory' */
    HybridControllerD2D2_DW.x10 =
      HybridControllerD2D2_P.DataStoreMemory_InitialValue_p;

    /* Start for IfAction SubSystem: '<S46>/If Action Subsystem1' */
    Hybrid_IfActionSubsystem1_Start(&HybridControllerD2D2_B.IfActionSubsystem1_h);

    /* End of Start for SubSystem: '<S46>/If Action Subsystem1' */

    /* Start for IfAction SubSystem: '<S46>/If Action Subsystem2' */
    Hybrid_IfActionSubsystem1_Start(&HybridControllerD2D2_B.IfActionSubsystem2);

    /* End of Start for SubSystem: '<S46>/If Action Subsystem2' */

    /* Start for Iterator SubSystem: '<S24>/For Each Subsystem' */
    for (ForEach_itr = 0; ForEach_itr < 1; ForEach_itr++) {
      HybridControllerD2D2_B.CoreSubsys_p[ForEach_itr].Add = 0U;
      HybridControllerD2D2_B.CoreSubsys_p[ForEach_itr].
        TmpSignalConversionAtImpAsg_Ins[0] = 0.0;
      HybridControllerD2D2_B.CoreSubsys_p[ForEach_itr].
        TmpSignalConversionAtImpAsg_Ins[1] = 0.0;

      /* Start for IfAction SubSystem: '<S48>/If Action Subsystem1' */
      Hybrid_IfActionSubsystem1_Start
        (&HybridControllerD2D2_B.CoreSubsys_p[ForEach_itr].IfActionSubsystem1);

      /* End of Start for SubSystem: '<S48>/If Action Subsystem1' */

      /* Start for IfAction SubSystem: '<S48>/If Action Subsystem2' */
      Hybrid_IfActionSubsystem1_Start
        (&HybridControllerD2D2_B.CoreSubsys_p[ForEach_itr].IfActionSubsystem2);

      /* End of Start for SubSystem: '<S48>/If Action Subsystem2' */

      /* Start for Triggered SubSystem: '<S44>/SubSystem' */
      HybridControllerD2D2_B.CoreSubsys_p[ForEach_itr].measDspIn = 0.0;
      HybridControllerD2D2_B.CoreSubsys_p[ForEach_itr].measFrcIn = 0.0;

      /* End of Start for SubSystem: '<S44>/SubSystem' */
      HybridControllerD2D2_PrevZCX.CoreSubsys_p[ForEach_itr].SubSystem_Trig_ZCE =
        POS_ZCSIG;
    }

    /* End of Start for SubSystem: '<S24>/For Each Subsystem' */

    /* Start for DataStoreMemory: '<S7>/iMem' */
    HybridControllerD2D2_DW.counter = HybridControllerD2D2_P.iMem_InitialValue;

    /* Start for DataStoreMemory: '<S7>/sMem' */
    HybridControllerD2D2_DW.sFlag = HybridControllerD2D2_P.sMem_InitialValue;

    /* Start for DataStoreMemory: '<S7>/tMem' */
    HybridControllerD2D2_DW.tFlag = HybridControllerD2D2_P.tMem_InitialValue;

    /* End of Start for SubSystem: '<Root>/xPC HC' */

    /* Start for Iterator SubSystem: '<Root>/ATS compensator' */
    for (ForEach_itr_b = 0; ForEach_itr_b < 1; ForEach_itr_b++) {
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].Butterworthfilter = 0.0;
      for (i = 0; i < 6; i++) {
        HybridControllerD2D2_DW.CoreSubsys[ForEach_itr_b].
          Butterworthfilter_states[i] = 0.0;
      }

      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].Butterworthfilter1 = 0.0;
      for (i = 0; i < 6; i++) {
        HybridControllerD2D2_DW.CoreSubsys[ForEach_itr_b].
          Butterworthfilter1_states[i] = 0.0;
      }

      for (i = 0; i < 1024; i++) {
        HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TappedDelay[i] = 0.0;
        HybridControllerD2D2_DW.CoreSubsys[ForEach_itr_b].TappedDelay_X[i] = 0.0;
      }

      for (i = 0; i < 64; i++) {
        HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].xm[i] = 0.0;
      }

      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].A11 = 0.0;
      for (i = 0; i < 1024; i++) {
        HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TappedDelay1[i] = 0.0;
        HybridControllerD2D2_DW.CoreSubsys[ForEach_itr_b].TappedDelay1_X[i] =
          0.0;
      }

      for (i = 0; i < 64; i++) {
        HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].xdm[i] = 0.0;
      }

      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].A12 = 0.0;
      for (i = 0; i < 1024; i++) {
        HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TappedDelay_d[i] = 0.0;
        HybridControllerD2D2_DW.CoreSubsys[ForEach_itr_b].TappedDelay_X_p[i] =
          0.0;
      }

      for (i = 0; i < 64; i++) {
        HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].um[i] = 0.0;
      }

      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].DotProduct10 = 0.0;
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].DotProduct11 = 0.0;
      for (i = 0; i < 1024; i++) {
        HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TappedDelay2[i] = 0.0;
        HybridControllerD2D2_DW.CoreSubsys[ForEach_itr_b].TappedDelay2_X[i] =
          0.0;
      }

      for (i = 0; i < 64; i++) {
        HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].x2dm[i] = 0.0;
      }

      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].DotProduct12 = 0.0;
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].A13 = 0.0;
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].A22 = 0.0;
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].A23 = 0.0;
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].A33 = 0.0;
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TSamp = 0.0;
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].Uk1 = 0.0;
      HybridControllerD2D2_DW.CoreSubsys[ForEach_itr_b].UD_DSTATE = 0.0;
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].Diff = 0.0;
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TSamp_f = 0.0;
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].Uk1_e = 0.0;
      HybridControllerD2D2_DW.CoreSubsys[ForEach_itr_b].UD_DSTATE_p = 0.0;
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].Diff_i = 0.0;
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].UnitDelay[0] = 0.0;
      HybridControllerD2D2_DW.CoreSubsys[ForEach_itr_b].UnitDelay_DSTATE[0] =
        0.0;
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].UnitDelay[1] = 0.0;
      HybridControllerD2D2_DW.CoreSubsys[ForEach_itr_b].UnitDelay_DSTATE[1] =
        0.0;
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].UnitDelay[2] = 0.0;
      HybridControllerD2D2_DW.CoreSubsys[ForEach_itr_b].UnitDelay_DSTATE[2] =
        0.0;
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].UnitDelay[3] = 0.0;
      HybridControllerD2D2_DW.CoreSubsys[ForEach_itr_b].UnitDelay_DSTATE[3] =
        0.0;
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].UnitDelay1 = 0.0;
      HybridControllerD2D2_DW.CoreSubsys[ForEach_itr_b].UnitDelay1_DSTATE = 0.0;
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].ManualSwitch = 0.0;
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].ManualSwitch1 = 0.0;
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TSamp_j = 0.0;
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].Uk1_g = 0.0;
      HybridControllerD2D2_DW.CoreSubsys[ForEach_itr_b].UD_DSTATE_b = 0.0;
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].Diff_k = 0.0;
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].TSamp_n = 0.0;
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].Uk1_k = 0.0;
      HybridControllerD2D2_DW.CoreSubsys[ForEach_itr_b].UD_DSTATE_b5 = 0.0;
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].Diff_e = 0.0;

      /* Start for MATLAB Function: '<S1>/calculate optimal coefficients' */
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].
        TmpSignalConversionAtSFunctionI[0] = 0.0;
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].
        TmpSignalConversionAtSFunctio_c[0] = 0.0;
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].
        TmpSignalConversionAtSFunctio_a[0] = 0.0;
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].
        TmpSignalConversionAtSFunctio_n[0] = 0.0;
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].
        TmpSignalConversionAtSFunctionI[1] = 0.0;
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].
        TmpSignalConversionAtSFunctio_c[1] = 0.0;
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].
        TmpSignalConversionAtSFunctio_a[1] = 0.0;
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].
        TmpSignalConversionAtSFunctio_n[1] = 0.0;
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].
        TmpSignalConversionAtSFunctionI[2] = 0.0;
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].
        TmpSignalConversionAtSFunctio_c[2] = 0.0;
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].
        TmpSignalConversionAtSFunctio_a[2] = 0.0;
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].
        TmpSignalConversionAtSFunctio_n[2] = 0.0;
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].apar[0] = 0.0;
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].apar[1] = 0.0;
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].apar[2] = 0.0;
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].apar[3] = 0.0;

      /* Start for MATLAB Function: '<S1>/compensated actuator input disp.' */
      HybridControllerD2D2_B.CoreSubsys[ForEach_itr_b].ut_pred = 0.0;
    }

    /* End of Start for SubSystem: '<Root>/ATS compensator' */
    /* Start for S-Function (sg_IO901_IO902_write_s): '<S6>/Write ' */
    /* Level2 S-Function Block: '<S6>/Write ' (sg_IO901_IO902_write_s) */
    {
      SimStruct *rts = HybridControllerD2D2_M->childSfunctions[4];
      sfcnStart(rts);
      if (ssGetErrorStatus(rts) != (NULL))
        return;
    }

    /* Start for S-Function (scblock): '<S53>/S-Function' */

    /* S-Function Block: <S53>/S-Function (scblock) */
    {
      int i;
      if ((i = rl32eScopeExists(1)) == 0) {
        if ((i = rl32eDefScope(1,3)) != 0) {
          printf("Error creating scope 1\n");
        } else {
          rl32eAddSignal(1, rl32eGetSignalNo("xPC HC/Gain"));
          rl32eAddSignal(1, rl32eGetSignalNo("xPC HC/Predictor-Corrector/p1/s1"));
          rl32eAddSignal(1, rl32eGetSignalNo("xPC HC/Predictor-Corrector/p2/s1"));
          rl32eAddSignal(1, rl32eGetSignalNo("xPC HC/Predictor-Corrector/p3/s1"));
          rl32eAddSignal(1, rl32eGetSignalNo(
            "ATS compensator/compensated actuator input disp."));
          rl32eAddSignal(1, rl32eGetSignalNo("xPC HC/measSignal/s1"));
          rl32eAddSignal(1, rl32eGetSignalNo("xPC HC/measSignal/s2"));
          rl32eAddSignal(1, rl32eGetSignalNo("xPC HC/MovingAverage Filter"));
          rl32eAddSignal(1, rl32eGetSignalNo("xPC HC/MovingAverage Filter1"));
          rl32eAddSignal(1, rl32eGetSignalNo(
            "ATS compensator/calculate optimal coefficients/s1"));
          rl32eAddSignal(1, rl32eGetSignalNo(
            "ATS compensator/calculate optimal coefficients/s2"));
          rl32eAddSignal(1, rl32eGetSignalNo(
            "ATS compensator/calculate optimal coefficients/s3"));
          rl32eAddSignal(1, rl32eGetSignalNo(
            "ATS compensator/calculate optimal coefficients/s4"));
          rl32eAddSignal(1, rl32eGetSignalNo("xPC HC/Subsystem4/typeConv3"));
          rl32eAddSignal(1, rl32eGetSignalNo("xPC HC/Subsystem4/typeConv1"));
          rl32eAddSignal(1, rl32eGetSignalNo("xPC HC/Subsystem4/typeConv2/s1"));
          rl32eAddSignal(1, rl32eGetSignalNo("xPC HC/Subsystem4/typeConv2/s2"));
          rl32eAddSignal(1, rl32eGetSignalNo("xPC HC/Subsystem4/typeConv2/s3"));
          rl32eSetScope(1, 4, 61440);
          rl32eSetScope(1, 5, 0);
          rl32eSetScope(1, 6, 1);
          rl32eSetScope(1, 0, 0);
          xpceFSScopeSet(1, "H:\\xpcRec.dat", 0, 512, 0, 536870912);
          rl32eSetScope (1, 10, 1);
          rl32eSetScope(1, 3, rl32eGetSignalNo("xPC HC/Gain"));
          rl32eSetScope(1, 1, 0.0);
          rl32eSetScope(1, 2, 0);
          rl32eSetScope(1, 9, 0);
          xpceScopeAcqOK(1, &HybridControllerD2D2_DW.SFunction_IWORK.AcquireOK);
        }
      }

      if (i) {
        rl32eRestartAcquisition(1);
      }
    }

    /* user code (Start function Trailer) */
    {
      uint8_T irq = 2;
      uint32_T found = 0;
      uint32_T ind;
      uint16_T devid[1];
      devid[0] = (uint16_T)21264.0;

      /* Call xpcGetPCIDeviceInfo to fill in the structure */
      for (ind = 0 ; ind < 1 ; ind++ ) {
        if (xpcGetPCIDeviceInfo( (uint16_T)4999, devid[ind], (uint16_T)-1,
                                (uint16_T)-1, 0, -1, &xpcDev_1 ) == 0 ) {
          found = 1;
          break;
        }
      }

      if (found == 0 ) {
        rtmSetErrorStatus(HybridControllerD2D2_M,
                          "Interrupting board at [0, -1]: Not present");
        return;
      }

      if (irq == 2 || irq == 16) {
        irq = (uint8_T)xpcDev_1.InterruptLine;
      }

      /* connect ISR system to config space irq */
      if (xpceRegisterISR( irq, NULL,
                          IO901_IO902_isr_public,
                          NULL,
                          IO901_IO902_start_public,
                          IO901_IO902_stop_public,
                          0,
                          &xpcDev_1) == -1) {
        static uint8_T ermsg[100];
        sprintf( ermsg, "ISR reg failed for IRQ %d at [0, -1].", irq );
        rtmSetErrorStatus(HybridControllerD2D2_M, ermsg);
        return;
      }
    }

    xpcOutpB( 0xA0, 0x20 );
    xpcOutpB( 0x20, 0x20 );
  }

  HybridControllerD2D2_PrevZCX.SubSystem2_Trig_ZCE = POS_ZCSIG;

  {
    /* local scratch DWork variables */
    int32_T ForEach_itr;
    int32_T ForEach_itr_b;
    int32_T i;

    /* SystemInitialize for Iterator SubSystem: '<Root>/xPC HC' */
    /* InitializeConditions for UnitDelay: '<S39>/Delay Input1' */
    HybridControllerD2D2_DW.DelayInput1_DSTATE =
      HybridControllerD2D2_P.DetectRisePositive_vinit;

    /* InitializeConditions for UnitDelay: '<S38>/Delay Input1' */
    HybridControllerD2D2_DW.DelayInput1_DSTATE_a =
      HybridControllerD2D2_P.DetectFallNonpositive_vinit;

    /* InitializeConditions for UnitDelay: '<S34>/Output' */
    HybridControllerD2D2_DW.Output_DSTATE =
      HybridControllerD2D2_P.Output_InitialCondition;

    /* InitializeConditions for UnitDelay: '<S30>/Output' */
    HybridControllerD2D2_DW.Output_DSTATE_f =
      HybridControllerD2D2_P.Output_InitialCondition_j;

    /* SystemInitialize for Chart: '<S7>/Predictor-Corrector' */
    HybridControllerD2D2_DW.sfEvent = -1;
    HybridControllerD2D2_DW.is_active_HybridController = 0U;
    HybridControllerD2D2_DW.is_HybridController = 0U;
    HybridControllerD2D2_DW.is_active_c2_HybridControllerD2 = 0U;
    HybridControllerD2D2_DW.di = 0.0;
    HybridControllerD2D2_DW.diSD = 0.0;
    HybridControllerD2D2_DW.iSD = 0.0;
    HybridControllerD2D2_DW.targLocal[0] = 0.0;
    HybridControllerD2D2_DW.targLocal[1] = 0.0;
    HybridControllerD2D2_B.comD[0] = 0.0;
    HybridControllerD2D2_B.comD[1] = 0.0;
    HybridControllerD2D2_B.comV[0] = 0.0;
    HybridControllerD2D2_B.comV[1] = 0.0;
    HybridControllerD2D2_B.comA[0] = 0.0;
    HybridControllerD2D2_B.comA[1] = 0.0;
    HybridControllerD2D2_B.state = 0;
    HybridControllerD2D2_B.i = 0.0;

    /* SystemInitialize for IfAction SubSystem: '<S46>/If Action Subsystem1' */
    HybridC_IfActionSubsystem1_Init(&HybridControllerD2D2_B.IfActionSubsystem1_h,
      &HybridControllerD2D2_P.IfActionSubsystem1_h);

    /* End of SystemInitialize for SubSystem: '<S46>/If Action Subsystem1' */

    /* SystemInitialize for IfAction SubSystem: '<S46>/If Action Subsystem2' */
    HybridC_IfActionSubsystem1_Init(&HybridControllerD2D2_B.IfActionSubsystem2,
      &HybridControllerD2D2_P.IfActionSubsystem2);

    /* End of SystemInitialize for SubSystem: '<S46>/If Action Subsystem2' */

    /* SystemInitialize for Iterator SubSystem: '<S24>/For Each Subsystem' */
    for (ForEach_itr = 0; ForEach_itr < 1; ForEach_itr++) {
      /* SystemInitialize for IfAction SubSystem: '<S48>/If Action Subsystem1' */
      HybridC_IfActionSubsystem1_Init
        (&HybridControllerD2D2_B.CoreSubsys_p[ForEach_itr].IfActionSubsystem1,
         &HybridControllerD2D2_P.CoreSubsys_p.IfActionSubsystem1);

      /* End of SystemInitialize for SubSystem: '<S48>/If Action Subsystem1' */

      /* SystemInitialize for IfAction SubSystem: '<S48>/If Action Subsystem2' */
      HybridC_IfActionSubsystem1_Init
        (&HybridControllerD2D2_B.CoreSubsys_p[ForEach_itr].IfActionSubsystem2,
         &HybridControllerD2D2_P.CoreSubsys_p.IfActionSubsystem2);

      /* End of SystemInitialize for SubSystem: '<S48>/If Action Subsystem2' */

      /* SystemInitialize for Triggered SubSystem: '<S44>/SubSystem' */
      /* SystemInitialize for Outport: '<S47>/measDsp Out' */
      HybridControllerD2D2_B.CoreSubsys_p[ForEach_itr].measDspIn =
        HybridControllerD2D2_P.CoreSubsys_p.measDspOut_Y0;

      /* SystemInitialize for Outport: '<S47>/measFrc Out' */
      HybridControllerD2D2_B.CoreSubsys_p[ForEach_itr].measFrcIn =
        HybridControllerD2D2_P.CoreSubsys_p.measFrcOut_Y0;

      /* End of SystemInitialize for SubSystem: '<S44>/SubSystem' */
    }

    /* End of SystemInitialize for SubSystem: '<S24>/For Each Subsystem' */
    /* End of SystemInitialize for SubSystem: '<Root>/xPC HC' */

    /* SystemInitialize for Iterator SubSystem: '<Root>/ATS compensator' */
    for (ForEach_itr_b = 0; ForEach_itr_b < 1; ForEach_itr_b++) {
      for (i = 0; i < 6; i++) {
        /* InitializeConditions for DiscreteTransferFcn: '<S1>/Butterworth filter' */
        HybridControllerD2D2_DW.CoreSubsys[ForEach_itr_b].
          Butterworthfilter_states[i] =
          HybridControllerD2D2_P.CoreSubsys.Butterworthfilter_InitialStates;

        /* InitializeConditions for DiscreteTransferFcn: '<S1>/Butterworth filter1' */
        HybridControllerD2D2_DW.CoreSubsys[ForEach_itr_b].
          Butterworthfilter1_states[i] =
          HybridControllerD2D2_P.CoreSubsys.Butterworthfilter1_InitialState;
      }

      for (i = 0; i < 1024; i++) {
        /* InitializeConditions for S-Function (sfix_udelay): '<S12>/Tapped Delay' */
        HybridControllerD2D2_DW.CoreSubsys[ForEach_itr_b].TappedDelay_X[i] =
          HybridControllerD2D2_P.CoreSubsys.TappedDelay_vinit;

        /* InitializeConditions for S-Function (sfix_udelay): '<S12>/Tapped Delay1' */
        HybridControllerD2D2_DW.CoreSubsys[ForEach_itr_b].TappedDelay1_X[i] =
          HybridControllerD2D2_P.CoreSubsys.TappedDelay1_vinit;

        /* InitializeConditions for S-Function (sfix_udelay): '<S1>/Tapped Delay' */
        HybridControllerD2D2_DW.CoreSubsys[ForEach_itr_b].TappedDelay_X_p[i] =
          HybridControllerD2D2_P.CoreSubsys.TappedDelay_vinit_e;

        /* InitializeConditions for S-Function (sfix_udelay): '<S12>/Tapped Delay2' */
        HybridControllerD2D2_DW.CoreSubsys[ForEach_itr_b].TappedDelay2_X[i] =
          HybridControllerD2D2_P.CoreSubsys.TappedDelay2_vinit;
      }

      /* InitializeConditions for UnitDelay: '<S10>/UD' */
      HybridControllerD2D2_DW.CoreSubsys[ForEach_itr_b].UD_DSTATE =
        HybridControllerD2D2_P.CoreSubsys.DiscreteDerivative_ICPrevScaled;

      /* InitializeConditions for UnitDelay: '<S11>/UD' */
      HybridControllerD2D2_DW.CoreSubsys[ForEach_itr_b].UD_DSTATE_p =
        HybridControllerD2D2_P.CoreSubsys.DiscreteDerivative1_ICPrevScale;

      /* InitializeConditions for UnitDelay: '<S1>/Unit Delay' */
      HybridControllerD2D2_DW.CoreSubsys[ForEach_itr_b].UnitDelay_DSTATE[0] =
        HybridControllerD2D2_P.CoreSubsys.UnitDelay_InitialCondition;
      HybridControllerD2D2_DW.CoreSubsys[ForEach_itr_b].UnitDelay_DSTATE[1] =
        HybridControllerD2D2_P.CoreSubsys.UnitDelay_InitialCondition;
      HybridControllerD2D2_DW.CoreSubsys[ForEach_itr_b].UnitDelay_DSTATE[2] =
        HybridControllerD2D2_P.CoreSubsys.UnitDelay_InitialCondition;
      HybridControllerD2D2_DW.CoreSubsys[ForEach_itr_b].UnitDelay_DSTATE[3] =
        HybridControllerD2D2_P.CoreSubsys.UnitDelay_InitialCondition;

      /* InitializeConditions for UnitDelay: '<S1>/Unit Delay1' */
      HybridControllerD2D2_DW.CoreSubsys[ForEach_itr_b].UnitDelay1_DSTATE =
        HybridControllerD2D2_P.CoreSubsys.UnitDelay1_InitialCondition;

      /* InitializeConditions for UnitDelay: '<S15>/UD' */
      HybridControllerD2D2_DW.CoreSubsys[ForEach_itr_b].UD_DSTATE_b =
        HybridControllerD2D2_P.CoreSubsys.DiscreteDerivative_ICPrevScal_a;

      /* InitializeConditions for UnitDelay: '<S16>/UD' */
      HybridControllerD2D2_DW.CoreSubsys[ForEach_itr_b].UD_DSTATE_b5 =
        HybridControllerD2D2_P.CoreSubsys.DiscreteDerivative1_ICPrevSca_b;
    }

    /* End of SystemInitialize for SubSystem: '<Root>/ATS compensator' */
  }
}

/* Model terminate function */
static void HybridControllerD2D2_terminate(void)
{
  /* user code (Terminate function Header) */

  /* disable interrupt for IRQ 2 */
  xpceDeRegisterISR( &xpcDev_1 );

  /* Terminate for S-Function (sg_IO901_IO902_setup_s): '<Root>/Setup ' */
  /* Level2 S-Function Block: '<Root>/Setup ' (sg_IO901_IO902_setup_s) */
  {
    SimStruct *rts = HybridControllerD2D2_M->childSfunctions[0];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (sg_IO901_IO902_read_s): '<S5>/Read ' */
  /* Level2 S-Function Block: '<S5>/Read ' (sg_IO901_IO902_read_s) */
  {
    SimStruct *rts = HybridControllerD2D2_M->childSfunctions[1];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (xpcdword2any): '<S5>/SCGT unpack' */
  /* Level2 S-Function Block: '<S5>/SCGT unpack' (xpcdword2any) */
  {
    SimStruct *rts = HybridControllerD2D2_M->childSfunctions[2];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (xpcany2dword): '<S6>/SCGT pack' */
  /* Level2 S-Function Block: '<S6>/SCGT pack' (xpcany2dword) */
  {
    SimStruct *rts = HybridControllerD2D2_M->childSfunctions[3];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (sg_IO901_IO902_write_s): '<S6>/Write ' */
  /* Level2 S-Function Block: '<S6>/Write ' (sg_IO901_IO902_write_s) */
  {
    SimStruct *rts = HybridControllerD2D2_M->childSfunctions[4];
    sfcnTerminate(rts);
  }
}

/*========================================================================*
 * Start of Classic call interface                                        *
 *========================================================================*/
void MdlOutputs(int_T tid)
{
  HybridControllerD2D2_output();
  UNUSED_PARAMETER(tid);
}

void MdlUpdate(int_T tid)
{
  HybridControllerD2D2_update();
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
  HybridControllerD2D2_initialize();
}

void MdlTerminate(void)
{
  HybridControllerD2D2_terminate();
}

/* Registration function */
RT_MODEL_HybridControllerD2D2_T *HybridControllerD2D2(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize real-time model */
  (void) memset((void *)HybridControllerD2D2_M, 0,
                sizeof(RT_MODEL_HybridControllerD2D2_T));
  rtsiSetSolverName(&HybridControllerD2D2_M->solverInfo,"FixedStepDiscrete");
  HybridControllerD2D2_M->solverInfoPtr = (&HybridControllerD2D2_M->solverInfo);

  /* Initialize timing info */
  {
    int_T *mdlTsMap = HybridControllerD2D2_M->Timing.sampleTimeTaskIDArray;
    mdlTsMap[0] = 0;
    HybridControllerD2D2_M->Timing.sampleTimeTaskIDPtr = (&mdlTsMap[0]);
    HybridControllerD2D2_M->Timing.sampleTimes =
      (&HybridControllerD2D2_M->Timing.sampleTimesArray[0]);
    HybridControllerD2D2_M->Timing.offsetTimes =
      (&HybridControllerD2D2_M->Timing.offsetTimesArray[0]);

    /* task periods */
    HybridControllerD2D2_M->Timing.sampleTimes[0] = (0.0009765625);

    /* task offsets */
    HybridControllerD2D2_M->Timing.offsetTimes[0] = (0.0);
  }

  rtmSetTPtr(HybridControllerD2D2_M, &HybridControllerD2D2_M->Timing.tArray[0]);

  {
    int_T *mdlSampleHits = HybridControllerD2D2_M->Timing.sampleHitArray;
    mdlSampleHits[0] = 1;
    HybridControllerD2D2_M->Timing.sampleHits = (&mdlSampleHits[0]);
  }

  rtmSetTFinal(HybridControllerD2D2_M, -1);
  HybridControllerD2D2_M->Timing.stepSize0 = 0.0009765625;

  /* Setup for data logging */
  {
    static RTWLogInfo rt_DataLoggingInfo;
    rt_DataLoggingInfo.loggingInterval = NULL;
    HybridControllerD2D2_M->rtwLogInfo = &rt_DataLoggingInfo;
  }

  /* Setup for data logging */
  {
    rtliSetLogXSignalInfo(HybridControllerD2D2_M->rtwLogInfo, (NULL));
    rtliSetLogXSignalPtrs(HybridControllerD2D2_M->rtwLogInfo, (NULL));
    rtliSetLogT(HybridControllerD2D2_M->rtwLogInfo, "");
    rtliSetLogX(HybridControllerD2D2_M->rtwLogInfo, "");
    rtliSetLogXFinal(HybridControllerD2D2_M->rtwLogInfo, "");
    rtliSetLogVarNameModifier(HybridControllerD2D2_M->rtwLogInfo, "rt_");
    rtliSetLogFormat(HybridControllerD2D2_M->rtwLogInfo, 0);
    rtliSetLogMaxRows(HybridControllerD2D2_M->rtwLogInfo, 0);
    rtliSetLogDecimation(HybridControllerD2D2_M->rtwLogInfo, 1);
    rtliSetLogY(HybridControllerD2D2_M->rtwLogInfo, "");
    rtliSetLogYSignalInfo(HybridControllerD2D2_M->rtwLogInfo, (NULL));
    rtliSetLogYSignalPtrs(HybridControllerD2D2_M->rtwLogInfo, (NULL));
  }

  HybridControllerD2D2_M->solverInfoPtr = (&HybridControllerD2D2_M->solverInfo);
  HybridControllerD2D2_M->Timing.stepSize = (0.0009765625);
  rtsiSetFixedStepSize(&HybridControllerD2D2_M->solverInfo, 0.0009765625);
  rtsiSetSolverMode(&HybridControllerD2D2_M->solverInfo,
                    SOLVER_MODE_SINGLETASKING);

  /* block I/O */
  HybridControllerD2D2_M->blockIO = ((void *) &HybridControllerD2D2_B);
  (void) memset(((void *) &HybridControllerD2D2_B), 0,
                sizeof(B_HybridControllerD2D2_T));

  {
    HybridControllerD2D2_B.typeConv6 = 0.0;
    HybridControllerD2D2_B.MovingAverageFilter = 0.0;
    HybridControllerD2D2_B.typeConv7 = 0.0;
    HybridControllerD2D2_B.MovingAverageFilter1 = 0.0;
    HybridControllerD2D2_B.ATSSwitch = 0.0;
    HybridControllerD2D2_B.Assignment = 0.0;
    HybridControllerD2D2_B.Saturation = 0.0;
    HybridControllerD2D2_B.typeConv1 = 0.0;
    HybridControllerD2D2_B.typeConv3 = 0.0;
    HybridControllerD2D2_B.typeConv4 = 0.0;
    HybridControllerD2D2_B.typeConv5 = 0.0;
    HybridControllerD2D2_B.typeConv8 = 0.0;
    HybridControllerD2D2_B.Gain = 0.0;
    HybridControllerD2D2_B.DummyZero = 0.0;
    HybridControllerD2D2_B.typeConv = 0.0;
    HybridControllerD2D2_B.Switch = 0.0;
    HybridControllerD2D2_B.MovingAverageFilter_p = 0.0;
    HybridControllerD2D2_B.typeConv_p = 0.0;
    HybridControllerD2D2_B.Switch_h = 0.0;
    HybridControllerD2D2_B.MovingAverageFilter1_j = 0.0;
    HybridControllerD2D2_B.counter = 0.0;
    HybridControllerD2D2_B.Gain4[0] = 0.0;
    HybridControllerD2D2_B.Gain4[1] = 0.0;
    HybridControllerD2D2_B.typeConv1_c = 0.0;
    HybridControllerD2D2_B.typeConv2[0] = 0.0;
    HybridControllerD2D2_B.typeConv2[1] = 0.0;
    HybridControllerD2D2_B.typeConv2[2] = 0.0;
    HybridControllerD2D2_B.typeConv3_h = 0.0;
    HybridControllerD2D2_B.measSignal[0] = 0.0;
    HybridControllerD2D2_B.measSignal[1] = 0.0;
    HybridControllerD2D2_B.ImpAsg_InsertedFor_measSig_at_i[0] = 0.0;
    HybridControllerD2D2_B.ImpAsg_InsertedFor_measSig_at_i[1] = 0.0;
    HybridControllerD2D2_B.TmpSignalConversionAtSFunctionI[0] = 0.0;
    HybridControllerD2D2_B.TmpSignalConversionAtSFunctionI[1] = 0.0;
    HybridControllerD2D2_B.comD[0] = 0.0;
    HybridControllerD2D2_B.comD[1] = 0.0;
    HybridControllerD2D2_B.comV[0] = 0.0;
    HybridControllerD2D2_B.comV[1] = 0.0;
    HybridControllerD2D2_B.comA[0] = 0.0;
    HybridControllerD2D2_B.comA[1] = 0.0;
    HybridControllerD2D2_B.i = 0.0;
    HybridControllerD2D2_B.Gain_a = 0.0;
    HybridControllerD2D2_B.DataStoreRead = 0.0;
    HybridControllerD2D2_B.Sum = 0.0;
    HybridControllerD2D2_B.DataStoreRead_c = 0.0;
    HybridControllerD2D2_B.Sum1 = 0.0;
    HybridControllerD2D2_B.Gain_n = 0.0;
    HybridControllerD2D2_B.DataStoreRead_p = 0.0;
    HybridControllerD2D2_B.Sum_n = 0.0;
    HybridControllerD2D2_B.DataStoreRead_k = 0.0;
    HybridControllerD2D2_B.Sum1_d = 0.0;
    HybridControllerD2D2_B.ImpAsg_InsertedFor_compdisp_at_ = 0.0;
    HybridControllerD2D2_B.ImpAsg_InsertedFor_apar_at_inpo[0] = 0.0;
    HybridControllerD2D2_B.ImpAsg_InsertedFor_apar_at_inpo[1] = 0.0;
    HybridControllerD2D2_B.ImpAsg_InsertedFor_apar_at_inpo[2] = 0.0;
    HybridControllerD2D2_B.ImpAsg_InsertedFor_apar_at_inpo[3] = 0.0;
    HybridControllerD2D2_B.typeConv1_p = 0.0F;
    HybridControllerD2D2_B.SCGTunpack_o1 = 0.0F;
    HybridControllerD2D2_B.SCGTunpack_o3 = 0.0F;
    HybridControllerD2D2_B.SCGTunpack_o4 = 0.0F;
    HybridControllerD2D2_B.SCGTunpack_o5 = 0.0F;
    HybridControllerD2D2_B.SCGTunpack_o6 = 0.0F;
    HybridControllerD2D2_B.SCGTunpack_o7 = 0.0F;
    HybridControllerD2D2_B.SCGTunpack_o8 = 0.0F;
    HybridControllerD2D2_B.typeConv3_k = 0.0F;
    HybridControllerD2D2_B.typeConv4_d = 0.0F;
    HybridControllerD2D2_B.typeConv5_d = 0.0F;
  }

  /* parameters */
  HybridControllerD2D2_M->defaultParam = ((real_T *)&HybridControllerD2D2_P);

  /* states (dwork) */
  HybridControllerD2D2_M->dwork = ((void *) &HybridControllerD2D2_DW);
  (void) memset((void *)&HybridControllerD2D2_DW, 0,
                sizeof(DW_HybridControllerD2D2_T));
  HybridControllerD2D2_DW.x0 = 0.0;
  HybridControllerD2D2_DW.x10 = 0.0;
  HybridControllerD2D2_DW.counter = 0.0;
  HybridControllerD2D2_DW.di = 0.0;
  HybridControllerD2D2_DW.diSD = 0.0;
  HybridControllerD2D2_DW.iSD = 0.0;
  HybridControllerD2D2_DW.targLocal[0] = 0.0;
  HybridControllerD2D2_DW.targLocal[1] = 0.0;

  /* Initialize DataMapInfo substructure containing ModelMap for C API */
  HybridControllerD2D2_InitializeDataMapInfo();

  /* child S-Function registration */
  {
    RTWSfcnInfo *sfcnInfo = &HybridControllerD2D2_M->NonInlinedSFcns.sfcnInfo;
    HybridControllerD2D2_M->sfcnInfo = (sfcnInfo);
    rtssSetErrorStatusPtr(sfcnInfo, (&rtmGetErrorStatus(HybridControllerD2D2_M)));
    rtssSetNumRootSampTimesPtr(sfcnInfo,
      &HybridControllerD2D2_M->Sizes.numSampTimes);
    HybridControllerD2D2_M->NonInlinedSFcns.taskTimePtrs[0] = &(rtmGetTPtr
      (HybridControllerD2D2_M)[0]);
    rtssSetTPtrPtr(sfcnInfo,HybridControllerD2D2_M->NonInlinedSFcns.taskTimePtrs);
    rtssSetTStartPtr(sfcnInfo, &rtmGetTStart(HybridControllerD2D2_M));
    rtssSetTFinalPtr(sfcnInfo, &rtmGetTFinal(HybridControllerD2D2_M));
    rtssSetTimeOfLastOutputPtr(sfcnInfo, &rtmGetTimeOfLastOutput
      (HybridControllerD2D2_M));
    rtssSetStepSizePtr(sfcnInfo, &HybridControllerD2D2_M->Timing.stepSize);
    rtssSetStopRequestedPtr(sfcnInfo, &rtmGetStopRequested
      (HybridControllerD2D2_M));
    rtssSetDerivCacheNeedsResetPtr(sfcnInfo,
      &HybridControllerD2D2_M->derivCacheNeedsReset);
    rtssSetZCCacheNeedsResetPtr(sfcnInfo,
      &HybridControllerD2D2_M->zCCacheNeedsReset);
    rtssSetContTimeOutputInconsistentWithStateAtMajorStepPtr(sfcnInfo,
      &HybridControllerD2D2_M->CTOutputIncnstWithState);
    rtssSetSampleHitsPtr(sfcnInfo, &HybridControllerD2D2_M->Timing.sampleHits);
    rtssSetPerTaskSampleHitsPtr(sfcnInfo,
      &HybridControllerD2D2_M->Timing.perTaskSampleHits);
    rtssSetSimModePtr(sfcnInfo, &HybridControllerD2D2_M->simMode);
    rtssSetSolverInfoPtr(sfcnInfo, &HybridControllerD2D2_M->solverInfoPtr);
  }

  HybridControllerD2D2_M->Sizes.numSFcns = (5);

  /* register each child */
  {
    (void) memset((void *)
                  &HybridControllerD2D2_M->NonInlinedSFcns.childSFunctions[0], 0,
                  5*sizeof(SimStruct));
    HybridControllerD2D2_M->childSfunctions =
      (&HybridControllerD2D2_M->NonInlinedSFcns.childSFunctionPtrs[0]);

    {
      int_T i;
      for (i = 0; i < 5; i++) {
        HybridControllerD2D2_M->childSfunctions[i] =
          (&HybridControllerD2D2_M->NonInlinedSFcns.childSFunctions[i]);
      }
    }

    /* Level2 S-Function Block: HybridControllerD2D2/<Root>/Setup  (sg_IO901_IO902_setup_s) */
    {
      SimStruct *rts = HybridControllerD2D2_M->childSfunctions[0];

      /* timing info */
      time_T *sfcnPeriod =
        HybridControllerD2D2_M->NonInlinedSFcns.Sfcn0.sfcnPeriod;
      time_T *sfcnOffset =
        HybridControllerD2D2_M->NonInlinedSFcns.Sfcn0.sfcnOffset;
      int_T *sfcnTsMap = HybridControllerD2D2_M->NonInlinedSFcns.Sfcn0.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &HybridControllerD2D2_M->NonInlinedSFcns.blkInfo2
                         [0]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &HybridControllerD2D2_M->NonInlinedSFcns.inputOutputPortInfo2[0]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, HybridControllerD2D2_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &HybridControllerD2D2_M->NonInlinedSFcns.methods2[0]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &HybridControllerD2D2_M->NonInlinedSFcns.methods3[0]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &HybridControllerD2D2_M->NonInlinedSFcns.methods4[0]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &HybridControllerD2D2_M->NonInlinedSFcns.statesInfo2[0]);
        ssSetPeriodicStatesInfo(rts,
          &HybridControllerD2D2_M->NonInlinedSFcns.periodicStatesInfo[0]);
      }

      /* path info */
      ssSetModelName(rts, "Setup ");
      ssSetPath(rts, "HybridControllerD2D2/Setup ");
      ssSetRTModel(rts,HybridControllerD2D2_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &HybridControllerD2D2_M->NonInlinedSFcns.Sfcn0.params;
        ssSetSFcnParamsCount(rts, 6);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)HybridControllerD2D2_P.Setup_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)HybridControllerD2D2_P.Setup_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)HybridControllerD2D2_P.Setup_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)HybridControllerD2D2_P.Setup_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)HybridControllerD2D2_P.Setup_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)HybridControllerD2D2_P.Setup_P6_Size);
      }

      /* work vectors */
      ssSetPWork(rts, (void **) &HybridControllerD2D2_DW.Setup_PWORK);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &HybridControllerD2D2_M->NonInlinedSFcns.Sfcn0.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &HybridControllerD2D2_M->NonInlinedSFcns.Sfcn0.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* PWORK */
        ssSetDWorkWidth(rts, 0, 1);
        ssSetDWorkDataType(rts, 0,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &HybridControllerD2D2_DW.Setup_PWORK);
      }

      /* registration */
      sg_IO901_IO902_setup_s(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.0009765625);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: HybridControllerD2D2/<S5>/Read  (sg_IO901_IO902_read_s) */
    {
      SimStruct *rts = HybridControllerD2D2_M->childSfunctions[1];

      /* timing info */
      time_T *sfcnPeriod =
        HybridControllerD2D2_M->NonInlinedSFcns.Sfcn1.sfcnPeriod;
      time_T *sfcnOffset =
        HybridControllerD2D2_M->NonInlinedSFcns.Sfcn1.sfcnOffset;
      int_T *sfcnTsMap = HybridControllerD2D2_M->NonInlinedSFcns.Sfcn1.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &HybridControllerD2D2_M->NonInlinedSFcns.blkInfo2
                         [1]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &HybridControllerD2D2_M->NonInlinedSFcns.inputOutputPortInfo2[1]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, HybridControllerD2D2_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &HybridControllerD2D2_M->NonInlinedSFcns.methods2[1]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &HybridControllerD2D2_M->NonInlinedSFcns.methods3[1]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &HybridControllerD2D2_M->NonInlinedSFcns.methods4[1]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &HybridControllerD2D2_M->NonInlinedSFcns.statesInfo2[1]);
        ssSetPeriodicStatesInfo(rts,
          &HybridControllerD2D2_M->NonInlinedSFcns.periodicStatesInfo[1]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &HybridControllerD2D2_M->NonInlinedSFcns.Sfcn1.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &HybridControllerD2D2_M->NonInlinedSFcns.Sfcn1.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &HybridControllerD2D2_M->NonInlinedSFcns.Sfcn1.outputPortCoSimAttribute
          [0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 8);
          ssSetOutputPortSignal(rts, 0, ((uint32_T *)
            HybridControllerD2D2_B.Read));
        }
      }

      /* path info */
      ssSetModelName(rts, "Read ");
      ssSetPath(rts, "HybridControllerD2D2/input from MTS (FT60)/Read ");
      ssSetRTModel(rts,HybridControllerD2D2_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &HybridControllerD2D2_M->NonInlinedSFcns.Sfcn1.params;
        ssSetSFcnParamsCount(rts, 5);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)HybridControllerD2D2_P.Read_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)HybridControllerD2D2_P.Read_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)HybridControllerD2D2_P.Read_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)HybridControllerD2D2_P.Read_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)HybridControllerD2D2_P.Read_P5_Size);
      }

      /* work vectors */
      ssSetPWork(rts, (void **) &HybridControllerD2D2_DW.Read_PWORK);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &HybridControllerD2D2_M->NonInlinedSFcns.Sfcn1.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &HybridControllerD2D2_M->NonInlinedSFcns.Sfcn1.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* PWORK */
        ssSetDWorkWidth(rts, 0, 1);
        ssSetDWorkDataType(rts, 0,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &HybridControllerD2D2_DW.Read_PWORK);
      }

      /* registration */
      sg_IO901_IO902_read_s(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.0009765625);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: HybridControllerD2D2/<S5>/SCGT unpack (xpcdword2any) */
    {
      SimStruct *rts = HybridControllerD2D2_M->childSfunctions[2];

      /* timing info */
      time_T *sfcnPeriod =
        HybridControllerD2D2_M->NonInlinedSFcns.Sfcn2.sfcnPeriod;
      time_T *sfcnOffset =
        HybridControllerD2D2_M->NonInlinedSFcns.Sfcn2.sfcnOffset;
      int_T *sfcnTsMap = HybridControllerD2D2_M->NonInlinedSFcns.Sfcn2.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &HybridControllerD2D2_M->NonInlinedSFcns.blkInfo2
                         [2]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &HybridControllerD2D2_M->NonInlinedSFcns.inputOutputPortInfo2[2]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, HybridControllerD2D2_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &HybridControllerD2D2_M->NonInlinedSFcns.methods2[2]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &HybridControllerD2D2_M->NonInlinedSFcns.methods3[2]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &HybridControllerD2D2_M->NonInlinedSFcns.methods4[2]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &HybridControllerD2D2_M->NonInlinedSFcns.statesInfo2[2]);
        ssSetPeriodicStatesInfo(rts,
          &HybridControllerD2D2_M->NonInlinedSFcns.periodicStatesInfo[2]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &HybridControllerD2D2_M->NonInlinedSFcns.Sfcn2.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &HybridControllerD2D2_M->NonInlinedSFcns.Sfcn2.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &HybridControllerD2D2_M->
          NonInlinedSFcns.Sfcn2.inputPortCoSimAttribute[0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, HybridControllerD2D2_B.Read);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 8);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &HybridControllerD2D2_M->NonInlinedSFcns.Sfcn2.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 8);
        _ssSetPortInfo2ForOutputUnits(rts,
          &HybridControllerD2D2_M->NonInlinedSFcns.Sfcn2.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        ssSetOutputPortUnit(rts, 1, 0);
        ssSetOutputPortUnit(rts, 2, 0);
        ssSetOutputPortUnit(rts, 3, 0);
        ssSetOutputPortUnit(rts, 4, 0);
        ssSetOutputPortUnit(rts, 5, 0);
        ssSetOutputPortUnit(rts, 6, 0);
        ssSetOutputPortUnit(rts, 7, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &HybridControllerD2D2_M->NonInlinedSFcns.Sfcn2.outputPortCoSimAttribute
          [0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 1, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 2, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 3, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 4, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 5, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 6, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 7, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((real32_T *)
            &HybridControllerD2D2_B.SCGTunpack_o1));
        }

        /* port 1 */
        {
          _ssSetOutputPortNumDimensions(rts, 1, 1);
          ssSetOutputPortWidth(rts, 1, 1);
          ssSetOutputPortSignal(rts, 1, ((uint32_T *)
            &HybridControllerD2D2_B.SCGTunpack_o2));
        }

        /* port 2 */
        {
          _ssSetOutputPortNumDimensions(rts, 2, 1);
          ssSetOutputPortWidth(rts, 2, 1);
          ssSetOutputPortSignal(rts, 2, ((real32_T *)
            &HybridControllerD2D2_B.SCGTunpack_o3));
        }

        /* port 3 */
        {
          _ssSetOutputPortNumDimensions(rts, 3, 1);
          ssSetOutputPortWidth(rts, 3, 1);
          ssSetOutputPortSignal(rts, 3, ((real32_T *)
            &HybridControllerD2D2_B.SCGTunpack_o4));
        }

        /* port 4 */
        {
          _ssSetOutputPortNumDimensions(rts, 4, 1);
          ssSetOutputPortWidth(rts, 4, 1);
          ssSetOutputPortSignal(rts, 4, ((real32_T *)
            &HybridControllerD2D2_B.SCGTunpack_o5));
        }

        /* port 5 */
        {
          _ssSetOutputPortNumDimensions(rts, 5, 1);
          ssSetOutputPortWidth(rts, 5, 1);
          ssSetOutputPortSignal(rts, 5, ((real32_T *)
            &HybridControllerD2D2_B.SCGTunpack_o6));
        }

        /* port 6 */
        {
          _ssSetOutputPortNumDimensions(rts, 6, 1);
          ssSetOutputPortWidth(rts, 6, 1);
          ssSetOutputPortSignal(rts, 6, ((real32_T *)
            &HybridControllerD2D2_B.SCGTunpack_o7));
        }

        /* port 7 */
        {
          _ssSetOutputPortNumDimensions(rts, 7, 1);
          ssSetOutputPortWidth(rts, 7, 1);
          ssSetOutputPortSignal(rts, 7, ((real32_T *)
            &HybridControllerD2D2_B.SCGTunpack_o8));
        }
      }

      /* path info */
      ssSetModelName(rts, "SCGT unpack");
      ssSetPath(rts, "HybridControllerD2D2/input from MTS (FT60)/SCGT unpack");
      ssSetRTModel(rts,HybridControllerD2D2_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &HybridControllerD2D2_M->NonInlinedSFcns.Sfcn2.params;
        ssSetSFcnParamsCount(rts, 4);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       HybridControllerD2D2_P.SCGTunpack_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       HybridControllerD2D2_P.SCGTunpack_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       HybridControllerD2D2_P.SCGTunpack_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       HybridControllerD2D2_P.SCGTunpack_P4_Size);
      }

      /* registration */
      xpcdword2any(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.0009765625);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

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
      _ssSetOutputPortConnected(rts, 6, 1);
      _ssSetOutputPortConnected(rts, 7, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);
      _ssSetOutputPortBeingMerged(rts, 1, 0);
      _ssSetOutputPortBeingMerged(rts, 2, 0);
      _ssSetOutputPortBeingMerged(rts, 3, 0);
      _ssSetOutputPortBeingMerged(rts, 4, 0);
      _ssSetOutputPortBeingMerged(rts, 5, 0);
      _ssSetOutputPortBeingMerged(rts, 6, 0);
      _ssSetOutputPortBeingMerged(rts, 7, 0);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: HybridControllerD2D2/<S6>/SCGT pack (xpcany2dword) */
    {
      SimStruct *rts = HybridControllerD2D2_M->childSfunctions[3];

      /* timing info */
      time_T *sfcnPeriod =
        HybridControllerD2D2_M->NonInlinedSFcns.Sfcn3.sfcnPeriod;
      time_T *sfcnOffset =
        HybridControllerD2D2_M->NonInlinedSFcns.Sfcn3.sfcnOffset;
      int_T *sfcnTsMap = HybridControllerD2D2_M->NonInlinedSFcns.Sfcn3.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &HybridControllerD2D2_M->NonInlinedSFcns.blkInfo2
                         [3]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &HybridControllerD2D2_M->NonInlinedSFcns.inputOutputPortInfo2[3]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, HybridControllerD2D2_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &HybridControllerD2D2_M->NonInlinedSFcns.methods2[3]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &HybridControllerD2D2_M->NonInlinedSFcns.methods3[3]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &HybridControllerD2D2_M->NonInlinedSFcns.methods4[3]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &HybridControllerD2D2_M->NonInlinedSFcns.statesInfo2[3]);
        ssSetPeriodicStatesInfo(rts,
          &HybridControllerD2D2_M->NonInlinedSFcns.periodicStatesInfo[3]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 5);
        ssSetPortInfoForInputs(rts,
          &HybridControllerD2D2_M->NonInlinedSFcns.Sfcn3.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &HybridControllerD2D2_M->NonInlinedSFcns.Sfcn3.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        ssSetInputPortUnit(rts, 1, 0);
        ssSetInputPortUnit(rts, 2, 0);
        ssSetInputPortUnit(rts, 3, 0);
        ssSetInputPortUnit(rts, 4, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &HybridControllerD2D2_M->
          NonInlinedSFcns.Sfcn3.inputPortCoSimAttribute[0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);
        ssSetInputPortIsContinuousQuantity(rts, 1, 0);
        ssSetInputPortIsContinuousQuantity(rts, 2, 0);
        ssSetInputPortIsContinuousQuantity(rts, 3, 0);
        ssSetInputPortIsContinuousQuantity(rts, 4, 0);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, &HybridControllerD2D2_B.typeConv1_p);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }

        /* port 1 */
        {
          ssSetInputPortRequiredContiguous(rts, 1, 1);
          ssSetInputPortSignal(rts, 1, &HybridControllerD2D2_B.typeConv2_i);
          _ssSetInputPortNumDimensions(rts, 1, 1);
          ssSetInputPortWidth(rts, 1, 1);
        }

        /* port 2 */
        {
          ssSetInputPortRequiredContiguous(rts, 2, 1);
          ssSetInputPortSignal(rts, 2, &HybridControllerD2D2_B.typeConv3_k);
          _ssSetInputPortNumDimensions(rts, 2, 1);
          ssSetInputPortWidth(rts, 2, 1);
        }

        /* port 3 */
        {
          ssSetInputPortRequiredContiguous(rts, 3, 1);
          ssSetInputPortSignal(rts, 3, &HybridControllerD2D2_B.typeConv4_d);
          _ssSetInputPortNumDimensions(rts, 3, 1);
          ssSetInputPortWidth(rts, 3, 1);
        }

        /* port 4 */
        {
          ssSetInputPortRequiredContiguous(rts, 4, 1);
          ssSetInputPortSignal(rts, 4, &HybridControllerD2D2_B.typeConv5_d);
          _ssSetInputPortNumDimensions(rts, 4, 1);
          ssSetInputPortWidth(rts, 4, 1);
        }
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &HybridControllerD2D2_M->NonInlinedSFcns.Sfcn3.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 1);
        _ssSetPortInfo2ForOutputUnits(rts,
          &HybridControllerD2D2_M->NonInlinedSFcns.Sfcn3.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &HybridControllerD2D2_M->NonInlinedSFcns.Sfcn3.outputPortCoSimAttribute
          [0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 5);
          ssSetOutputPortSignal(rts, 0, ((uint32_T *)
            HybridControllerD2D2_B.SCGTpack));
        }
      }

      /* path info */
      ssSetModelName(rts, "SCGT pack");
      ssSetPath(rts, "HybridControllerD2D2/output to MTS (FT60)/SCGT pack");
      ssSetRTModel(rts,HybridControllerD2D2_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &HybridControllerD2D2_M->NonInlinedSFcns.Sfcn3.params;
        ssSetSFcnParamsCount(rts, 4);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)HybridControllerD2D2_P.SCGTpack_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)HybridControllerD2D2_P.SCGTpack_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)HybridControllerD2D2_P.SCGTpack_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)HybridControllerD2D2_P.SCGTpack_P4_Size);
      }

      /* registration */
      xpcany2dword(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.0009765625);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetInputPortWidth(rts, 0, 1);
      ssSetInputPortDataType(rts, 0, SS_SINGLE);
      ssSetInputPortComplexSignal(rts, 0, 0);
      ssSetInputPortFrameData(rts, 0, 0);
      ssSetInputPortUnit(rts, 0, 0);
      ssSetInputPortIsContinuousQuantity(rts, 0, 0);
      ssSetInputPortWidth(rts, 1, 1);
      ssSetInputPortDataType(rts, 1, SS_UINT32);
      ssSetInputPortComplexSignal(rts, 1, 0);
      ssSetInputPortFrameData(rts, 1, 0);
      ssSetInputPortUnit(rts, 1, 0);
      ssSetInputPortIsContinuousQuantity(rts, 1, 0);
      ssSetInputPortWidth(rts, 2, 1);
      ssSetInputPortDataType(rts, 2, SS_SINGLE);
      ssSetInputPortComplexSignal(rts, 2, 0);
      ssSetInputPortFrameData(rts, 2, 0);
      ssSetInputPortUnit(rts, 2, 0);
      ssSetInputPortIsContinuousQuantity(rts, 2, 0);
      ssSetInputPortWidth(rts, 3, 1);
      ssSetInputPortDataType(rts, 3, SS_SINGLE);
      ssSetInputPortComplexSignal(rts, 3, 0);
      ssSetInputPortFrameData(rts, 3, 0);
      ssSetInputPortUnit(rts, 3, 0);
      ssSetInputPortIsContinuousQuantity(rts, 3, 0);
      ssSetInputPortWidth(rts, 4, 1);
      ssSetInputPortDataType(rts, 4, SS_SINGLE);
      ssSetInputPortComplexSignal(rts, 4, 0);
      ssSetInputPortFrameData(rts, 4, 0);
      ssSetInputPortUnit(rts, 4, 0);
      ssSetInputPortIsContinuousQuantity(rts, 4, 0);
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);
      _ssSetInputPortConnected(rts, 1, 1);
      _ssSetInputPortConnected(rts, 2, 1);
      _ssSetInputPortConnected(rts, 3, 1);
      _ssSetInputPortConnected(rts, 4, 1);
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
      ssSetInputPortBufferDstPort(rts, 1, -1);
      ssSetInputPortBufferDstPort(rts, 2, -1);
      ssSetInputPortBufferDstPort(rts, 3, -1);
      ssSetInputPortBufferDstPort(rts, 4, -1);
    }

    /* Level2 S-Function Block: HybridControllerD2D2/<S6>/Write  (sg_IO901_IO902_write_s) */
    {
      SimStruct *rts = HybridControllerD2D2_M->childSfunctions[4];

      /* timing info */
      time_T *sfcnPeriod =
        HybridControllerD2D2_M->NonInlinedSFcns.Sfcn4.sfcnPeriod;
      time_T *sfcnOffset =
        HybridControllerD2D2_M->NonInlinedSFcns.Sfcn4.sfcnOffset;
      int_T *sfcnTsMap = HybridControllerD2D2_M->NonInlinedSFcns.Sfcn4.sfcnTsMap;
      (void) memset((void*)sfcnPeriod, 0,
                    sizeof(time_T)*1);
      (void) memset((void*)sfcnOffset, 0,
                    sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &HybridControllerD2D2_M->NonInlinedSFcns.blkInfo2
                         [4]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &HybridControllerD2D2_M->NonInlinedSFcns.inputOutputPortInfo2[4]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, HybridControllerD2D2_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts,
                           &HybridControllerD2D2_M->NonInlinedSFcns.methods2[4]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts,
                           &HybridControllerD2D2_M->NonInlinedSFcns.methods3[4]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts,
                           &HybridControllerD2D2_M->NonInlinedSFcns.methods4[4]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts,
                         &HybridControllerD2D2_M->NonInlinedSFcns.statesInfo2[4]);
        ssSetPeriodicStatesInfo(rts,
          &HybridControllerD2D2_M->NonInlinedSFcns.periodicStatesInfo[4]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &HybridControllerD2D2_M->NonInlinedSFcns.Sfcn4.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &HybridControllerD2D2_M->NonInlinedSFcns.Sfcn4.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &HybridControllerD2D2_M->
          NonInlinedSFcns.Sfcn4.inputPortCoSimAttribute[0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, HybridControllerD2D2_B.SCGTpack);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 5);
        }
      }

      /* path info */
      ssSetModelName(rts, "Write ");
      ssSetPath(rts, "HybridControllerD2D2/output to MTS (FT60)/Write ");
      ssSetRTModel(rts,HybridControllerD2D2_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &HybridControllerD2D2_M->NonInlinedSFcns.Sfcn4.params;
        ssSetSFcnParamsCount(rts, 5);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)HybridControllerD2D2_P.Write_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)HybridControllerD2D2_P.Write_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)HybridControllerD2D2_P.Write_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)HybridControllerD2D2_P.Write_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)HybridControllerD2D2_P.Write_P5_Size);
      }

      /* work vectors */
      ssSetPWork(rts, (void **) &HybridControllerD2D2_DW.Write_PWORK);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &HybridControllerD2D2_M->NonInlinedSFcns.Sfcn4.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &HybridControllerD2D2_M->NonInlinedSFcns.Sfcn4.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* PWORK */
        ssSetDWorkWidth(rts, 0, 1);
        ssSetDWorkDataType(rts, 0,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &HybridControllerD2D2_DW.Write_PWORK);
      }

      /* registration */
      sg_IO901_IO902_write_s(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.0009765625);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 0;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }
  }

  /* Initialize Sizes */
  HybridControllerD2D2_M->Sizes.numContStates = (0);/* Number of continuous states */
  HybridControllerD2D2_M->Sizes.numY = (0);/* Number of model outputs */
  HybridControllerD2D2_M->Sizes.numU = (0);/* Number of model inputs */
  HybridControllerD2D2_M->Sizes.sysDirFeedThru = (0);/* The model is not direct feedthrough */
  HybridControllerD2D2_M->Sizes.numSampTimes = (1);/* Number of sample times */
  HybridControllerD2D2_M->Sizes.numBlocks = (203);/* Number of blocks */
  HybridControllerD2D2_M->Sizes.numBlockIO = (127);/* Number of block outputs */
  HybridControllerD2D2_M->Sizes.numBlockPrms = (238);/* Sum of parameter "widths" */
  return HybridControllerD2D2_M;
}

/*========================================================================*
 * End of Classic call interface                                          *
 *========================================================================*/
