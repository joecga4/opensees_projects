/*
 * HybridControllerD2D2_types.h
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

#ifndef RTW_HEADER_HybridControllerD2D2_types_h_
#define RTW_HEADER_HybridControllerD2D2_types_h_
#include "rtwtypes.h"
#include "builtin_typeid_types.h"
#include "multiword_types.h"
#include "zero_crossing_types.h"

/* Model Code Variants */
#ifndef DEFINED_TYPEDEF_FOR_struct_Kj73OsWN0x5S8L4NmJ8cwH_
#define DEFINED_TYPEDEF_FOR_struct_Kj73OsWN0x5S8L4NmJ8cwH_

typedef struct {
  real_T nDOF;
  real_T dtInt;
  real_T dtSim;
  real_T delay;
  real_T upFact;
  real_T dtCon;
  real_T N;
  real_T iDelay;
  real_T rate;
} struct_Kj73OsWN0x5S8L4NmJ8cwH;

#endif

/* Parameters for system: '<Root>/ATS compensator' */
typedef struct P_CoreSubsys_HybridController_T_ P_CoreSubsys_HybridController_T;

/* Parameters for system: '<S50>/If Action Subsystem1' */
typedef struct P_IfActionSubsystem1_HybridCo_T_ P_IfActionSubsystem1_HybridCo_T;

/* Parameters for system: '<S26>/For Each Subsystem' */
typedef struct P_CoreSubsys_HybridControll_g_T_ P_CoreSubsys_HybridControll_g_T;

/* Parameters (default storage) */
typedef struct P_HybridControllerD2D2_T_ P_HybridControllerD2D2_T;

/* Forward declaration for rtModel */
typedef struct tag_RTM_HybridControllerD2D2_T RT_MODEL_HybridControllerD2D2_T;

#endif                            /* RTW_HEADER_HybridControllerD2D2_types_h_ */
