/*
 * com_FT60_2020a_data.c
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

#include "com_FT60_2020a.h"
#include "com_FT60_2020a_private.h"

/* Block parameters (default storage) */
P_com_FT60_2020a_T com_FT60_2020a_P = {
  /* Computed Parameter: Setup_P1_Size
   * Referenced by: '<Root>/Setup '
   */
  { 1.0, 1.0 },

  /* Expression: node(1).Interface.Internal.NodeID
   * Referenced by: '<Root>/Setup '
   */
  20.0,

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
  1.073741824E+9,

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

  /* Computed Parameter: Read_P1_Size
   * Referenced by: '<Root>/Read '
   */
  { 1.0, 1.0 },

  /* Expression: partition(1).Internal.Address
   * Referenced by: '<Root>/Read '
   */
  28.0,

  /* Computed Parameter: Read_P2_Size
   * Referenced by: '<Root>/Read '
   */
  { 1.0, 1.0 },

  /* Expression: partition(1).Internal.NDwords
   * Referenced by: '<Root>/Read '
   */
  6.0,

  /* Computed Parameter: Read_P3_Size
   * Referenced by: '<Root>/Read '
   */
  { 1.0, 1.0 },

  /* Expression: ts
   * Referenced by: '<Root>/Read '
   */
  0.001,

  /* Computed Parameter: Read_P4_Size
   * Referenced by: '<Root>/Read '
   */
  { 1.0, 1.0 },

  /* Expression: pci
   * Referenced by: '<Root>/Read '
   */
  -1.0,

  /* Computed Parameter: Read_P5_Size
   * Referenced by: '<Root>/Read '
   */
  { 1.0, 1.0 },

  /* Expression: id
   * Referenced by: '<Root>/Read '
   */
  1.0,

  /* Computed Parameter: SharedMemoryUnpack_P1_Size
   * Referenced by: '<Root>/Shared Memory Unpack '
   */
  { 1.0, 6.0 },

  /* Expression: get(partition(1),'IType')
   * Referenced by: '<Root>/Shared Memory Unpack '
   */
  { 1.0, 1.0, 1.0, 1.0, 1.0, 1.0 },

  /* Computed Parameter: SharedMemoryUnpack_P2_Size
   * Referenced by: '<Root>/Shared Memory Unpack '
   */
  { 2.0, 6.0 },

  /* Expression: get(partition(1),'ISize')
   * Referenced by: '<Root>/Shared Memory Unpack '
   */
  { 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0, 1.0, 0.0 },

  /* Computed Parameter: SharedMemoryUnpack_P3_Size
   * Referenced by: '<Root>/Shared Memory Unpack '
   */
  { 1.0, 6.0 },

  /* Expression: get(partition(1),'IAddress')
   * Referenced by: '<Root>/Shared Memory Unpack '
   */
  { 28.0, 32.0, 36.0, 40.0, 44.0, 48.0 },

  /* Computed Parameter: SharedMemoryUnpack_P4_Size
   * Referenced by: '<Root>/Shared Memory Unpack '
   */
  { 1.0, 1.0 },

  /* Expression: sizeof(partition(1))
   * Referenced by: '<Root>/Shared Memory Unpack '
   */
  24.0,

  /* Expression: 0.5
   * Referenced by: '<Root>/Signal Generator'
   */
  0.5,

  /* Expression: 0.1
   * Referenced by: '<Root>/Signal Generator'
   */
  0.1,

  /* Computed Parameter: SharedMemoryPack_P1_Size
   * Referenced by: '<Root>/Shared Memory Pack '
   */
  { 1.0, 1.0 },

  /* Expression: get(partition(1),'IType')
   * Referenced by: '<Root>/Shared Memory Pack '
   */
  1.0,

  /* Computed Parameter: SharedMemoryPack_P2_Size
   * Referenced by: '<Root>/Shared Memory Pack '
   */
  { 2.0, 1.0 },

  /* Expression: get(partition(1),'ISize')
   * Referenced by: '<Root>/Shared Memory Pack '
   */
  { 1.0, 0.0 },

  /* Computed Parameter: SharedMemoryPack_P3_Size
   * Referenced by: '<Root>/Shared Memory Pack '
   */
  { 1.0, 1.0 },

  /* Expression: get(partition(1),'IAddress')
   * Referenced by: '<Root>/Shared Memory Pack '
   */
  8.0,

  /* Computed Parameter: SharedMemoryPack_P4_Size
   * Referenced by: '<Root>/Shared Memory Pack '
   */
  { 1.0, 1.0 },

  /* Expression: sizeof(partition(1))
   * Referenced by: '<Root>/Shared Memory Pack '
   */
  4.0,

  /* Computed Parameter: Write_P1_Size
   * Referenced by: '<Root>/Write '
   */
  { 1.0, 1.0 },

  /* Expression: partition(1).Internal.Address
   * Referenced by: '<Root>/Write '
   */
  8.0,

  /* Computed Parameter: Write_P2_Size
   * Referenced by: '<Root>/Write '
   */
  { 1.0, 1.0 },

  /* Expression: partition(1).Internal.NDwords
   * Referenced by: '<Root>/Write '
   */
  1.0,

  /* Computed Parameter: Write_P3_Size
   * Referenced by: '<Root>/Write '
   */
  { 1.0, 1.0 },

  /* Expression: ts
   * Referenced by: '<Root>/Write '
   */
  0.001,

  /* Computed Parameter: Write_P4_Size
   * Referenced by: '<Root>/Write '
   */
  { 1.0, 1.0 },

  /* Expression: pci
   * Referenced by: '<Root>/Write '
   */
  -1.0,

  /* Computed Parameter: Write_P5_Size
   * Referenced by: '<Root>/Write '
   */
  { 1.0, 1.0 },

  /* Expression: id
   * Referenced by: '<Root>/Write '
   */
  1.0
};
