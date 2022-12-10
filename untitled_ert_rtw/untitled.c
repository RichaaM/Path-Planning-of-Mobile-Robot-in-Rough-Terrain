/*
 * untitled.c
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "untitled".
 *
 * Model version              : 1.0
 * Simulink Coder version : 9.8 (R2022b) 13-May-2022
 * C source code generated on : Wed Nov 16 12:14:23 2022
 *
 * Target selection: ert.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "untitled.h"
#include "rtwtypes.h"
#include "untitled_private.h"
#include <math.h>
#include <string.h>

/* Block states (default storage) */
DW_untitled_T untitled_DW;

/* Real-time model */
static RT_MODEL_untitled_T untitled_M_;
RT_MODEL_untitled_T *const untitled_M = &untitled_M_;
real_T rt_roundd_snf(real_T u)
{
  real_T y;
  if (fabs(u) < 4.503599627370496E+15) {
    if (u >= 0.5) {
      y = floor(u + 0.5);
    } else if (u > -0.5) {
      y = u * 0.0;
    } else {
      y = ceil(u - 0.5);
    }
  } else {
    y = u;
  }

  return y;
}

/* Model step function */
void untitled_step(void)
{
  real_T tmp;
  uint8_T tmp_0;

  /* MATLABSystem: '<S1>/Digital Write' incorporates:
   *  Constant: '<Root>/Constant'
   */
  tmp = rt_roundd_snf(untitled_P.Constant_Value);
  if (tmp < 256.0) {
    if (tmp >= 0.0) {
      tmp_0 = (uint8_T)tmp;
    } else {
      tmp_0 = 0U;
    }
  } else {
    tmp_0 = MAX_uint8_T;
  }

  EXT_GPIO_write(20U, tmp_0);

  /* End of MATLABSystem: '<S1>/Digital Write' */

  /* MATLABSystem: '<S2>/Digital Write' incorporates:
   *  Constant: '<Root>/Constant1'
   */
  tmp = rt_roundd_snf(untitled_P.Constant1_Value);
  if (tmp < 256.0) {
    if (tmp >= 0.0) {
      tmp_0 = (uint8_T)tmp;
    } else {
      tmp_0 = 0U;
    }
  } else {
    tmp_0 = MAX_uint8_T;
  }

  EXT_GPIO_write(21U, tmp_0);

  /* End of MATLABSystem: '<S2>/Digital Write' */

  /* MATLABSystem: '<S3>/Digital Write' incorporates:
   *  Constant: '<Root>/Constant2'
   */
  tmp = rt_roundd_snf(untitled_P.Constant2_Value);
  if (tmp < 256.0) {
    if (tmp >= 0.0) {
      tmp_0 = (uint8_T)tmp;
    } else {
      tmp_0 = 0U;
    }
  } else {
    tmp_0 = MAX_uint8_T;
  }

  EXT_GPIO_write(13U, tmp_0);

  /* End of MATLABSystem: '<S3>/Digital Write' */
}

/* Model initialize function */
void untitled_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(untitled_M, (NULL));

  /* states (dwork) */
  (void) memset((void *)&untitled_DW, 0,
                sizeof(DW_untitled_T));

  /* Start for MATLABSystem: '<S1>/Digital Write' */
  untitled_DW.obj_g.matlabCodegenIsDeleted = false;
  untitled_DW.objisempty_j = true;
  untitled_DW.obj_g.isInitialized = 1;
  EXT_GPIO_init(20U, true);
  untitled_DW.obj_g.isSetupComplete = true;

  /* Start for MATLABSystem: '<S2>/Digital Write' */
  untitled_DW.obj_f.matlabCodegenIsDeleted = false;
  untitled_DW.objisempty_f = true;
  untitled_DW.obj_f.isInitialized = 1;
  EXT_GPIO_init(21U, true);
  untitled_DW.obj_f.isSetupComplete = true;

  /* Start for MATLABSystem: '<S3>/Digital Write' */
  untitled_DW.obj.matlabCodegenIsDeleted = false;
  untitled_DW.objisempty = true;
  untitled_DW.obj.isInitialized = 1;
  EXT_GPIO_init(13U, true);
  untitled_DW.obj.isSetupComplete = true;
}

/* Model terminate function */
void untitled_terminate(void)
{
  /* Terminate for MATLABSystem: '<S1>/Digital Write' */
  if (!untitled_DW.obj_g.matlabCodegenIsDeleted) {
    untitled_DW.obj_g.matlabCodegenIsDeleted = true;
    if ((untitled_DW.obj_g.isInitialized == 1) &&
        untitled_DW.obj_g.isSetupComplete) {
      EXT_GPIO_terminate(20U);
    }
  }

  /* End of Terminate for MATLABSystem: '<S1>/Digital Write' */

  /* Terminate for MATLABSystem: '<S2>/Digital Write' */
  if (!untitled_DW.obj_f.matlabCodegenIsDeleted) {
    untitled_DW.obj_f.matlabCodegenIsDeleted = true;
    if ((untitled_DW.obj_f.isInitialized == 1) &&
        untitled_DW.obj_f.isSetupComplete) {
      EXT_GPIO_terminate(21U);
    }
  }

  /* End of Terminate for MATLABSystem: '<S2>/Digital Write' */

  /* Terminate for MATLABSystem: '<S3>/Digital Write' */
  if (!untitled_DW.obj.matlabCodegenIsDeleted) {
    untitled_DW.obj.matlabCodegenIsDeleted = true;
    if ((untitled_DW.obj.isInitialized == 1) && untitled_DW.obj.isSetupComplete)
    {
      EXT_GPIO_terminate(13U);
    }
  }

  /* End of Terminate for MATLABSystem: '<S3>/Digital Write' */
}
