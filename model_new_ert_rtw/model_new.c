/*
 * File: model_new.c
 *
 * Code generated for Simulink model 'model_new'.
 *
 * Model version                  : 1.1
 * Simulink Coder version         : 8.11 (R2016b) 25-Aug-2016
 * C/C++ source code generated on : Thu Nov 05 14:57:20 2020
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives:
 *    1. Execution efficiency
 *    2. RAM efficiency
 * Validation result: Not run
 */

#include "model_new.h"
#include <stdio.h>

/* External inputs (root inport signals with auto storage) */
ExtU rtU;

/* External outputs (root outports fed by signals with auto storage) */
ExtY rtY;

/* Real-time model */
RT_MODEL rtM_;
RT_MODEL *const rtM = &rtM_;

/* Model step function */
void model_new_step(void)
{
  real_T rtb_Subtract2;
  real_T rtb_Product1;
  real_T rtb_TrigonometricFunction8;
  real_T rtb_Subtract3;
  real_T rtb_TrigonometricFunction6;
  real_T rtb_dla;

  /* Trigonometry: '<Root>/Trigonometric Function1' incorporates:
   *  Constant: '<Root>/constant '
   *  Inport: '<Root>/In1'
   *  Inport: '<Root>/In3'
   *  Product: '<Root>/Product2'
   *  Sum: '<Root>/Subtract between longitude'
   */
  rtb_Subtract2 = sin((rtU.In1 - rtU.In3) * 0.5);

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
  rtb_Product1 = cos(rtU.In2) * cos(rtU.In4) * (rtb_Subtract2 * rtb_Subtract2);

  /* Trigonometry: '<Root>/Trigonometric Function2' incorporates:
   *  Constant: '<Root>/constant 1'
   *  Inport: '<Root>/In2'
   *  Inport: '<Root>/In4'
   *  Product: '<Root>/Product3'
   *  Sum: '<Root>/Subtract between latitude'
   */
  rtb_Subtract2 = sin((rtU.In2 - rtU.In4) * 0.5);

  /* Sqrt: '<Root>/Sqrt' incorporates:
   *  Math: '<Root>/Math Function1'
   *  Sum: '<Root>/Add'
   *
   * About '<Root>/Math Function1':
   *  Operator: magnitude^2
   */
  rtb_Subtract2 = sqrt(rtb_Subtract2 * rtb_Subtract2 + rtb_Product1);

  /* Trigonometry: '<Root>/Trigonometric Function' */
  if (rtb_Subtract2 > 1.0) {
    rtb_Subtract2 = 1.0;
  } else {
    if (rtb_Subtract2 < -1.0) {
      rtb_Subtract2 = -1.0;
    }
  }

  /* Outport: '<Root>/Out1' incorporates:
   *  Constant: '<Root>/Angle2radian'
   *  Constant: '<Root>/Constant'
   *  Constant: '<Root>/Radius of the earth'
   *  Product: '<Root>/Product'
   *  Trigonometry: '<Root>/Trigonometric Function'
   */
  rtY.Out1 = asin(rtb_Subtract2) * 2.0 * 6371.0 * 0.017453292519943295;

  /* Sum: '<Root>/dlo' incorporates:
   *  Inport: '<Root>/In1'
   *  Inport: '<Root>/In3'
   */
  rtb_Product1 = rtU.In1 - rtU.In3;

  /* Sum: '<Root>/dla' incorporates:
   *  Inport: '<Root>/In2'
   *  Inport: '<Root>/In3'
   */
  rtb_dla = rtU.In2 - rtU.In3;

  /* Sum: '<Root>/Subtract1' incorporates:
   *  Constant: '<Root>/angle2radian'
   *  Constant: '<Root>/const'
   *  Inport: '<Root>/In2'
   *  Product: '<Root>/Product5'
   */
  rtb_Subtract2 = 1.5707963267948966 - 0.017453292519943295 * rtU.In2;

  /* Trigonometry: '<Root>/Trigonometric Function8' */
  rtb_TrigonometricFunction8 = cos(rtb_Subtract2);

  /* Sum: '<Root>/Subtract3' incorporates:
   *  Constant: '<Root>/angle2radian'
   *  Constant: '<Root>/const'
   *  Inport: '<Root>/In3'
   *  Product: '<Root>/Product7'
   */
  rtb_Subtract3 = 1.5707963267948966 - 0.017453292519943295 * rtU.In3;

  /* Trigonometry: '<Root>/Trigonometric Function6' */
  rtb_TrigonometricFunction6 = sin(rtb_Subtract2);

  /* Sum: '<Root>/Subtract2' incorporates:
   *  Constant: '<Root>/angle2radian'
   *  Inport: '<Root>/In1'
   *  Inport: '<Root>/In3'
   *  Product: '<Root>/Product4'
   *  Product: '<Root>/Product6'
   */
  rtb_Subtract2 = 0.017453292519943295 * rtU.In3 - 0.017453292519943295 *
    rtU.In1;

  /* Sum: '<Root>/Add1' incorporates:
   *  Product: '<Root>/Product8'
   *  Product: '<Root>/Product9'
   *  Trigonometry: '<Root>/Trigonometric Function10'
   *  Trigonometry: '<Root>/Trigonometric Function7'
   *  Trigonometry: '<Root>/Trigonometric Function9'
   */
  rtb_TrigonometricFunction8 = rtb_TrigonometricFunction6 * sin(rtb_Subtract3) *
    cos(rtb_Subtract2) + rtb_TrigonometricFunction8 * cos(rtb_Subtract3);

  /* Sqrt: '<Root>/Sqrt1' incorporates:
   *  Constant: '<Root>/const 1'
   *  Math: '<Root>/Math Function2'
   *  Sum: '<Root>/Subtract4'
   *
   * About '<Root>/Math Function2':
   *  Operator: magnitude^2
   */
  rtb_TrigonometricFunction8 = sqrt(1.0 - rtb_TrigonometricFunction8 *
    rtb_TrigonometricFunction8);

  /* Product: '<Root>/Divide' incorporates:
   *  Product: '<Root>/Product10'
   *  Trigonometry: '<Root>/Trigonometric Function11'
   *  Trigonometry: '<Root>/Trigonometric Function12'
   */
  rtb_Subtract2 = 1.0 / rtb_TrigonometricFunction8 * (sin(rtb_Subtract3) * sin
    (rtb_Subtract2));

  /* Trigonometry: '<Root>/Trigonometric Function5' */
  if (rtb_Subtract2 > 1.0) {
    rtb_Subtract2 = 1.0;
  } else {
    if (rtb_Subtract2 < -1.0) {
      rtb_Subtract2 = -1.0;
    }
  }

  /* Product: '<Root>/Product11' incorporates:
   *  Constant: '<Root>/radian2angle'
   *  Trigonometry: '<Root>/Trigonometric Function5'
   */
  rtb_Subtract2 = asin(rtb_Subtract2) * 57.295779513082323;

  /* If: '<Root>/If' */
  if ((rtb_Product1 == 0.0) && (rtb_dla > 0.0)) {
    /* Outputs for IfAction SubSystem: '<Root>/If Action Subsystem' incorporates:
     *  ActionPort: '<S1>/Action Port'
     */
    /* Outport: '<Root>/Out2' incorporates:
     *  Constant: '<S1>/Constant'
     *  SignalConversion: '<S1>/OutportBufferForOut1'
     */
    rtY.Out2 = 0.0;

    /* End of Outputs for SubSystem: '<Root>/If Action Subsystem' */
  } else if ((rtb_Product1 == 0.0) && (rtb_dla > 0.0)) {
    /* Outputs for IfAction SubSystem: '<Root>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S2>/Action Port'
     */
    /* Outport: '<Root>/Out2' incorporates:
     *  Constant: '<S2>/Constant'
     *  SignalConversion: '<S2>/OutportBufferForOut1'
     */
    rtY.Out2 = 180.0;

    /* End of Outputs for SubSystem: '<Root>/If Action Subsystem1' */
  } else if ((rtb_dla == 0.0) && (rtb_Product1 > 0.0)) {
    /* Outputs for IfAction SubSystem: '<Root>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S3>/Action Port'
     */
    /* Outport: '<Root>/Out2' incorporates:
     *  Constant: '<S3>/Constant'
     *  SignalConversion: '<S3>/OutportBufferForOut1'
     */
    rtY.Out2 = 90.0;

    /* End of Outputs for SubSystem: '<Root>/If Action Subsystem2' */
  } else if ((rtb_dla == 0.0) && (rtb_Product1 < 0.0)) {
    /* Outputs for IfAction SubSystem: '<Root>/If Action Subsystem3' incorporates:
     *  ActionPort: '<S4>/Action Port'
     */
    /* Outport: '<Root>/Out2' incorporates:
     *  Constant: '<S4>/Constant'
     *  SignalConversion: '<S4>/OutportBufferForOut1'
     */
    rtY.Out2 = 270.0;

    /* End of Outputs for SubSystem: '<Root>/If Action Subsystem3' */
  } else if ((rtb_Product1 > 0.0) && (rtb_dla > 0.0)) {
    /* Outputs for IfAction SubSystem: '<Root>/If Action Subsystem4' incorporates:
     *  ActionPort: '<S5>/Action Port'
     */
    /* Outport: '<Root>/Out2' incorporates:
     *  Inport: '<S5>/In1'
     */
    rtY.Out2 = rtb_Subtract2;

    /* End of Outputs for SubSystem: '<Root>/If Action Subsystem4' */
  } else if ((rtb_Product1 > 0.0) && (rtb_dla < 0.0)) {
    /* Outputs for IfAction SubSystem: '<Root>/If Action Subsystem5' incorporates:
     *  ActionPort: '<S6>/Action Port'
     */
    /* Outport: '<Root>/Out2' incorporates:
     *  Constant: '<S6>/Constant'
     *  Sum: '<S6>/Add'
     */
    rtY.Out2 = rtb_Subtract2 + 90.0;

    /* End of Outputs for SubSystem: '<Root>/If Action Subsystem5' */
  } else if ((rtb_Product1 < 0.0) && (rtb_dla < 0.0)) {
    /* Outputs for IfAction SubSystem: '<Root>/If Action Subsystem6' incorporates:
     *  ActionPort: '<S7>/Action Port'
     */
    /* Outport: '<Root>/Out2' incorporates:
     *  Constant: '<S7>/Constant'
     *  Sum: '<S7>/Add'
     */
    rtY.Out2 = rtb_Subtract2 + 180.0;

    /* End of Outputs for SubSystem: '<Root>/If Action Subsystem6' */
  } else {
    /* Outputs for IfAction SubSystem: '<Root>/If Action Subsystem7' incorporates:
     *  ActionPort: '<S8>/Action Port'
     */
    /* Outport: '<Root>/Out2' incorporates:
     *  Constant: '<S8>/Constant'
     *  Sum: '<S8>/Add'
     */
    rtY.Out2 = rtb_Subtract2 + 270.0;

    /* End of Outputs for SubSystem: '<Root>/If Action Subsystem7' */
  }

  /* End of If: '<Root>/If' */
}

/* Model initialize function */
void model_new_initialize(void)
{
  /* (no initialization code required) */
}

/* Model terminate function */
void model_new_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */


