/*
 * File: distance_model.c
 *
 * Code generated for Simulink model 'distance_model'.
 *
 * Model version                  : 1.5
 * Simulink Coder version         : 8.11 (R2016b) 25-Aug-2016
 * C/C++ source code generated on : Wed Nov 04 14:48:47 2020
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives:
 *    1. Execution efficiency
 *    2. RAM efficiency
 * Validation result: Not run
 */

#include "distance_model_capi.h"
#include "distance_model.h"

/* External inputs (root inport signals with auto storage) */
ExtU rtU;

/* External outputs (root outports fed by signals with auto storage) */
ExtY rtY;

/* Real-time model */
RT_MODEL rtM_;
RT_MODEL *const rtM = &rtM_;

/* Model step function */
void distance_model_step(void)
{
  real_T rtb_Sqrt;
  real_T rtb_Product1;

  /* Trigonometry: '<Root>/Trigonometric Function1' incorporates:
   *  Constant: '<Root>/constant '
   *  Inport: '<Root>/In1'
   *  Inport: '<Root>/In3'
   *  Product: '<Root>/Product2'
   *  Sum: '<Root>/Subtract between longitude'
   */
  rtb_Sqrt = sin((rtU.In1 - rtU.In3) * 0.5);

  /* Product: '<Root>/Product1' incorporates:
   *  Inport: '<Root>/In2'
   *  Inport: '<Root>/In4'
   *  Math: '<Root>/Math Function'
   *  Trigonometry: '<Root>/Trigonometric Function3'
   *  Trigonometry: '<Root>/Trigonometric Function4'
   *
   * About '<Root>/Math Function':
   *  Operator: magnitude^2
   */
  rtb_Product1 = cos(rtU.In2) * cos(rtU.In4) * (rtb_Sqrt * rtb_Sqrt);

  /* Trigonometry: '<Root>/Trigonometric Function2' incorporates:
   *  Constant: '<Root>/constant 1'
   *  Inport: '<Root>/In2'
   *  Inport: '<Root>/In4'
   *  Product: '<Root>/Product3'
   *  Sum: '<Root>/Subtract between latitude'
   */
  rtb_Sqrt = sin((rtU.In2 - rtU.In4) * 0.5);

  /* Sqrt: '<Root>/Sqrt' incorporates:
   *  Math: '<Root>/Math Function1'
   *  Sum: '<Root>/Add'
   *
   * About '<Root>/Math Function1':
   *  Operator: magnitude^2
   */
  rtb_Sqrt = sqrt(rtb_Sqrt * rtb_Sqrt + rtb_Product1);

  /* Trigonometry: '<Root>/Trigonometric Function' */
  if (rtb_Sqrt > 1.0) {
    rtb_Sqrt = 1.0;
  } else {
    if (rtb_Sqrt < -1.0) {
      rtb_Sqrt = -1.0;
    }
  }

  /* Outport: '<Root>/Out1' incorporates:
   *  Constant: '<Root>/Angle2radian'
   *  Constant: '<Root>/Constant'
   *  Constant: '<Root>/Radius of the earth'
   *  Product: '<Root>/Product'
   *  Trigonometry: '<Root>/Trigonometric Function'
   */
  rtY.Out1 = asin(rtb_Sqrt) * 2.0 * 6371.0 * 0.017453292519943295;
}

/* Model initialize function */
void distance_model_initialize(void)
{
  /* Registration code */

  /* Initialize DataMapInfo substructure containing ModelMap for C API */
  distance_model_InitializeDataMapInfo(rtM);
}

/* Model terminate function */
void distance_model_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
