/*
 * File: distance_model.h
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

#ifndef RTW_HEADER_distance_model_h_
#define RTW_HEADER_distance_model_h_
#include <math.h>
#include "rtw_modelmap.h"
#ifndef distance_model_COMMON_INCLUDES_
# define distance_model_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* distance_model_COMMON_INCLUDES_ */

/* Macros for accessing real-time model data structure */
#ifndef rtmGetDataMapInfo
# define rtmGetDataMapInfo(rtm)        ((rtm)->DataMapInfo)
#endif

#ifndef rtmSetDataMapInfo
# define rtmSetDataMapInfo(rtm, val)   ((rtm)->DataMapInfo = (val))
#endif

/* Forward declaration for rtModel */
typedef struct tag_RTM RT_MODEL;

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

/* Real-time Model Data Structure */
struct tag_RTM {
  /*
   * DataMapInfo:
   * The following substructure contains information regarding
   * structures generated in the model's C API.
   */
  struct {
    rtwCAPI_ModelMappingInfo mmi;
  } DataMapInfo;
};

/* External inputs (root inport signals with auto storage) */
extern ExtU rtU;

/* External outputs (root outports fed by signals with auto storage) */
extern ExtY rtY;

/* Model entry point functions */
extern void distance_model_initialize(void);
extern void distance_model_step(void);
extern void distance_model_terminate(void);

/* Function to get C API Model Mapping Static Info */
extern const rtwCAPI_ModelMappingStaticInfo*
  distance_model_GetCAPIStaticMap(void);

/* Real-time Model object */
extern RT_MODEL *const rtM;

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
 * '<Root>' : 'distance_model'
 */
#endif                                 /* RTW_HEADER_distance_model_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
