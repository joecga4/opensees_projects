/* Include files */

#include "HybridControllerD2D2_sfun.h"
#include "c2_HybridControllerD2D2.h"
#include "mwmathutil.h"
#define _SF_MEX_LISTEN_FOR_CTRL_C(S)   sf_mex_listen_for_ctrl_c(S);
#ifdef utFree
#undef utFree
#endif

#ifdef utMalloc
#undef utMalloc
#endif

#ifdef __cplusplus

extern "C" void *utMalloc(size_t size);
extern "C" void utFree(void*);

#else

extern void *utMalloc(size_t size);
extern void utFree(void*);

#endif

/* Type Definitions */

/* Named Constants */
#define CALL_EVENT                     (-1)
#define c2_IN_NO_ACTIVE_CHILD          ((uint8_T)0U)
#define c2_IN_AutoSlowDown             (1U)
#define c2_IN_Correct                  (2U)
#define c2_IN_Initialize               (3U)
#define c2_IN_Predict                  (4U)

/* Variable Declarations */

/* Variable Definitions */
static real_T _sfTime_;

/* Function Declarations */
static void initialize_c2_HybridControllerD2D2
  (SFc2_HybridControllerD2D2InstanceStruct *chartInstance);
static void initialize_params_c2_HybridControllerD2D2
  (SFc2_HybridControllerD2D2InstanceStruct *chartInstance);
static void enable_c2_HybridControllerD2D2
  (SFc2_HybridControllerD2D2InstanceStruct *chartInstance);
static void disable_c2_HybridControllerD2D2
  (SFc2_HybridControllerD2D2InstanceStruct *chartInstance);
static void c2_update_jit_animation_state_c2_HybridControllerD2D2
  (SFc2_HybridControllerD2D2InstanceStruct *chartInstance);
static void c2_do_animation_call_c2_HybridControllerD2D2
  (SFc2_HybridControllerD2D2InstanceStruct *chartInstance);
static void ext_mode_exec_c2_HybridControllerD2D2
  (SFc2_HybridControllerD2D2InstanceStruct *chartInstance);
static const mxArray *get_sim_state_c2_HybridControllerD2D2
  (SFc2_HybridControllerD2D2InstanceStruct *chartInstance);
static void set_sim_state_c2_HybridControllerD2D2
  (SFc2_HybridControllerD2D2InstanceStruct *chartInstance, const mxArray *c2_st);
static void c2_set_sim_state_side_effects_c2_HybridControllerD2D2
  (SFc2_HybridControllerD2D2InstanceStruct *chartInstance);
static void sf_gateway_c2_HybridControllerD2D2
  (SFc2_HybridControllerD2D2InstanceStruct *chartInstance);
static void mdl_start_c2_HybridControllerD2D2
  (SFc2_HybridControllerD2D2InstanceStruct *chartInstance);
static void mdl_terminate_c2_HybridControllerD2D2
  (SFc2_HybridControllerD2D2InstanceStruct *chartInstance);
static void mdl_setup_runtime_resources_c2_HybridControllerD2D2
  (SFc2_HybridControllerD2D2InstanceStruct *chartInstance);
static void mdl_cleanup_runtime_resources_c2_HybridControllerD2D2
  (SFc2_HybridControllerD2D2InstanceStruct *chartInstance);
static void initSimStructsc2_HybridControllerD2D2
  (SFc2_HybridControllerD2D2InstanceStruct *chartInstance);
static void c2_HybridController(SFc2_HybridControllerD2D2InstanceStruct
  *chartInstance);
static void c2_emlrt_marshallIn(SFc2_HybridControllerD2D2InstanceStruct
  *chartInstance, const mxArray *c2_b_comA, const char_T *c2_identifier, real_T
  c2_y[2]);
static void c2_b_emlrt_marshallIn(SFc2_HybridControllerD2D2InstanceStruct
  *chartInstance, const mxArray *c2_u, const emlrtMsgIdentifier *c2_parentId,
  real_T c2_y[2]);
static real_T c2_c_emlrt_marshallIn(SFc2_HybridControllerD2D2InstanceStruct
  *chartInstance, const mxArray *c2_b_i, const char_T *c2_identifier);
static real_T c2_d_emlrt_marshallIn(SFc2_HybridControllerD2D2InstanceStruct
  *chartInstance, const mxArray *c2_u, const emlrtMsgIdentifier *c2_parentId);
static int32_T c2_e_emlrt_marshallIn(SFc2_HybridControllerD2D2InstanceStruct
  *chartInstance, const mxArray *c2_b_state, const char_T *c2_identifier);
static int32_T c2_f_emlrt_marshallIn(SFc2_HybridControllerD2D2InstanceStruct
  *chartInstance, const mxArray *c2_u, const emlrtMsgIdentifier *c2_parentId);
static uint8_T c2_g_emlrt_marshallIn(SFc2_HybridControllerD2D2InstanceStruct
  *chartInstance, const mxArray *c2_b_is_active_c2_HybridControllerD2D2, const
  char_T *c2_identifier);
static uint8_T c2_h_emlrt_marshallIn(SFc2_HybridControllerD2D2InstanceStruct
  *chartInstance, const mxArray *c2_u, const emlrtMsgIdentifier *c2_parentId);
static uint32_T c2_i_emlrt_marshallIn(SFc2_HybridControllerD2D2InstanceStruct
  *chartInstance, const mxArray *c2_b_is_HybridController, const char_T
  *c2_identifier);
static uint32_T c2_j_emlrt_marshallIn(SFc2_HybridControllerD2D2InstanceStruct
  *chartInstance, const mxArray *c2_u, const emlrtMsgIdentifier *c2_parentId);
static const mxArray *c2_k_emlrt_marshallIn
  (SFc2_HybridControllerD2D2InstanceStruct *chartInstance, const mxArray
   *c2_b_setSimStateSideEffectsInfo, const char_T *c2_identifier);
static const mxArray *c2_l_emlrt_marshallIn
  (SFc2_HybridControllerD2D2InstanceStruct *chartInstance, const mxArray *c2_u,
   const emlrtMsgIdentifier *c2_parentId);
static const mxArray *c2_chart_data_browse_helper
  (SFc2_HybridControllerD2D2InstanceStruct *chartInstance, int32_T c2_ssIdNumber);
static void init_dsm_address_info(SFc2_HybridControllerD2D2InstanceStruct
  *chartInstance);
static void init_simulink_io_address(SFc2_HybridControllerD2D2InstanceStruct
  *chartInstance);

