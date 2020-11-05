/*
 * File: angle_model.h
 *
 * Code generated for Simulink model 'angle_model'.
 *
 * Model version                  : 1.18
 * Simulink Coder version         : 8.11 (R2016b) 25-Aug-2016
 * C/C++ source code generated on : Thu Nov 05 12:23:24 2020
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives:
 *    1. Execution efficiency
 *    2. RAM efficiency
 * Validation result: Not run
 */

#ifndef RTW_HEADER_angle_model_h_
#define RTW_HEADER_angle_model_h_
#include <math.h>
#ifndef angle_model_COMMON_INCLUDES_
# define angle_model_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* angle_model_COMMON_INCLUDES_ */

/* Macros for accessing real-time model data structure */

/* External inputs (root inport signals with auto storage) */
typedef struct {
  real_T In1;                          /* '<Root>/In1' */
  real_T In2;                          /* '<Root>/In2' */
  real_T In3;                          /* '<Root>/In3' */
  real_T In4;                          /* '<Root>/In4' */
} ExtU;

/* External outputs (root outports fed by signals with auto storage) */
typedef struct {
  real_T Out1;                         /* '<Root>/Out1' */
} ExtY;

/* External inputs (root inport signals with auto storage) */
extern ExtU rtU;

/* External outputs (root outports fed by signals with auto storage) */
extern ExtY rtY;

/* Model entry point functions */
extern void angle_model_initialize(void);
extern void angle_model_step(void);
extern void angle_model_terminate(void);

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'angle_model'
 * '<S1>'   : 'angle_model/If Action Subsystem'
 * '<S2>'   : 'angle_model/If Action Subsystem1'
 * '<S3>'   : 'angle_model/If Action Subsystem2'
 * '<S4>'   : 'angle_model/If Action Subsystem3'
 * '<S5>'   : 'angle_model/If Action Subsystem4'
 * '<S6>'   : 'angle_model/If Action Subsystem5'
 * '<S7>'   : 'angle_model/If Action Subsystem6'
 * '<S8>'   : 'angle_model/If Action Subsystem7'
 */
#endif                                 /* RTW_HEADER_angle_model_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
