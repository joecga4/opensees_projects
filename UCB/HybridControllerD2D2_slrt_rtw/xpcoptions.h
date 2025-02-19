#ifndef __HybridControllerD2D2_XPCOPTIONS_H___
#define __HybridControllerD2D2_XPCOPTIONS_H___
#include "simstruc_types.h"
#ifndef MT
#define MT                             0                         /* MT may be undefined by simstruc_types.h */
#endif

#include "HybridControllerD2D2.h"
#define XPCMDSSUPPORT                  0
#define MDSTASKSNUM                    0
#define FULLMULTITHREAD                0
#define SIZEOF_PARAMS                  (-1 * (int)sizeof(P_HybridControllerD2D2_T))
#define SIMMODE                        0
#define LOGTET                         1
#define LOGBUFSIZE                     100000
#define PROFILINGFLAG                  1
#define EVENTNUMBER                    5000
#define IRQ_NO                         2
#define IO_IRQ                         1
#define WWW_ACCESS_LEVEL               0
#define CPUCLOCK                       0
#define MAXOVERLOAD                    0
#define MAXOVERLOADLEN                 0
#define XPCMODELSTACKSIZEKB            2048
#define XPCSTARTUPFLAG                 1
#define PTLOADPARAMFLAG                0
#define DOUBLEBUFFERING                0
#define SLRTFTZOFFFLAG                 0

/* Change all stepsize using the newBaseRateStepSize */
void HybridControllerD2D2_ChangeStepSize(real_T newBaseRateStepSize,
  RT_MODEL_HybridControllerD2D2_T *const HybridControllerD2D2_M)
{
  real_T ratio = newBaseRateStepSize / 0.0009765625;

  /* update non-zore stepsize of periodic
   * sample time. Stepsize of asynchronous
   * sample time is not changed in this function */
  HybridControllerD2D2_M->Timing.stepSize0 =
    HybridControllerD2D2_M->Timing.stepSize0 * ratio;
  HybridControllerD2D2_M->Timing.stepSize =
    HybridControllerD2D2_M->Timing.stepSize * ratio;
}

void XPCCALLCONV changeStepSize(real_T stepSize)
{
  /* Change all stepsize using the newBaseRateStepSize */
  HybridControllerD2D2_ChangeStepSize(stepSize, HybridControllerD2D2_M);
}

void XPCCALLCONV SLRTSetErrorStatus(const char * errMsg)
{
  rtmSetErrorStatus(HybridControllerD2D2_M, errMsg);
}

#endif                              /* __HybridControllerD2D2_XPCOPTIONS_H___ */