/* Function Definitions */
static void initialize_c2_HybridControllerD2D2
  (SFc2_HybridControllerD2D2InstanceStruct *chartInstance)
{
  int32_T c2_b_i;
  sim_mode_is_external(chartInstance->S);
  *chartInstance->c2_sfEvent = CALL_EVENT;
  _sfTime_ = sf_get_time(chartInstance->S);
  chartInstance->c2_doSetSimStateSideEffects = 0U;
  chartInstance->c2_setSimStateSideEffectsInfo = NULL;
  *chartInstance->c2_is_active_HybridController = 0U;
  *chartInstance->c2_is_HybridController = 0U;
  *chartInstance->c2_is_active_c2_HybridControllerD2D2 = 0U;
  *chartInstance->c2_di = 0.0;
  *chartInstance->c2_diSD = 0.0;
  *chartInstance->c2_iSD = 0.0;
  for (c2_b_i = 0; c2_b_i < 2; c2_b_i++) {
    (*chartInstance->c2_targLocal)[c2_b_i] = 0.0;
  }

  if (sf_get_output_port_reusable(chartInstance->S, 1) == 0) {
    for (c2_b_i = 0; c2_b_i < 2; c2_b_i++) {
      (*chartInstance->c2_comD)[c2_b_i] = 0.0;
    }
  }

  if (sf_get_output_port_reusable(chartInstance->S, 2) == 0) {
    for (c2_b_i = 0; c2_b_i < 2; c2_b_i++) {
      (*chartInstance->c2_comV)[c2_b_i] = 0.0;
    }
  }

  if (sf_get_output_port_reusable(chartInstance->S, 3) == 0) {
    for (c2_b_i = 0; c2_b_i < 2; c2_b_i++) {
      (*chartInstance->c2_comA)[c2_b_i] = 0.0;
    }
  }

  if (sf_get_output_port_reusable(chartInstance->S, 4) == 0) {
    *chartInstance->c2_state = 0;
  }

  if (sf_get_output_port_reusable(chartInstance->S, 5) == 0) {
    *chartInstance->c2_i = 0.0;
  }
}

static void initialize_params_c2_HybridControllerD2D2
  (SFc2_HybridControllerD2D2InstanceStruct *chartInstance)
{
  real_T c2_d;
  real_T c2_d1;
  int32_T c2_b_i;
  real_T c2_d2;
  real_T c2_d3;
  real_T c2_d4;
  real_T c2_d5;
  sf_mex_import_named("N", sf_mex_get_sfun_param(chartInstance->S, 0U, 0U),
                      &c2_d, 0, 0, 0U, 0, 0U, 0);
  c2_d1 = c2_d;
  if (c2_d1 < 2.147483648E+9) {
    if (c2_d1 >= -2.147483648E+9) {
      c2_b_i = (int32_T)c2_d1;
    } else {
      c2_b_i = MIN_int32_T;
    }
  } else if (c2_d1 >= 2.147483648E+9) {
    c2_b_i = MAX_int32_T;
  } else {
    c2_b_i = 0;
  }

  chartInstance->c2_N = c2_b_i;
  sf_mex_import_named("nDOF", sf_mex_get_sfun_param(chartInstance->S, 4U, 0U),
                      &c2_d2, 0, 0, 0U, 0, 0U, 0);
  c2_d1 = c2_d2;
  if (c2_d1 < 2.147483648E+9) {
    if (c2_d1 >= -2.147483648E+9) {
      c2_b_i = (int32_T)c2_d1;
    } else {
      c2_b_i = MIN_int32_T;
    }
  } else if (c2_d1 >= 2.147483648E+9) {
    c2_b_i = MAX_int32_T;
  } else {
    c2_b_i = 0;
  }

  chartInstance->c2_nDOF = c2_b_i;
  sf_mex_import_named("dtCon", sf_mex_get_sfun_param(chartInstance->S, 1U, 0U),
                      &c2_d3, 0, 0, 0U, 0, 0U, 0);
  chartInstance->c2_dtCon = c2_d3;
  sf_mex_import_named("dtSim", sf_mex_get_sfun_param(chartInstance->S, 3U, 0U),
                      &c2_d4, 0, 0, 0U, 0, 0U, 0);
  chartInstance->c2_dtSim = c2_d4;
  sf_mex_import_named("dtInt", sf_mex_get_sfun_param(chartInstance->S, 2U, 0U),
                      &c2_d5, 0, 0, 0U, 0, 0U, 0);
  chartInstance->c2_dtInt = c2_d5;
}

