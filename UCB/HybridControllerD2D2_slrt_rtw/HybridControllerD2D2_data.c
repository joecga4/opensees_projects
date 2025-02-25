/*
 * HybridControllerD2D2_data.c
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

#include "HybridControllerD2D2.h"
#include "HybridControllerD2D2_private.h"

/* Block parameters (default storage) */
P_HybridControllerD2D2_T HybridControllerD2D2_P = {
  /* Variable: HybridCtrlParameters
   * Referenced by:
   *   '<S7>/Predictor-Corrector'
   *   '<S24>/Constant'
   */
  {
    1.0,
    0.01953125,
    0.01953125,
    0.0,
    5.0,
    0.0001953125,
    100.0,
    0.0,
    1.0
  },

  /* Variable: MRC
   * Referenced by: '<S1>/Constant4'
   */
  { 0.2, 0.005, 0.0001 },

  /* Variable: P_range
   * Referenced by: '<S1>/Constant2'
   */
  { 0.9, 0.0, 0.0, 1.1, 0.06, 0.0032 },

  /* Variable: Par
   * Referenced by: '<Root>/ATS compensator'
   */
  { 1.0, 0.02, 0.0002 },

  /* Variable: Threshold
   * Referenced by: '<S1>/Constant3'
   */
  0.01,

  /* Variable: Zden
   * Referenced by:
   *   '<S1>/Butterworth filter'
   *   '<S1>/Butterworth filter1'
   */
  { 1.0, -5.5262876343675664, 12.742336654018604, -15.690229769747765,
    10.88110574485178, -4.0293375957292952, 0.62241529560692155 },

  /* Variable: Znum
   * Referenced by:
   *   '<S1>/Butterworth filter'
   *   '<S1>/Butterworth filter1'
   */
  { 0.0, 4.4318474755218089E-9, 2.3590854753268597E-7, 1.1675312146200942E-6,
    1.0910731491069404E-6, 1.9252928107999446E-7, 3.1586410305860633E-9 },

  /* Mask Parameter: assemble3_id
   * Referenced by: '<S17>/Constant'
   */
  1.0,

  /* Mask Parameter: Offset1_nOffset
   * Referenced by:
   *   '<S20>/Switch'
   *   '<S31>/Gain'
   */
  -1.0,

  /* Mask Parameter: Offset2_nOffset
   * Referenced by:
   *   '<S21>/Switch'
   *   '<S35>/Gain'
   */
  -1.0,

  /* Mask Parameter: MovingAverageFilter_numSample
   * Referenced by: '<S7>/MovingAverage Filter'
   */
  1.0,

  /* Mask Parameter: MovingAverageFilter1_numSample
   * Referenced by: '<S7>/MovingAverage Filter1'
   */
  1.0,

  /* Mask Parameter: MovingAverageFilter_numSample_c
   * Referenced by: '<S3>/MovingAverage Filter'
   */
  1.0,

  /* Mask Parameter: MovingAverageFilter1_numSampl_b
   * Referenced by: '<S4>/MovingAverage Filter1'
   */
  1.0,

  /* Mask Parameter: xPCHC_upFact
   * Referenced by: '<S7>/For Iterator'
   */
  5,

  /* Mask Parameter: WrapToZero_Threshold
   * Referenced by: '<S33>/FixPt Switch'
   */
  4294967295U,

  /* Mask Parameter: WrapToZero_Threshold_f
   * Referenced by: '<S37>/FixPt Switch'
   */
  4294967295U,

  /* Mask Parameter: DetectRisePositive_vinit
   * Referenced by: '<S39>/Delay Input1'
   */
  0U,

  /* Mask Parameter: DetectFallNonpositive_vinit
   * Referenced by: '<S38>/Delay Input1'
   */
  0U,

  /* Expression: zeros(1,nS)
   * Referenced by: '<S20>/Constant'
   */
  0.0,

  /* Expression: zeros(1,nS)
   * Referenced by: '<S21>/Constant'
   */
  0.0,

  /* Expression: zeros(1,nDOF)
   * Referenced by: '<S7>/targSignal'
   */
  0.0,

  /* Expression: 1
   * Referenced by: '<S7>/Gain'
   */
  1.0,

  /* Expression: 0
   * Referenced by: '<S25>/Dummy Zero'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S7>/MovingAverage Filter'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S7>/MovingAverage Filter1'
   */
  0.0,

  /* Expression: zeros(1,nS)
   * Referenced by: '<S20>/Data Store Memory'
   */
  0.0,

  /* Expression: zeros(1,nS)
   * Referenced by: '<S21>/Data Store Memory'
   */
  0.0,

  /* Expression: max(iDelay)
   * Referenced by: '<S46>/Constant'
   */
  0.0,

  /* Expression: N
   * Referenced by: '<S46>/Constant1'
   */
  100.0,

  /* Expression: 1
   * Referenced by: '<S24>/Gain4'
   */
  1.0,

  /* Expression: 1
   * Referenced by: '<S7>/measSignal'
   */
  1.0,

  /* Expression: 0
   * Referenced by: '<S7>/iMem'
   */
  0.0,

  /* Computed Parameter: Setup_P1_Size
   * Referenced by: '<Root>/Setup '
   */
  { 1.0, 1.0 },

  /* Expression: node(1).Interface.Internal.NodeID
   * Referenced by: '<Root>/Setup '
   */
  2.0,

  /* Computed Parameter: Setup_P2_Size
   * Referenced by: '<Root>/Setup '
   */
  { 1.0, 1.0 },

  /* Expression: node(1).Interface.Internal.ActiveInterface
   * Referenced by: '<Root>/Setup '
   */
  -1.0,

  /* Computed Parameter: Setup_P3_Size
   * Referenced by: '<Root>/Setup '
   */
  { 1.0, 15.0 },

  /* Expression: node.Interface.Internal.Options
   * Referenced by: '<Root>/Setup '
   */
  { -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, 1.0, -1.0, -1.0, -1.0, -1.0,
    -1.0, -1.0 },

  /* Computed Parameter: Setup_P4_Size
   * Referenced by: '<Root>/Setup '
   */
  { 1.0, 1.0 },

  /* Expression: node(1).Interface.Internal.Mask
   * Referenced by: '<Root>/Setup '
   */
  2.0,

  /* Computed Parameter: Setup_P5_Size
   * Referenced by: '<Root>/Setup '
   */
  { 1.0, 1.0 },

  /* Expression: pci
   * Referenced by: '<Root>/Setup '
   */
  -1.0,

  /* Computed Parameter: Setup_P6_Size
   * Referenced by: '<Root>/Setup '
   */
  { 1.0, 1.0 },

  /* Expression: id
   * Referenced by: '<Root>/Setup '
   */
  1.0,

  /* Expression: 0
   * Referenced by: '<Root>/master span'
   */
  0.0,

  /* Expression: zeros(nAct,1)
   * Referenced by: '<Root>/ctl modes'
   */
  0.0,

  /* Computed Parameter: Read_P1_Size
   * Referenced by: '<S5>/Read '
   */
  { 1.0, 1.0 },

  /* Expression: partition(1).Internal.Address
   * Referenced by: '<S5>/Read '
   */
  20.0,

  /* Computed Parameter: Read_P2_Size
   * Referenced by: '<S5>/Read '
   */
  { 1.0, 1.0 },

  /* Expression: partition(1).Internal.NDwords
   * Referenced by: '<S5>/Read '
   */
  8.0,

  /* Computed Parameter: Read_P3_Size
   * Referenced by: '<S5>/Read '
   */
  { 1.0, 1.0 },

  /* Expression: ts
   * Referenced by: '<S5>/Read '
   */
  0.0009765625,

  /* Computed Parameter: Read_P4_Size
   * Referenced by: '<S5>/Read '
   */
  { 1.0, 1.0 },

  /* Expression: pci
   * Referenced by: '<S5>/Read '
   */
  -1.0,

  /* Computed Parameter: Read_P5_Size
   * Referenced by: '<S5>/Read '
   */
  { 1.0, 1.0 },

  /* Expression: id
   * Referenced by: '<S5>/Read '
   */
  1.0,

  /* Computed Parameter: SCGTunpack_P1_Size
   * Referenced by: '<S5>/SCGT unpack'
   */
  { 1.0, 8.0 },

  /* Expression: get(partition(1),'IType')
   * Referenced by: '<S5>/SCGT unpack'
   */
  { 1.0, 7.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0 },

  /* Computed Parameter: SCGTunpack_P2_Size
   * Referenced by: '<S5>/SCGT unpack'
   */
  { 2.0, 8.0 },

  /* Expression: get(partition(1),'ISize')
   * Referenced by: '<S5>/SCGT unpack'
   */
  { 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0,
    0.0 },

  /* Computed Parameter: SCGTunpack_P3_Size
   * Referenced by: '<S5>/SCGT unpack'
   */
  { 1.0, 8.0 },

  /* Expression: get(partition(1),'IAddress')
   * Referenced by: '<S5>/SCGT unpack'
   */
  { 20.0, 24.0, 28.0, 32.0, 36.0, 40.0, 44.0, 48.0 },

  /* Computed Parameter: SCGTunpack_P4_Size
   * Referenced by: '<S5>/SCGT unpack'
   */
  { 1.0, 1.0 },

  /* Expression: sizeof(partition(1))
   * Referenced by: '<S5>/SCGT unpack'
   */
  32.0,

  /* Expression: 0
   * Referenced by: '<S3>/MovingAverage Filter'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S4>/MovingAverage Filter1'
   */
  0.0,

  /* Expression: 5
   * Referenced by: '<S2>/Saturation'
   */
  5.0,

  /* Expression: -5
   * Referenced by: '<S2>/Saturation'
   */
  -5.0,

  /* Expression: zeros(nAct,1)
   * Referenced by: '<Root>/force cmds'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<Root>/valve cmds'
   */
  0.0,

  /* Computed Parameter: SCGTpack_P1_Size
   * Referenced by: '<S6>/SCGT pack'
   */
  { 1.0, 5.0 },

  /* Expression: get(partition(1),'IType')
   * Referenced by: '<S6>/SCGT pack'
   */
  { 1.0, 7.0, 1.0, 1.0, 1.0 },

  /* Computed Parameter: SCGTpack_P2_Size
   * Referenced by: '<S6>/SCGT pack'
   */
  { 2.0, 5.0 },

  /* Expression: get(partition(1),'ISize')
   * Referenced by: '<S6>/SCGT pack'
   */
  { 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0 },

  /* Computed Parameter: SCGTpack_P3_Size
   * Referenced by: '<S6>/SCGT pack'
   */
  { 1.0, 5.0 },

  /* Expression: get(partition(1),'IAddress')
   * Referenced by: '<S6>/SCGT pack'
   */
  { 0.0, 4.0, 8.0, 12.0, 16.0 },

  /* Computed Parameter: SCGTpack_P4_Size
   * Referenced by: '<S6>/SCGT pack'
   */
  { 1.0, 1.0 },

  /* Expression: sizeof(partition(1))
   * Referenced by: '<S6>/SCGT pack'
   */
  20.0,

  /* Computed Parameter: Write_P1_Size
   * Referenced by: '<S6>/Write '
   */
  { 1.0, 1.0 },

  /* Expression: partition(1).Internal.Address
   * Referenced by: '<S6>/Write '
   */
  0.0,

  /* Computed Parameter: Write_P2_Size
   * Referenced by: '<S6>/Write '
   */
  { 1.0, 1.0 },

  /* Expression: partition(1).Internal.NDwords
   * Referenced by: '<S6>/Write '
   */
  5.0,

  /* Computed Parameter: Write_P3_Size
   * Referenced by: '<S6>/Write '
   */
  { 1.0, 1.0 },

  /* Expression: ts
   * Referenced by: '<S6>/Write '
   */
  0.0009765625,

  /* Computed Parameter: Write_P4_Size
   * Referenced by: '<S6>/Write '
   */
  { 1.0, 1.0 },

  /* Expression: pci
   * Referenced by: '<S6>/Write '
   */
  -1.0,

  /* Computed Parameter: Write_P5_Size
   * Referenced by: '<S6>/Write '
   */
  { 1.0, 1.0 },

  /* Expression: id
   * Referenced by: '<S6>/Write '
   */
  1.0,

  /* Expression: N
   * Referenced by: '<S7>/Predictor-Corrector'
   */
  100,

  /* Computed Parameter: PredictorCorrector_nDOF
   * Referenced by: '<S7>/Predictor-Corrector'
   */
  1,

  /* Computed Parameter: switchFlag_Value
   * Referenced by: '<S40>/switchFlag'
   */
  1,

  /* Computed Parameter: atTargetFlag_Value
   * Referenced by: '<S40>/atTargetFlag'
   */
  0,

  /* Computed Parameter: switchFlag_Value_l
   * Referenced by: '<S41>/switchFlag'
   */
  0,

  /* Computed Parameter: atTargetFlag_Value_e
   * Referenced by: '<S45>/atTargetFlag'
   */
  1,

  /* Computed Parameter: Constant_Value_e
   * Referenced by: '<S42>/Constant'
   */
  0,

  /* Computed Parameter: Constant_Value_h
   * Referenced by: '<S43>/Constant'
   */
  0,

  /* Computed Parameter: newTarget_Value
   * Referenced by: '<S7>/newTarget'
   */
  0,

  /* Computed Parameter: sMem_InitialValue
   * Referenced by: '<S7>/sMem'
   */
  0,

  /* Computed Parameter: tMem_InitialValue
   * Referenced by: '<S7>/tMem'
   */
  0,

  /* Computed Parameter: Gain1_Gain
   * Referenced by: '<S7>/Gain1'
   */
  1073741824,

  /* Computed Parameter: Output_InitialCondition
   * Referenced by: '<S34>/Output'
   */
  0U,

  /* Computed Parameter: Output_InitialCondition_j
   * Referenced by: '<S30>/Output'
   */
  0U,

  /* Computed Parameter: FixPtConstant_Value
   * Referenced by: '<S32>/FixPt Constant'
   */
  1U,

  /* Computed Parameter: Constant_Value_d
   * Referenced by: '<S33>/Constant'
   */
  0U,

  /* Computed Parameter: FixPtConstant_Value_b
   * Referenced by: '<S36>/FixPt Constant'
   */
  1U,

  /* Computed Parameter: Constant_Value_p
   * Referenced by: '<S37>/Constant'
   */
  0U,

  /* Computed Parameter: ATSSwitch_CurrentSetting
   * Referenced by: '<Root>/ATS Switch'
   */
  0U,

  /* Start of '<S46>/If Action Subsystem2' */
  {
    /* Computed Parameter: Out1_Y0
     * Referenced by: '<S52>/Out1'
     */
    0
  }
  ,

  /* End of '<S46>/If Action Subsystem2' */

  /* Start of '<S46>/If Action Subsystem1' */
  {
    /* Computed Parameter: Out1_Y0
     * Referenced by: '<S51>/Out1'
     */
    0
  }
  ,

  /* End of '<S46>/If Action Subsystem1' */

  /* Start of '<S44>/CoreSubsys' */
  {
    /* Expression: [0]
     * Referenced by: '<S47>/measDsp Out'
     */
    0.0,

    /* Expression: [0]
     * Referenced by: '<S47>/measFrc Out'
     */
    0.0,

    /* Expression: N
     * Referenced by: '<S48>/Constant1'
     */
    100.0,

    /* Start of '<S48>/If Action Subsystem2' */
    {
      /* Computed Parameter: Out1_Y0
       * Referenced by: '<S50>/Out1'
       */
      0
    }
    ,

    /* End of '<S48>/If Action Subsystem2' */

    /* Start of '<S48>/If Action Subsystem1' */
    {
      /* Computed Parameter: Out1_Y0
       * Referenced by: '<S49>/Out1'
       */
      0
    }
    /* End of '<S48>/If Action Subsystem1' */
  }
  ,

  /* End of '<S44>/CoreSubsys' */

  /* Start of '<S1>/CoreSubsys' */
  {
    /* Mask Parameter: DiscreteDerivative_ICPrevScaled
     * Referenced by: '<S10>/UD'
     */
    0.0,

    /* Mask Parameter: DiscreteDerivative1_ICPrevScale
     * Referenced by: '<S11>/UD'
     */
    0.0,

    /* Mask Parameter: DiscreteDerivative_ICPrevScal_a
     * Referenced by: '<S15>/UD'
     */
    0.0,

    /* Mask Parameter: DiscreteDerivative1_ICPrevSca_b
     * Referenced by: '<S16>/UD'
     */
    0.0,

    /* Mask Parameter: TappedDelay_vinit
     * Referenced by: '<S12>/Tapped Delay'
     */
    0.0,

    /* Mask Parameter: TappedDelay1_vinit
     * Referenced by: '<S12>/Tapped Delay1'
     */
    0.0,

    /* Mask Parameter: TappedDelay_vinit_e
     * Referenced by: '<S1>/Tapped Delay'
     */
    0.0,

    /* Mask Parameter: TappedDelay2_vinit
     * Referenced by: '<S12>/Tapped Delay2'
     */
    0.0,

    /* Expression: 0
     * Referenced by: '<S1>/Butterworth filter'
     */
    0.0,

    /* Expression: 0
     * Referenced by: '<S1>/Butterworth filter1'
     */
    0.0,

    /* Computed Parameter: TSamp_WtEt
     * Referenced by: '<S10>/TSamp'
     */
    1024.0,

    /* Computed Parameter: TSamp_WtEt_o
     * Referenced by: '<S11>/TSamp'
     */
    1024.0,

    /* Expression: 0
     * Referenced by: '<S1>/Unit Delay'
     */
    0.0,

    /* Expression: 0
     * Referenced by: '<S1>/Unit Delay1'
     */
    0.0,

    /* Computed Parameter: TSamp_WtEt_k
     * Referenced by: '<S15>/TSamp'
     */
    1024.0,

    /* Computed Parameter: TSamp_WtEt_j
     * Referenced by: '<S16>/TSamp'
     */
    1024.0,

    /* Computed Parameter: ManualSwitch_CurrentSetting
     * Referenced by: '<S1>/Manual Switch'
     */
    0U,

    /* Computed Parameter: ManualSwitch1_CurrentSetting
     * Referenced by: '<S1>/Manual Switch1'
     */
    0U
  }
  /* End of '<S1>/CoreSubsys' */
};
