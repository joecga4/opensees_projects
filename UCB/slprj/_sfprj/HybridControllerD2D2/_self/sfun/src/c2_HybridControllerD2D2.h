#ifndef __c2_HybridControllerD2D2_h__
#define __c2_HybridControllerD2D2_h__

/* Type Definitions */
#ifndef typedef_SFc2_HybridControllerD2D2InstanceStruct
#define typedef_SFc2_HybridControllerD2D2InstanceStruct

typedef struct {
  SimStruct *S;
  ChartInfoStruct chartInfo;
  uint8_T c2_JITStateAnimation[5];
  int32_T c2_N;
  int32_T c2_nDOF;
  real_T c2_dtCon;
  real_T c2_dtSim;
  real_T c2_dtInt;
  uint8_T c2_JITTransitionAnimation[7];
  uint8_T c2_doSetSimStateSideEffects;
  const mxArray *c2_setSimStateSideEffectsInfo;
  void *c2_fEmlrtCtx;
  int32_T *c2_sfEvent;
  uint8_T *c2_is_active_c2_HybridControllerD2D2;
  uint32_T *c2_is_HybridController;
  uint8_T *c2_is_active_HybridController;
  real_T (*c2_targD)[2];
  int32_T *c2_flag;
  real_T (*c2_comD)[2];
  real_T (*c2_comV)[2];
  real_T (*c2_comA)[2];
  int32_T *c2_state;
  real_T *c2_i;
  real_T *c2_di;
  real_T *c2_diSD;
  real_T *c2_iSD;
  real_T (*c2_targLocal)[2];
} SFc2_HybridControllerD2D2InstanceStruct;

#endif                                 /*typedef_SFc2_HybridControllerD2D2InstanceStruct*/

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
extern const mxArray *sf_c2_HybridControllerD2D2_get_eml_resolved_functions_info
  (void);

/* Function Definitions */
extern void sf_c2_HybridControllerD2D2_get_check_sum(mxArray *plhs[]);
extern void c2_HybridControllerD2D2_method_dispatcher(SimStruct *S, int_T method,
  void *data);

#endif