static void enable_c2_HybridControllerD2D2
  (SFc2_HybridControllerD2D2InstanceStruct *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void disable_c2_HybridControllerD2D2
  (SFc2_HybridControllerD2D2InstanceStruct *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void c2_update_jit_animation_state_c2_HybridControllerD2D2
  (SFc2_HybridControllerD2D2InstanceStruct *chartInstance)
{
  chartInstance->c2_JITStateAnimation[0U] = (uint8_T)
    (*chartInstance->c2_is_HybridController == c2_IN_Predict);
  chartInstance->c2_JITStateAnimation[1U] = (uint8_T)
    (*chartInstance->c2_is_HybridController == c2_IN_Initialize);
  chartInstance->c2_JITStateAnimation[2U] = (uint8_T)
    (*chartInstance->c2_is_HybridController == c2_IN_AutoSlowDown);
  chartInstance->c2_JITStateAnimation[3U] = (uint8_T)
    (*chartInstance->c2_is_active_HybridController == 1U);
  chartInstance->c2_JITStateAnimation[4U] = (uint8_T)
    (*chartInstance->c2_is_HybridController == c2_IN_Correct);
}

static void c2_do_animation_call_c2_HybridControllerD2D2
  (SFc2_HybridControllerD2D2InstanceStruct *chartInstance)
{
  sfDoAnimationWrapper(chartInstance->S, false, true);
  sfDoAnimationWrapper(chartInstance->S, false, false);
}

static void ext_mode_exec_c2_HybridControllerD2D2
  (SFc2_HybridControllerD2D2InstanceStruct *chartInstance)
{
  c2_update_jit_animation_state_c2_HybridControllerD2D2(chartInstance);
  c2_do_animation_call_c2_HybridControllerD2D2(chartInstance);
}

static const mxArray *get_sim_state_c2_HybridControllerD2D2
  (SFc2_HybridControllerD2D2InstanceStruct *chartInstance)
{
  const mxArray *c2_st;
  const mxArray *c2_y = NULL;
  const mxArray *c2_b_y = NULL;
  const mxArray *c2_c_y = NULL;
  const mxArray *c2_d_y = NULL;
  const mxArray *c2_e_y = NULL;
  const mxArray *c2_f_y = NULL;
  const mxArray *c2_g_y = NULL;
  const mxArray *c2_h_y = NULL;
  const mxArray *c2_i_y = NULL;
  const mxArray *c2_j_y = NULL;
  const mxArray *c2_k_y = NULL;
  const mxArray *c2_l_y = NULL;
  const mxArray *c2_m_y = NULL;
  c2_st = NULL;
  c2_st = NULL;
  c2_y = NULL;
  sf_mex_assign(&c2_y, sf_mex_createcellmatrix(12, 1), false);
  c2_b_y = NULL;
  sf_mex_assign(&c2_b_y, sf_mex_create("y", *chartInstance->c2_comA, 0, 0U, 1U,
    0U, 1, 2), false);
  sf_mex_setcell(c2_y, 0, c2_b_y);
  c2_c_y = NULL;
  sf_mex_assign(&c2_c_y, sf_mex_create("y", *chartInstance->c2_comD, 0, 0U, 1U,
    0U, 1, 2), false);
  sf_mex_setcell(c2_y, 1, c2_c_y);
  c2_d_y = NULL;
  sf_mex_assign(&c2_d_y, sf_mex_create("y", *chartInstance->c2_comV, 0, 0U, 1U,
    0U, 1, 2), false);
  sf_mex_setcell(c2_y, 2, c2_d_y);
  c2_e_y = NULL;
  sf_mex_assign(&c2_e_y, sf_mex_create("y", chartInstance->c2_i, 0, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c2_y, 3, c2_e_y);
  c2_f_y = NULL;
  sf_mex_assign(&c2_f_y, sf_mex_create("y", chartInstance->c2_state, 6, 0U, 0U,
    0U, 0), false);
  sf_mex_setcell(c2_y, 4, c2_f_y);
  c2_g_y = NULL;
  sf_mex_assign(&c2_g_y, sf_mex_create("y", chartInstance->c2_di, 0, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c2_y, 5, c2_g_y);
  c2_h_y = NULL;
  sf_mex_assign(&c2_h_y, sf_mex_create("y", chartInstance->c2_diSD, 0, 0U, 0U,
    0U, 0), false);
  sf_mex_setcell(c2_y, 6, c2_h_y);
  c2_i_y = NULL;
  sf_mex_assign(&c2_i_y, sf_mex_create("y", chartInstance->c2_iSD, 0, 0U, 0U, 0U,
    0), false);
  sf_mex_setcell(c2_y, 7, c2_i_y);
  c2_j_y = NULL;
  sf_mex_assign(&c2_j_y, sf_mex_create("y", *chartInstance->c2_targLocal, 0, 0U,
    1U, 0U, 1, 2), false);
  sf_mex_setcell(c2_y, 8, c2_j_y);
  c2_k_y = NULL;
  sf_mex_assign(&c2_k_y, sf_mex_create("y",
    chartInstance->c2_is_active_c2_HybridControllerD2D2, 3, 0U, 0U, 0U, 0),
                false);
  sf_mex_setcell(c2_y, 9, c2_k_y);
  c2_l_y = NULL;
  sf_mex_assign(&c2_l_y, sf_mex_create("y",
    chartInstance->c2_is_active_HybridController, 3, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c2_y, 10, c2_l_y);
  c2_m_y = NULL;
  sf_mex_assign(&c2_m_y, sf_mex_create("y",
    chartInstance->c2_is_HybridController, 7, 0U, 0U, 0U, 0), false);
  sf_mex_setcell(c2_y, 11, c2_m_y);
  sf_mex_assign(&c2_st, c2_y, false);
  return c2_st;
}

static void set_sim_state_c2_HybridControllerD2D2
  (SFc2_HybridControllerD2D2InstanceStruct *chartInstance, const mxArray *c2_st)
{
  const mxArray *c2_u;
  c2_u = sf_mex_dup(c2_st);
  c2_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c2_u, 0)), "comA",
                      *chartInstance->c2_comA);
  c2_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c2_u, 1)), "comD",
                      *chartInstance->c2_comD);
  c2_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c2_u, 2)), "comV",
                      *chartInstance->c2_comV);
  *chartInstance->c2_i = c2_c_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c2_u, 3)), "i");
  *chartInstance->c2_state = c2_e_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c2_u, 4)), "state");
  *chartInstance->c2_di = c2_c_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c2_u, 5)), "di");
  *chartInstance->c2_diSD = c2_c_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c2_u, 6)), "diSD");
  *chartInstance->c2_iSD = c2_c_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c2_u, 7)), "iSD");
  c2_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c2_u, 8)),
                      "targLocal", *chartInstance->c2_targLocal);
  *chartInstance->c2_is_active_c2_HybridControllerD2D2 = c2_g_emlrt_marshallIn
    (chartInstance, sf_mex_dup(sf_mex_getcell(c2_u, 9)),
     "is_active_c2_HybridControllerD2D2");
  *chartInstance->c2_is_active_HybridController = c2_g_emlrt_marshallIn
    (chartInstance, sf_mex_dup(sf_mex_getcell(c2_u, 10)),
     "is_active_HybridController");
  *chartInstance->c2_is_HybridController = c2_i_emlrt_marshallIn(chartInstance,
    sf_mex_dup(sf_mex_getcell(c2_u, 11)), "is_HybridController");
  sf_mex_assign(&chartInstance->c2_setSimStateSideEffectsInfo,
                c2_k_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell
    (c2_u, 12)), "setSimStateSideEffectsInfo"), true);
  sf_mex_destroy(&c2_u);
  chartInstance->c2_doSetSimStateSideEffects = 1U;
  c2_update_jit_animation_state_c2_HybridControllerD2D2(chartInstance);
  sf_mex_destroy(&c2_st);
}

static void c2_set_sim_state_side_effects_c2_HybridControllerD2D2
  (SFc2_HybridControllerD2D2InstanceStruct *chartInstance)
{
  if (chartInstance->c2_doSetSimStateSideEffects != 0) {
    chartInstance->c2_doSetSimStateSideEffects = 0U;
  }
}

static void sf_gateway_c2_HybridControllerD2D2
  (SFc2_HybridControllerD2D2InstanceStruct *chartInstance)
{
  c2_set_sim_state_side_effects_c2_HybridControllerD2D2(chartInstance);
  chartInstance->c2_JITTransitionAnimation[0] = 0U;
  chartInstance->c2_JITTransitionAnimation[1] = 0U;
  chartInstance->c2_JITTransitionAnimation[2] = 0U;
  chartInstance->c2_JITTransitionAnimation[3] = 0U;
  chartInstance->c2_JITTransitionAnimation[4] = 0U;
  chartInstance->c2_JITTransitionAnimation[5] = 0U;
  chartInstance->c2_JITTransitionAnimation[6] = 0U;
  _sfTime_ = sf_get_time(chartInstance->S);
  *chartInstance->c2_sfEvent = CALL_EVENT;
  if (*chartInstance->c2_is_active_c2_HybridControllerD2D2 == 0U) {
    *chartInstance->c2_is_active_c2_HybridControllerD2D2 = 1U;
    *chartInstance->c2_is_active_HybridController = 1U;
    chartInstance->c2_JITTransitionAnimation[1U] = 1U;
    *chartInstance->c2_is_HybridController = c2_IN_Initialize;
    *chartInstance->c2_i = 0.0;
    *chartInstance->c2_iSD = 0.0;
    *chartInstance->c2_diSD = 1.0;
    initData(chartInstance->c2_nDOF, chartInstance->c2_dtCon,
             chartInstance->c2_dtSim, chartInstance->c2_dtInt);
    zeroSig(*chartInstance->c2_comD);
    zeroSig(*chartInstance->c2_comV);
    zeroSig(*chartInstance->c2_comA);
  } else {
    c2_HybridController(chartInstance);
  }

  c2_update_jit_animation_state_c2_HybridControllerD2D2(chartInstance);
  c2_do_animation_call_c2_HybridControllerD2D2(chartInstance);
}

static void mdl_start_c2_HybridControllerD2D2
  (SFc2_HybridControllerD2D2InstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void mdl_terminate_c2_HybridControllerD2D2
  (SFc2_HybridControllerD2D2InstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void mdl_setup_runtime_resources_c2_HybridControllerD2D2
  (SFc2_HybridControllerD2D2InstanceStruct *chartInstance)
{
  setLegacyDebuggerFlag(chartInstance->S, false);
  setDebuggerFlag(chartInstance->S, true);
  setDataBrowseFcn(chartInstance->S, (void *)&c2_chart_data_browse_helper);
  sim_mode_is_external(chartInstance->S);
}

static void mdl_cleanup_runtime_resources_c2_HybridControllerD2D2
  (SFc2_HybridControllerD2D2InstanceStruct *chartInstance)
{
  sf_mex_destroy(&chartInstance->c2_setSimStateSideEffectsInfo);
}

static void initSimStructsc2_HybridControllerD2D2
  (SFc2_HybridControllerD2D2InstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void c2_HybridController(SFc2_HybridControllerD2D2InstanceStruct
  *chartInstance)
{
  boolean_T c2_temp;
  int32_T c2_b_i;
  real_T c2_d;
  switch (*chartInstance->c2_is_HybridController) {
   case c2_IN_AutoSlowDown:
    *chartInstance->c2_state = 2;
    if (*chartInstance->c2_flag == 1) {
      chartInstance->c2_JITTransitionAnimation[4U] = 1U;
      *chartInstance->c2_is_HybridController = 0U;
      *chartInstance->c2_is_HybridController = c2_IN_Correct;
      *chartInstance->c2_state = 0;
      setCurSig(*chartInstance->c2_comD, *chartInstance->c2_i / (real_T)
                chartInstance->c2_N);
      for (c2_b_i = 0; c2_b_i < 2; c2_b_i++) {
        (*chartInstance->c2_targLocal)[c2_b_i] = (*chartInstance->c2_targD)
          [c2_b_i];
      }

      setNewSig(*chartInstance->c2_targLocal);
      *chartInstance->c2_di = muDoubleScalarMin(muDoubleScalarMax
        (*chartInstance->c2_diSD + 1.0 / (0.2 * (real_T)chartInstance->c2_N) * (*
        chartInstance->c2_i - *chartInstance->c2_iSD), 0.001), 1.0);
      *chartInstance->c2_i = muDoubleScalarMin(*chartInstance->c2_i +
        *chartInstance->c2_di, (real_T)chartInstance->c2_N);
      correctD2(*chartInstance->c2_comD, *chartInstance->c2_i / (real_T)
                chartInstance->c2_N);
      correctV2(*chartInstance->c2_comV, *chartInstance->c2_i / (real_T)
                chartInstance->c2_N);
      correctA2(*chartInstance->c2_comA, *chartInstance->c2_i / (real_T)
                chartInstance->c2_N);
    } else {
      *chartInstance->c2_diSD = 4.0 - *chartInstance->c2_i / (0.2 * (real_T)
        chartInstance->c2_N);
      *chartInstance->c2_i += *chartInstance->c2_diSD;
      *chartInstance->c2_iSD = *chartInstance->c2_i;
      predictD2(*chartInstance->c2_comD, *chartInstance->c2_i / (real_T)
                chartInstance->c2_N);
      predictV2(*chartInstance->c2_comV, *chartInstance->c2_i / (real_T)
                chartInstance->c2_N);
      predictA2(*chartInstance->c2_comA, *chartInstance->c2_i / (real_T)
                chartInstance->c2_N);
    }
    break;

   case c2_IN_Correct:
    *chartInstance->c2_state = 0;
    c2_temp = (*chartInstance->c2_i >= (real_T)chartInstance->c2_N);
    if (c2_temp) {
      c2_temp = (*chartInstance->c2_flag != 1);
    }

    if (c2_temp) {
      chartInstance->c2_JITTransitionAnimation[0U] = 1U;
      *chartInstance->c2_is_HybridController = 0U;
      *chartInstance->c2_is_HybridController = c2_IN_Predict;
      *chartInstance->c2_state = 1;
      setCurSig(*chartInstance->c2_comD, 1.0);
      *chartInstance->c2_i = 1.0;
      *chartInstance->c2_iSD = 0.0;
      *chartInstance->c2_diSD = 1.0;
      predictD2(*chartInstance->c2_comD, *chartInstance->c2_i / (real_T)
                chartInstance->c2_N);
      predictV2(*chartInstance->c2_comV, *chartInstance->c2_i / (real_T)
                chartInstance->c2_N);
      predictA2(*chartInstance->c2_comA, *chartInstance->c2_i / (real_T)
                chartInstance->c2_N);
    } else if (*chartInstance->c2_flag == 1) {
      chartInstance->c2_JITTransitionAnimation[6U] = 1U;
      *chartInstance->c2_i = 0.0;
      *chartInstance->c2_iSD = 0.0;
      *chartInstance->c2_diSD = 1.0;
      c2_d = *chartInstance->c2_diSD;
      sf_mex_printf("%s =\\n", "diSD");
      sf_mex_call(chartInstance->c2_fEmlrtCtx, NULL, "disp", 0U, 1U, 6, c2_d);
      *chartInstance->c2_is_HybridController = 0U;
      *chartInstance->c2_is_HybridController = c2_IN_Correct;
      *chartInstance->c2_state = 0;
      setCurSig(*chartInstance->c2_comD, *chartInstance->c2_i / (real_T)
                chartInstance->c2_N);
      for (c2_b_i = 0; c2_b_i < 2; c2_b_i++) {
        (*chartInstance->c2_targLocal)[c2_b_i] = (*chartInstance->c2_targD)
          [c2_b_i];
      }

      setNewSig(*chartInstance->c2_targLocal);
      *chartInstance->c2_di = muDoubleScalarMin(muDoubleScalarMax
        (*chartInstance->c2_diSD + 1.0 / (0.2 * (real_T)chartInstance->c2_N) * (*
        chartInstance->c2_i - *chartInstance->c2_iSD), 0.001), 1.0);
      *chartInstance->c2_i = muDoubleScalarMin(*chartInstance->c2_i +
        *chartInstance->c2_di, (real_T)chartInstance->c2_N);
      correctD2(*chartInstance->c2_comD, *chartInstance->c2_i / (real_T)
                chartInstance->c2_N);
      correctV2(*chartInstance->c2_comV, *chartInstance->c2_i / (real_T)
                chartInstance->c2_N);
      correctA2(*chartInstance->c2_comA, *chartInstance->c2_i / (real_T)
                chartInstance->c2_N);
    } else {
      *chartInstance->c2_di = muDoubleScalarMin(muDoubleScalarMax
        (*chartInstance->c2_diSD + 1.0 / (0.2 * (real_T)chartInstance->c2_N) * (*
        chartInstance->c2_i - *chartInstance->c2_iSD), 0.001), 1.0);
      *chartInstance->c2_i = muDoubleScalarMin(*chartInstance->c2_i +
        *chartInstance->c2_di, (real_T)chartInstance->c2_N);
      correctD2(*chartInstance->c2_comD, *chartInstance->c2_i / (real_T)
                chartInstance->c2_N);
      correctV2(*chartInstance->c2_comV, *chartInstance->c2_i / (real_T)
                chartInstance->c2_N);
      correctA2(*chartInstance->c2_comA, *chartInstance->c2_i / (real_T)
                chartInstance->c2_N);
    }
    break;

   case c2_IN_Initialize:
    if (*chartInstance->c2_flag == 1) {
      chartInstance->c2_JITTransitionAnimation[3U] = 1U;
      *chartInstance->c2_is_HybridController = 0U;
      *chartInstance->c2_is_HybridController = c2_IN_Correct;
      *chartInstance->c2_state = 0;
      setCurSig(*chartInstance->c2_comD, *chartInstance->c2_i / (real_T)
                chartInstance->c2_N);
      for (c2_b_i = 0; c2_b_i < 2; c2_b_i++) {
        (*chartInstance->c2_targLocal)[c2_b_i] = (*chartInstance->c2_targD)
          [c2_b_i];
      }

      setNewSig(*chartInstance->c2_targLocal);
      *chartInstance->c2_di = muDoubleScalarMin(muDoubleScalarMax
        (*chartInstance->c2_diSD + 1.0 / (0.2 * (real_T)chartInstance->c2_N) * (*
        chartInstance->c2_i - *chartInstance->c2_iSD), 0.001), 1.0);
      *chartInstance->c2_i = muDoubleScalarMin(*chartInstance->c2_i +
        *chartInstance->c2_di, (real_T)chartInstance->c2_N);
      correctD2(*chartInstance->c2_comD, *chartInstance->c2_i / (real_T)
                chartInstance->c2_N);
      correctV2(*chartInstance->c2_comV, *chartInstance->c2_i / (real_T)
                chartInstance->c2_N);
      correctA2(*chartInstance->c2_comA, *chartInstance->c2_i / (real_T)
                chartInstance->c2_N);
    }
    break;

   case c2_IN_Predict:
    *chartInstance->c2_state = 1;
    c2_temp = (*chartInstance->c2_i >= 0.6 * (real_T)chartInstance->c2_N);
    if (c2_temp) {
      c2_temp = (*chartInstance->c2_flag != 1);
    }

    if (c2_temp) {
      chartInstance->c2_JITTransitionAnimation[5U] = 1U;
      *chartInstance->c2_is_HybridController = 0U;
      *chartInstance->c2_is_HybridController = c2_IN_AutoSlowDown;
      *chartInstance->c2_state = 2;
      *chartInstance->c2_diSD = 4.0 - *chartInstance->c2_i / (0.2 * (real_T)
        chartInstance->c2_N);
      *chartInstance->c2_i += *chartInstance->c2_diSD;
      *chartInstance->c2_iSD = *chartInstance->c2_i;
      predictD2(*chartInstance->c2_comD, *chartInstance->c2_i / (real_T)
                chartInstance->c2_N);
      predictV2(*chartInstance->c2_comV, *chartInstance->c2_i / (real_T)
                chartInstance->c2_N);
      predictA2(*chartInstance->c2_comA, *chartInstance->c2_i / (real_T)
                chartInstance->c2_N);
    } else if (*chartInstance->c2_flag == 1) {
      chartInstance->c2_JITTransitionAnimation[2U] = 1U;
      *chartInstance->c2_is_HybridController = 0U;
      *chartInstance->c2_is_HybridController = c2_IN_Correct;
      *chartInstance->c2_state = 0;
      setCurSig(*chartInstance->c2_comD, *chartInstance->c2_i / (real_T)
                chartInstance->c2_N);
      for (c2_b_i = 0; c2_b_i < 2; c2_b_i++) {
        (*chartInstance->c2_targLocal)[c2_b_i] = (*chartInstance->c2_targD)
          [c2_b_i];
      }

      setNewSig(*chartInstance->c2_targLocal);
      *chartInstance->c2_di = muDoubleScalarMin(muDoubleScalarMax
        (*chartInstance->c2_diSD + 1.0 / (0.2 * (real_T)chartInstance->c2_N) * (*
        chartInstance->c2_i - *chartInstance->c2_iSD), 0.001), 1.0);
      *chartInstance->c2_i = muDoubleScalarMin(*chartInstance->c2_i +
        *chartInstance->c2_di, (real_T)chartInstance->c2_N);
      correctD2(*chartInstance->c2_comD, *chartInstance->c2_i / (real_T)
                chartInstance->c2_N);
      correctV2(*chartInstance->c2_comV, *chartInstance->c2_i / (real_T)
                chartInstance->c2_N);
      correctA2(*chartInstance->c2_comA, *chartInstance->c2_i / (real_T)
                chartInstance->c2_N);
    } else {
      (*chartInstance->c2_i)++;
      predictD2(*chartInstance->c2_comD, *chartInstance->c2_i / (real_T)
                chartInstance->c2_N);
      predictV2(*chartInstance->c2_comV, *chartInstance->c2_i / (real_T)
                chartInstance->c2_N);
      predictA2(*chartInstance->c2_comA, *chartInstance->c2_i / (real_T)
                chartInstance->c2_N);
    }
    break;

   default:
    /* Unreachable state, for coverage only */
    *chartInstance->c2_is_HybridController = 0U;
    break;
  }
}

const mxArray *sf_c2_HybridControllerD2D2_get_eml_resolved_functions_info(void)
{
  const mxArray *c2_nameCaptureInfo = NULL;
  c2_nameCaptureInfo = NULL;
  sf_mex_assign(&c2_nameCaptureInfo, sf_mex_create("nameCaptureInfo", NULL, 0,
    0U, 1U, 0U, 2, 0, 1), false);
  return c2_nameCaptureInfo;
}

static void c2_emlrt_marshallIn(SFc2_HybridControllerD2D2InstanceStruct
  *chartInstance, const mxArray *c2_b_comA, const char_T *c2_identifier, real_T
  c2_y[2])
{
  emlrtMsgIdentifier c2_thisId;
  c2_thisId.fIdentifier = (const char *)c2_identifier;
  c2_thisId.fParent = NULL;
  c2_thisId.bParentIsCell = false;
  c2_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c2_b_comA), &c2_thisId, c2_y);
  sf_mex_destroy(&c2_b_comA);
}

static void c2_b_emlrt_marshallIn(SFc2_HybridControllerD2D2InstanceStruct
  *chartInstance, const mxArray *c2_u, const emlrtMsgIdentifier *c2_parentId,
  real_T c2_y[2])
{
  real_T c2_dv[2];
  int32_T c2_b_i;
  (void)chartInstance;
  sf_mex_import(c2_parentId, sf_mex_dup(c2_u), c2_dv, 1, 0, 0U, 1, 0U, 1, 2);
  for (c2_b_i = 0; c2_b_i < 2; c2_b_i++) {
    c2_y[c2_b_i] = c2_dv[c2_b_i];
  }

  sf_mex_destroy(&c2_u);
}

static real_T c2_c_emlrt_marshallIn(SFc2_HybridControllerD2D2InstanceStruct
  *chartInstance, const mxArray *c2_b_i, const char_T *c2_identifier)
{
  real_T c2_y;
  emlrtMsgIdentifier c2_thisId;
  c2_thisId.fIdentifier = (const char *)c2_identifier;
  c2_thisId.fParent = NULL;
  c2_thisId.bParentIsCell = false;
  c2_y = c2_d_emlrt_marshallIn(chartInstance, sf_mex_dup(c2_b_i), &c2_thisId);
  sf_mex_destroy(&c2_b_i);
  return c2_y;
}

static real_T c2_d_emlrt_marshallIn(SFc2_HybridControllerD2D2InstanceStruct
  *chartInstance, const mxArray *c2_u, const emlrtMsgIdentifier *c2_parentId)
{
  real_T c2_y;
  real_T c2_d;
  (void)chartInstance;
  sf_mex_import(c2_parentId, sf_mex_dup(c2_u), &c2_d, 1, 0, 0U, 0, 0U, 0);
  c2_y = c2_d;
  sf_mex_destroy(&c2_u);
  return c2_y;
}

static int32_T c2_e_emlrt_marshallIn(SFc2_HybridControllerD2D2InstanceStruct
  *chartInstance, const mxArray *c2_b_state, const char_T *c2_identifier)
{
  int32_T c2_y;
  emlrtMsgIdentifier c2_thisId;
  c2_thisId.fIdentifier = (const char *)c2_identifier;
  c2_thisId.fParent = NULL;
  c2_thisId.bParentIsCell = false;
  c2_y = c2_f_emlrt_marshallIn(chartInstance, sf_mex_dup(c2_b_state), &c2_thisId);
  sf_mex_destroy(&c2_b_state);
  return c2_y;
}

static int32_T c2_f_emlrt_marshallIn(SFc2_HybridControllerD2D2InstanceStruct
  *chartInstance, const mxArray *c2_u, const emlrtMsgIdentifier *c2_parentId)
{
  int32_T c2_y;
  int32_T c2_b_i;
  (void)chartInstance;
  sf_mex_import(c2_parentId, sf_mex_dup(c2_u), &c2_b_i, 1, 6, 0U, 0, 0U, 0);
  c2_y = c2_b_i;
  sf_mex_destroy(&c2_u);
  return c2_y;
}

static uint8_T c2_g_emlrt_marshallIn(SFc2_HybridControllerD2D2InstanceStruct
  *chartInstance, const mxArray *c2_b_is_active_c2_HybridControllerD2D2, const
  char_T *c2_identifier)
{
  uint8_T c2_y;
  emlrtMsgIdentifier c2_thisId;
  c2_thisId.fIdentifier = (const char *)c2_identifier;
  c2_thisId.fParent = NULL;
  c2_thisId.bParentIsCell = false;
  c2_y = c2_h_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c2_b_is_active_c2_HybridControllerD2D2), &c2_thisId);
  sf_mex_destroy(&c2_b_is_active_c2_HybridControllerD2D2);
  return c2_y;
}

static uint8_T c2_h_emlrt_marshallIn(SFc2_HybridControllerD2D2InstanceStruct
  *chartInstance, const mxArray *c2_u, const emlrtMsgIdentifier *c2_parentId)
{
  uint8_T c2_y;
  uint8_T c2_b_u;
  (void)chartInstance;
  sf_mex_import(c2_parentId, sf_mex_dup(c2_u), &c2_b_u, 1, 3, 0U, 0, 0U, 0);
  c2_y = c2_b_u;
  sf_mex_destroy(&c2_u);
  return c2_y;
}

static uint32_T c2_i_emlrt_marshallIn(SFc2_HybridControllerD2D2InstanceStruct
  *chartInstance, const mxArray *c2_b_is_HybridController, const char_T
  *c2_identifier)
{
  uint32_T c2_y;
  emlrtMsgIdentifier c2_thisId;
  c2_thisId.fIdentifier = (const char *)c2_identifier;
  c2_thisId.fParent = NULL;
  c2_thisId.bParentIsCell = false;
  c2_y = c2_j_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c2_b_is_HybridController), &c2_thisId);
  sf_mex_destroy(&c2_b_is_HybridController);
  return c2_y;
}

static uint32_T c2_j_emlrt_marshallIn(SFc2_HybridControllerD2D2InstanceStruct
  *chartInstance, const mxArray *c2_u, const emlrtMsgIdentifier *c2_parentId)
{
  uint32_T c2_y;
  uint32_T c2_b_u;
  (void)chartInstance;
  sf_mex_import(c2_parentId, sf_mex_dup(c2_u), &c2_b_u, 1, 7, 0U, 0, 0U, 0);
  c2_y = c2_b_u;
  sf_mex_destroy(&c2_u);
  return c2_y;
}

static const mxArray *c2_k_emlrt_marshallIn
  (SFc2_HybridControllerD2D2InstanceStruct *chartInstance, const mxArray
   *c2_b_setSimStateSideEffectsInfo, const char_T *c2_identifier)
{
  const mxArray *c2_y = NULL;
  emlrtMsgIdentifier c2_thisId;
  c2_y = NULL;
  c2_thisId.fIdentifier = (const char *)c2_identifier;
  c2_thisId.fParent = NULL;
  c2_thisId.bParentIsCell = false;
  sf_mex_assign(&c2_y, c2_l_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c2_b_setSimStateSideEffectsInfo), &c2_thisId), false);
  sf_mex_destroy(&c2_b_setSimStateSideEffectsInfo);
  return c2_y;
}

static const mxArray *c2_l_emlrt_marshallIn
  (SFc2_HybridControllerD2D2InstanceStruct *chartInstance, const mxArray *c2_u,
   const emlrtMsgIdentifier *c2_parentId)
{
  const mxArray *c2_y = NULL;
  (void)chartInstance;
  (void)c2_parentId;
  c2_y = NULL;
  sf_mex_assign(&c2_y, sf_mex_duplicatearraysafe(&c2_u), false);
  sf_mex_destroy(&c2_u);
  return c2_y;
}

static const mxArray *c2_chart_data_browse_helper
  (SFc2_HybridControllerD2D2InstanceStruct *chartInstance, int32_T c2_ssIdNumber)
{
  const mxArray *c2_mxData = NULL;
  int32_T c2_b_i;
  real_T c2_d;
  real_T c2_dv[2];
  c2_mxData = NULL;
  switch (c2_ssIdNumber) {
   case 12U:
    sf_mex_assign(&c2_mxData, sf_mex_create("mxData", *chartInstance->c2_targD,
      0, 0U, 1U, 0U, 1, 2), false);
    break;

   case 13U:
    c2_b_i = *chartInstance->c2_flag;
    sf_mex_assign(&c2_mxData, sf_mex_create("mxData", &c2_b_i, 6, 0U, 0U, 0U, 0),
                  false);
    break;

   case 14U:
    for (c2_b_i = 0; c2_b_i < 2; c2_b_i++) {
      c2_dv[c2_b_i] = (*chartInstance->c2_comD)[c2_b_i];
    }

    sf_mex_assign(&c2_mxData, sf_mex_create("mxData", c2_dv, 0, 0U, 1U, 0U, 1, 2),
                  false);
    break;

   case 27U:
    for (c2_b_i = 0; c2_b_i < 2; c2_b_i++) {
      c2_dv[c2_b_i] = (*chartInstance->c2_comV)[c2_b_i];
    }

    sf_mex_assign(&c2_mxData, sf_mex_create("mxData", c2_dv, 0, 0U, 1U, 0U, 1, 2),
                  false);
    break;

   case 28U:
    for (c2_b_i = 0; c2_b_i < 2; c2_b_i++) {
      c2_dv[c2_b_i] = (*chartInstance->c2_comA)[c2_b_i];
    }

    sf_mex_assign(&c2_mxData, sf_mex_create("mxData", c2_dv, 0, 0U, 1U, 0U, 1, 2),
                  false);
    break;

   case 15U:
    c2_b_i = *chartInstance->c2_state;
    sf_mex_assign(&c2_mxData, sf_mex_create("mxData", &c2_b_i, 6, 0U, 0U, 0U, 0),
                  false);
    break;

   case 16U:
    c2_d = *chartInstance->c2_i;
    sf_mex_assign(&c2_mxData, sf_mex_create("mxData", &c2_d, 0, 0U, 0U, 0U, 0),
                  false);
    break;

   case 17U:
    sf_mex_assign(&c2_mxData, sf_mex_create("mxData", &chartInstance->c2_N, 6,
      0U, 0U, 0U, 0), false);
    break;

   case 18U:
    sf_mex_assign(&c2_mxData, sf_mex_create("mxData", &chartInstance->c2_nDOF, 6,
      0U, 0U, 0U, 0), false);
    break;

   case 20U:
    sf_mex_assign(&c2_mxData, sf_mex_create("mxData", chartInstance->c2_di, 0,
      0U, 0U, 0U, 0), false);
    break;

   case 21U:
    sf_mex_assign(&c2_mxData, sf_mex_create("mxData", chartInstance->c2_diSD, 0,
      0U, 0U, 0U, 0), false);
    break;

   case 22U:
    sf_mex_assign(&c2_mxData, sf_mex_create("mxData", chartInstance->c2_iSD, 0,
      0U, 0U, 0U, 0), false);
    break;

   case 23U:
    sf_mex_assign(&c2_mxData, sf_mex_create("mxData",
      *chartInstance->c2_targLocal, 0, 0U, 1U, 0U, 1, 2), false);
    break;

   case 30U:
    sf_mex_assign(&c2_mxData, sf_mex_create("mxData", &chartInstance->c2_dtCon,
      0, 0U, 0U, 0U, 0), false);
    break;

   case 31U:
    sf_mex_assign(&c2_mxData, sf_mex_create("mxData", &chartInstance->c2_dtSim,
      0, 0U, 0U, 0U, 0), false);
    break;

   case 32U:
    sf_mex_assign(&c2_mxData, sf_mex_create("mxData", &chartInstance->c2_dtInt,
      0, 0U, 0U, 0U, 0), false);
    break;
  }

  return c2_mxData;
}

static void init_dsm_address_info(SFc2_HybridControllerD2D2InstanceStruct
  *chartInstance)
{
  (void)chartInstance;
}

static void init_simulink_io_address(SFc2_HybridControllerD2D2InstanceStruct
  *chartInstance)
{
  chartInstance->c2_fEmlrtCtx = (void *)sfrtGetEmlrtCtx(chartInstance->S);
  chartInstance->c2_sfEvent = (int32_T *)ssGetDWork_wrapper(chartInstance->S, 0);
  chartInstance->c2_is_active_c2_HybridControllerD2D2 = (uint8_T *)
    ssGetDWork_wrapper(chartInstance->S, 1);
  chartInstance->c2_is_HybridController = (uint32_T *)ssGetDWork_wrapper
    (chartInstance->S, 2);
  chartInstance->c2_is_active_HybridController = (uint8_T *)ssGetDWork_wrapper
    (chartInstance->S, 3);
  chartInstance->c2_targD = (real_T (*)[2])ssGetInputPortSignal_wrapper
    (chartInstance->S, 0);
  chartInstance->c2_flag = (int32_T *)ssGetInputPortSignal_wrapper
    (chartInstance->S, 1);
  chartInstance->c2_comD = (real_T (*)[2])ssGetOutputPortSignal_wrapper
    (chartInstance->S, 1);
  chartInstance->c2_comV = (real_T (*)[2])ssGetOutputPortSignal_wrapper
    (chartInstance->S, 2);
  chartInstance->c2_comA = (real_T (*)[2])ssGetOutputPortSignal_wrapper
    (chartInstance->S, 3);
  chartInstance->c2_state = (int32_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 4);
  chartInstance->c2_i = (real_T *)ssGetOutputPortSignal_wrapper(chartInstance->S,
    5);
  chartInstance->c2_di = (real_T *)ssGetDWork_wrapper(chartInstance->S, 4);
  chartInstance->c2_diSD = (real_T *)ssGetDWork_wrapper(chartInstance->S, 5);
  chartInstance->c2_iSD = (real_T *)ssGetDWork_wrapper(chartInstance->S, 6);
  chartInstance->c2_targLocal = (real_T (*)[2])ssGetDWork_wrapper
    (chartInstance->S, 7);
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* SFunction Glue Code */
void sf_c2_HybridControllerD2D2_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(864595481U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(1409528367U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(1519128501U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(491621849U);
}

mxArray *sf_c2_HybridControllerD2D2_third_party_uses_info(void)
{
  mxArray * mxcell3p = mxCreateCellMatrix(1,0);
  return(mxcell3p);
}

mxArray *sf_c2_HybridControllerD2D2_jit_fallback_info(void)
{
  const char *infoFields[] = { "fallbackType", "fallbackReason",
    "hiddenFallbackType", "hiddenFallbackReason", "incompatibleSymbol" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 5, infoFields);
  mxArray *fallbackType = mxCreateString("early");
  mxArray *fallbackReason = mxCreateString("custom_code");
  mxArray *hiddenFallbackType = mxCreateString("");
  mxArray *hiddenFallbackReason = mxCreateString("");
  mxArray *incompatibleSymbol = mxCreateString("");
  mxSetField(mxInfo, 0, infoFields[0], fallbackType);
  mxSetField(mxInfo, 0, infoFields[1], fallbackReason);
  mxSetField(mxInfo, 0, infoFields[2], hiddenFallbackType);
  mxSetField(mxInfo, 0, infoFields[3], hiddenFallbackReason);
  mxSetField(mxInfo, 0, infoFields[4], incompatibleSymbol);
  return mxInfo;
}

mxArray *sf_c2_HybridControllerD2D2_updateBuildInfo_args_info(void)
{
  mxArray *mxBIArgs = mxCreateCellMatrix(1,0);
  return mxBIArgs;
}

static const mxArray *sf_get_sim_state_info_c2_HybridControllerD2D2(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  mxArray *mxVarInfo = sf_mex_decode(
    "eNpjYPT0ZQACPiC+wMnAwAakOYCYiQECWKF8RiDmgdIQcRa4uAIQl1QWpILEi4uSPVOAdF5iLpi"
    "fWFrhmZeWDzbfggFhPhsW8xmRzOeEikPAB3vK9Ns4gPQbIOlnwaKfBUm/AJCXnJ/ryAflD6z7dc"
    "h1v8vgcL81ue4PGxzuNyDK/Ywo7mdkyIS6e+Ddr+eArh+b+1lR3A/hF5cklqRSzR8cDpTpNyEqH"
    "phQ/MHEkJI5WNxvSlY+SMkMdhkc7jcjyv3MKO5nZgA6f5CEvzlYvwMB93Oi5QMQvySxKN0nPzkx"
    "B8kflPtHgUL/QOyPIOAfRTT/gPiZxfGJySWZZanxyUbxHpVJRZkpzvl5JUX5OTmpRS5GLkaDyp8"
    "CYP0BBPwpheZPKRR/onuSmv5Toor/PAj4TxjNf8IQ/2H1GMxfAHszVnc="
    );
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c2_HybridControllerD2D2_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static const char* sf_get_instance_specialization(void)
{
  return "sUwBIfWuX9ebMDC2JRxkvhE";
}

static void sf_opaque_initialize_c2_HybridControllerD2D2(void *chartInstanceVar)
{
  initialize_params_c2_HybridControllerD2D2
    ((SFc2_HybridControllerD2D2InstanceStruct*) chartInstanceVar);
  initialize_c2_HybridControllerD2D2((SFc2_HybridControllerD2D2InstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_enable_c2_HybridControllerD2D2(void *chartInstanceVar)
{
  enable_c2_HybridControllerD2D2((SFc2_HybridControllerD2D2InstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_disable_c2_HybridControllerD2D2(void *chartInstanceVar)
{
  disable_c2_HybridControllerD2D2((SFc2_HybridControllerD2D2InstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_gateway_c2_HybridControllerD2D2(void *chartInstanceVar)
{
  sf_gateway_c2_HybridControllerD2D2((SFc2_HybridControllerD2D2InstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_ext_mode_exec_c2_HybridControllerD2D2(void
  *chartInstanceVar)
{
  ext_mode_exec_c2_HybridControllerD2D2((SFc2_HybridControllerD2D2InstanceStruct*)
    chartInstanceVar);
}

static const mxArray* sf_opaque_get_sim_state_c2_HybridControllerD2D2(SimStruct*
  S)
{
  return get_sim_state_c2_HybridControllerD2D2
    ((SFc2_HybridControllerD2D2InstanceStruct *)sf_get_chart_instance_ptr(S));/* raw sim ctx */
}

static void sf_opaque_set_sim_state_c2_HybridControllerD2D2(SimStruct* S, const
  mxArray *st)
{
  set_sim_state_c2_HybridControllerD2D2((SFc2_HybridControllerD2D2InstanceStruct*)
    sf_get_chart_instance_ptr(S), st);
}

static void sf_opaque_cleanup_runtime_resources_c2_HybridControllerD2D2(void
  *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc2_HybridControllerD2D2InstanceStruct*) chartInstanceVar
      )->S;
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
      unload_HybridControllerD2D2_optimization_info();
    }

    mdl_cleanup_runtime_resources_c2_HybridControllerD2D2
      ((SFc2_HybridControllerD2D2InstanceStruct*) chartInstanceVar);
    utFree(chartInstanceVar);
    if (ssGetUserData(S)!= NULL) {
      sf_free_ChartRunTimeInfo(S);
    }

    ssSetUserData(S,NULL);
  }
}

static void sf_opaque_mdl_start_c2_HybridControllerD2D2(void *chartInstanceVar)
{
  mdl_start_c2_HybridControllerD2D2((SFc2_HybridControllerD2D2InstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_mdl_terminate_c2_HybridControllerD2D2(void
  *chartInstanceVar)
{
  mdl_terminate_c2_HybridControllerD2D2((SFc2_HybridControllerD2D2InstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_init_subchart_simstructs(void *chartInstanceVar)
{
  initSimStructsc2_HybridControllerD2D2((SFc2_HybridControllerD2D2InstanceStruct*)
    chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c2_HybridControllerD2D2(SimStruct *S)
{
  int i;
  for (i=0;i<ssGetNumRunTimeParams(S);i++) {
    if (ssGetSFcnParamTunable(S,i)) {
      ssUpdateDlgParamAsRunTimeParam(S,i);
    }
  }

  sf_warn_if_symbolic_dimension_param_changed(S);
  if (sf_machine_global_initializer_called()) {
    initialize_params_c2_HybridControllerD2D2
      ((SFc2_HybridControllerD2D2InstanceStruct*)sf_get_chart_instance_ptr(S));
    initSimStructsc2_HybridControllerD2D2
      ((SFc2_HybridControllerD2D2InstanceStruct*)sf_get_chart_instance_ptr(S));
  }
}

const char* sf_c2_HybridControllerD2D2_get_post_codegen_info(void)
{
  int i;
  const char* encStrCodegen [31] = {
    "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",
    ""
  };

  static char newstr [2229] = "";
  newstr[0] = '\0';
  for (i = 0; i < 31; i++) {
    strcat(newstr, encStrCodegen[i]);
  }

  return newstr;
}

static void mdlSetWorkWidths_c2_HybridControllerD2D2(SimStruct *S)
{
  const char* newstr = sf_c2_HybridControllerD2D2_get_post_codegen_info();
  sf_set_work_widths(S, newstr);
  ssSetChecksum0(S,(4234015790U));
  ssSetChecksum1(S,(2498041669U));
  ssSetChecksum2(S,(2814253453U));
  ssSetChecksum3(S,(3176096388U));
}

static void mdlRTW_c2_HybridControllerD2D2(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    ssWriteRTWStrParam(S, "StateflowChartType", "Stateflow");
  }
}

static void mdlSetupRuntimeResources_c2_HybridControllerD2D2(SimStruct *S)
{
  SFc2_HybridControllerD2D2InstanceStruct *chartInstance;
  chartInstance = (SFc2_HybridControllerD2D2InstanceStruct *)utMalloc(sizeof
    (SFc2_HybridControllerD2D2InstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  memset(chartInstance, 0, sizeof(SFc2_HybridControllerD2D2InstanceStruct));
  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 0;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway =
    sf_opaque_gateway_c2_HybridControllerD2D2;
  chartInstance->chartInfo.initializeChart =
    sf_opaque_initialize_c2_HybridControllerD2D2;
  chartInstance->chartInfo.mdlStart =
    sf_opaque_mdl_start_c2_HybridControllerD2D2;
  chartInstance->chartInfo.mdlTerminate =
    sf_opaque_mdl_terminate_c2_HybridControllerD2D2;
  chartInstance->chartInfo.mdlCleanupRuntimeResources =
    sf_opaque_cleanup_runtime_resources_c2_HybridControllerD2D2;
  chartInstance->chartInfo.enableChart =
    sf_opaque_enable_c2_HybridControllerD2D2;
  chartInstance->chartInfo.disableChart =
    sf_opaque_disable_c2_HybridControllerD2D2;
  chartInstance->chartInfo.getSimState =
    sf_opaque_get_sim_state_c2_HybridControllerD2D2;
  chartInstance->chartInfo.setSimState =
    sf_opaque_set_sim_state_c2_HybridControllerD2D2;
  chartInstance->chartInfo.getSimStateInfo =
    sf_get_sim_state_info_c2_HybridControllerD2D2;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c2_HybridControllerD2D2;
  chartInstance->chartInfo.mdlSetWorkWidths =
    mdlSetWorkWidths_c2_HybridControllerD2D2;
  chartInstance->chartInfo.callGetHoverDataForMsg = NULL;
  chartInstance->chartInfo.extModeExec =
    sf_opaque_ext_mode_exec_c2_HybridControllerD2D2;
  chartInstance->chartInfo.restoreLastMajorStepConfiguration = NULL;
  chartInstance->chartInfo.restoreBeforeLastMajorStepConfiguration = NULL;
  chartInstance->chartInfo.storeCurrentConfiguration = NULL;
  chartInstance->chartInfo.callAtomicSubchartUserFcn = NULL;
  chartInstance->chartInfo.callAtomicSubchartAutoFcn = NULL;
  chartInstance->chartInfo.callAtomicSubchartEventFcn = NULL;
  chartInstance->S = S;
  chartInstance->chartInfo.dispatchToExportedFcn = NULL;
  sf_init_ChartRunTimeInfo(S, &(chartInstance->chartInfo), false, 0,
    chartInstance->c2_JITStateAnimation,
    chartInstance->c2_JITTransitionAnimation);
  init_dsm_address_info(chartInstance);
  init_simulink_io_address(chartInstance);
  if (!sim_mode_is_rtw_gen(S)) {
  }

  mdl_setup_runtime_resources_c2_HybridControllerD2D2(chartInstance);
}

void c2_HybridControllerD2D2_method_dispatcher(SimStruct *S, int_T method, void *
  data)
{
  switch (method) {
   case SS_CALL_MDL_SETUP_RUNTIME_RESOURCES:
    mdlSetupRuntimeResources_c2_HybridControllerD2D2(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c2_HybridControllerD2D2(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c2_HybridControllerD2D2(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c2_HybridControllerD2D2_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
