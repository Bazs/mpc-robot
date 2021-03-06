/* Include files */
#include "function_call_test_sfun.h"
#include "c2_function_call_test.h"
#define CHARTINSTANCE_CHARTNUMBER       (chartInstance.chartNumber)
#define CHARTINSTANCE_INSTANCENUMBER    (chartInstance.instanceNumber)
#include "function_call_test_sfun_debug_macros.h"

/* Type Definitions */

/* Named Constants */
#define c2_IN_NO_ACTIVE_CHILD           (0)

/* Variable Declarations */

/* Variable Definitions */
static SFc2_function_call_testInstanceStruct chartInstance;

/* Function Declarations */
static void initialize_c2_function_call_test(void);
static void initialize_params_c2_function_call_test(void);
static void enable_c2_function_call_test(void);
static void disable_c2_function_call_test(void);
static void finalize_c2_function_call_test(void);
static void sf_c2_function_call_test(void);
static real_T *c2_a(void);
static real_T *c2_y(void);
static real_T *c2_b(void);
static void init_dsm_address_info(void);
static void sf_save_state_c2_function_call_test(FILE *c2_file);
static void sf_load_state_c2_function_call_test(FILE *c2_file);

/* Function Definitions */
static void initialize_c2_function_call_test(void)
{
  _sfTime_ = (real_T)ssGetT(chartInstance.S);
  chartInstance.c2_is_active_c2_function_call_test = 0U;
}

static void initialize_params_c2_function_call_test(void)
{
}

static void enable_c2_function_call_test(void)
{
}

static void disable_c2_function_call_test(void)
{
}

static void finalize_c2_function_call_test(void)
{
}

static void sf_c2_function_call_test(void)
{
  uint8_T c2_previousEvent;
  real_T c2_b_a;
  real_T c2_b_b;
  real_T c2_b_y;
  _sfTime_ = (real_T)ssGetT(chartInstance.S);
  _SFD_DATA_RANGE_CHECK(*c2_a(), 2U);
  _SFD_DATA_RANGE_CHECK(*c2_y(), 1U);
  _SFD_DATA_RANGE_CHECK(*c2_b(), 0U);
  c2_previousEvent = _sfEvent_;
  _sfEvent_ = CALL_EVENT;
  _SFD_CC_CALL(CHART_ENTER_DURING_FUNCTION_TAG,0);
  c2_b_a = *c2_a();
  c2_b_b = *c2_b();
  sf_debug_push_symbol_scope(3U, 0U);
  sf_debug_symbol_scope_add_symbol("y", 0, 0U, 0U, 0U, 0U, 1.0, 0, 0.0, 0U, 0,
   0U, 0, &c2_b_y, 0);
  sf_debug_symbol_scope_add_symbol("b", 0, 0U, 0U, 0U, 0U, 1.0, 0, 0.0, 0U, 0,
   0U, 0, &c2_b_b, 0);
  sf_debug_symbol_scope_add_symbol("a", 0, 0U, 0U, 0U, 0U, 1.0, 0, 0.0, 0U, 0,
   0U, 0, &c2_b_a, 0);
  CV_EML_FCN(0, 0);
  _SFD_EML_CALL(STATE_DURING_DURING_ACTION_TAG,0,4);
  if(CV_EML_IF(0, 0, c2_b_a != c2_b_b)) {
    /*  This block supports an embeddable subset of the MATLAB language. */
    /*  See the help menu for details.  */
    _SFD_EML_CALL(STATE_DURING_DURING_ACTION_TAG,0,4);
    c2_b_y = 1.0;
  } else {
    _SFD_EML_CALL(STATE_DURING_DURING_ACTION_TAG,0,5);
    c2_b_y = 0.0;
  }
  _SFD_EML_CALL(STATE_DURING_DURING_ACTION_TAG,0,-5);
  sf_debug_pop_symbol_scope();
  *c2_y() = c2_b_y;
  _SFD_CC_CALL(EXIT_OUT_OF_FUNCTION_TAG,0);
  _sfEvent_ = c2_previousEvent;
  sf_debug_check_for_state_inconsistency(_function_call_testMachineNumber_,
   chartInstance.chartNumber, chartInstance.instanceNumber);
}

static real_T *c2_a(void)
{
  return (real_T *)ssGetInputPortSignal(chartInstance.S, 0);
}

static real_T *c2_y(void)
{
  return (real_T *)ssGetOutputPortSignal(chartInstance.S, 1);
}

static real_T *c2_b(void)
{
  return (real_T *)ssGetInputPortSignal(chartInstance.S, 1);
}

static void init_dsm_address_info(void)
{
}

static void sf_save_state_c2_function_call_test(FILE *c2_file)
{
  fwrite(&chartInstance.c2_is_active_c2_function_call_test, 1,
   sizeof(chartInstance.c2_is_active_c2_function_call_test), c2_file);
}

static void sf_load_state_c2_function_call_test(FILE *c2_file)
{
  fread(&chartInstance.c2_is_active_c2_function_call_test, 1,
   sizeof(chartInstance.c2_is_active_c2_function_call_test), c2_file);
}

/* SFunction Glue Code */
void sf_c2_function_call_test_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(3781644652U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(89466970U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(3947214566U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(3756819905U);
}

mxArray *sf_c2_function_call_test_get_autoinheritance_info(void)
{
  const char *autoinheritanceFields[] =
  {"checksum","inputs","parameters","outputs"};
  mxArray *mxAutoinheritanceInfo =
  mxCreateStructMatrix(1,1,4,autoinheritanceFields);
  {
    mxArray *mxChecksum = mxCreateDoubleMatrix(4,1,mxREAL);
    double *pr = mxGetPr(mxChecksum);
    pr[0] = (double)(227236723U);
    pr[1] = (double)(2505754733U);
    pr[2] = (double)(3243951326U);
    pr[3] = (double)(3550859345U);
    mxSetField(mxAutoinheritanceInfo,0,"checksum",mxChecksum);
  }
  {
    const char *dataFields[] = {"size","type","complexity"};
    mxArray *mxData = mxCreateStructMatrix(1,2,3,dataFields);
    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(1);
      pr[1] = (double)(1);
      mxSetField(mxData,0,"size",mxSize);
    }
    {
      const char *typeFields[] = {"base","aliasId","fixpt"};
      mxArray *mxType = mxCreateStructMatrix(1,1,3,typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"aliasId",mxCreateDoubleScalar(0));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,0,"type",mxType);
    }
    mxSetField(mxData,0,"complexity",mxCreateDoubleScalar(0));
    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(1);
      pr[1] = (double)(1);
      mxSetField(mxData,1,"size",mxSize);
    }
    {
      const char *typeFields[] = {"base","aliasId","fixpt"};
      mxArray *mxType = mxCreateStructMatrix(1,1,3,typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"aliasId",mxCreateDoubleScalar(0));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,1,"type",mxType);
    }
    mxSetField(mxData,1,"complexity",mxCreateDoubleScalar(0));
    mxSetField(mxAutoinheritanceInfo,0,"inputs",mxData);
  }
  {
    mxSetField(mxAutoinheritanceInfo,0,"parameters",mxCreateDoubleMatrix(0,0,mxREAL));
  }
  {
    const char *dataFields[] = {"size","type","complexity"};
    mxArray *mxData = mxCreateStructMatrix(1,1,3,dataFields);
    {
      mxArray *mxSize = mxCreateDoubleMatrix(1,2,mxREAL);
      double *pr = mxGetPr(mxSize);
      pr[0] = (double)(1);
      pr[1] = (double)(1);
      mxSetField(mxData,0,"size",mxSize);
    }
    {
      const char *typeFields[] = {"base","aliasId","fixpt"};
      mxArray *mxType = mxCreateStructMatrix(1,1,3,typeFields);
      mxSetField(mxType,0,"base",mxCreateDoubleScalar(10));
      mxSetField(mxType,0,"aliasId",mxCreateDoubleScalar(0));
      mxSetField(mxType,0,"fixpt",mxCreateDoubleMatrix(0,0,mxREAL));
      mxSetField(mxData,0,"type",mxType);
    }
    mxSetField(mxData,0,"complexity",mxCreateDoubleScalar(0));
    mxSetField(mxAutoinheritanceInfo,0,"outputs",mxData);
  }
  return(mxAutoinheritanceInfo);
}

static void chart_debug_initialization(SimStruct *S)
{
  if(ssIsFirstInitCond(S)) {
    /* do this only if simulation is starting */
    if(!sim_mode_is_rtw_gen(S)) {
      {
        unsigned int chartAlreadyPresent;
        chartAlreadyPresent =
          sf_debug_initialize_chart(_function_call_testMachineNumber_,
         2,
         1,
         1,
         3,
         0,
         0,
         0,
         0,
         &(chartInstance.chartNumber),
         &(chartInstance.instanceNumber),
         ssGetPath(S),
         (void *)S);
        if(chartAlreadyPresent==0) {
          /* this is the first instance */
          sf_debug_set_chart_disable_implicit_casting(_function_call_testMachineNumber_,chartInstance.chartNumber,1);
          sf_debug_set_chart_event_thresholds(_function_call_testMachineNumber_,
           chartInstance.chartNumber,
           0,
           0,
           0);

          _SFD_SET_DATA_PROPS(2,1,1,0,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,"a",0);
          _SFD_SET_DATA_PROPS(1,2,0,1,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,"y",0);
          _SFD_SET_DATA_PROPS(0,1,1,0,SF_DOUBLE,0,NULL,0,0,0,0.0,1.0,0,"b",0);
          _SFD_STATE_INFO(0,0,2);
          _SFD_CH_SUBSTATE_COUNT(0);
          _SFD_CH_SUBSTATE_DECOMP(0);
        }
        _SFD_CV_INIT_CHART(0,0,0,0);
        {
          _SFD_CV_INIT_STATE(0,0,0,0,0,0,NULL,NULL);
        }

        _SFD_CV_INIT_TRANS(0,0,NULL,NULL,0,NULL);

        /* Initialization of EML Model Coverage */
        _SFD_CV_INIT_EML(0,1,1,0,0,0,0,0);
        _SFD_CV_INIT_EML_FCN(0,0,"eML_blk_kernel",0,-1,158);
        _SFD_CV_INIT_EML_IF(0,0,124,135,143,158);
        _SFD_TRANS_COV_WTS(0,0,0,1,0);
        if(chartAlreadyPresent==0)
        {
          _SFD_TRANS_COV_MAPS(0,
           0,NULL,NULL,
           0,NULL,NULL,
           1,NULL,NULL,
           0,NULL,NULL);
        }
        _SFD_SET_DATA_VALUE_PTR(2U, c2_a());
        _SFD_SET_DATA_VALUE_PTR(1U, c2_y());
        _SFD_SET_DATA_VALUE_PTR(0U, c2_b());
      }
    }
  } else {
    sf_debug_reset_current_state_configuration(_function_call_testMachineNumber_,chartInstance.chartNumber,chartInstance.instanceNumber);
  }
}

static void sf_opaque_initialize_c2_function_call_test(void *chartInstanceVar)
{
  chart_debug_initialization(chartInstance.S);
  initialize_params_c2_function_call_test();
  initialize_c2_function_call_test();
}

static void sf_opaque_enable_c2_function_call_test(void *chartInstanceVar)
{
  enable_c2_function_call_test();
}

static void sf_opaque_disable_c2_function_call_test(void *chartInstanceVar)
{
  disable_c2_function_call_test();
}

static void sf_opaque_gateway_c2_function_call_test(void *chartInstanceVar)
{
  sf_c2_function_call_test();
}

static void sf_opaque_terminate_c2_function_call_test(void *chartInstanceVar)
{
  finalize_c2_function_call_test();
}

static void mdlProcessParameters_c2_function_call_test(SimStruct *S)
{
  int i;
  for(i=0;i<ssGetNumRunTimeParams(S);i++) {
    if(ssGetSFcnParamTunable(S,i)) {
      ssUpdateDlgParamAsRunTimeParam(S,i);
    }
  }
  initialize_params_c2_function_call_test();
}

static void mdlSetWorkWidths_c2_function_call_test(SimStruct *S)
{
  if(sim_mode_is_rtw_gen(S)) {
    int_T chartIsInlinable =
      (int_T)sf_is_chart_inlinable("function_call_test",2);
    ssSetStateflowIsInlinable(S,chartIsInlinable);
    ssSetEnableFcnIsTrivial(S,1);
    ssSetDisableFcnIsTrivial(S,1);
    ssSetNotMultipleInlinable(S,sf_rtw_info_uint_prop("function_call_test",2,"gatewayCannotBeInlinedMultipleTimes"));
    if(chartIsInlinable) {
      ssSetInputPortOptimOpts(S, 0, SS_REUSABLE_AND_LOCAL);
      ssSetInputPortOptimOpts(S, 1, SS_REUSABLE_AND_LOCAL);
      sf_mark_chart_expressionable_inputs(S,"function_call_test",2,2);
      sf_mark_chart_reusable_outputs(S,"function_call_test",2,1);
    }
    if (!sf_is_chart_instance_optimized_out("function_call_test",2)) {
      int dtId;
      char *chartInstanceTypedefName =
        sf_chart_instance_typedef_name("function_call_test",2);
      dtId = ssRegisterDataType(S, chartInstanceTypedefName);
      if (dtId == INVALID_DTYPE_ID ) return;
      /* Register the size of the udt */
      if (!ssSetDataTypeSize(S, dtId, 8)) return;
      if(!ssSetNumDWork(S,1)) return;
      ssSetDWorkDataType(S, 0, dtId);
      ssSetDWorkWidth(S, 0, 1);
      ssSetDWorkName(S, 0, "ChartInstance"); /*optional name, less than 16 chars*/
      sf_set_rtw_identifier(S);
    }
    ssSetHasSubFunctions(S,!(chartIsInlinable));
    ssSetOptions(S,ssGetOptions(S)|SS_OPTION_WORKS_WITH_CODE_REUSE);
  }

  ssSetChecksum0(S,(1397211981U));
  ssSetChecksum1(S,(994213341U));
  ssSetChecksum2(S,(655772414U));
  ssSetChecksum3(S,(3087288063U));

  ssSetExplicitFCSSCtrl(S,1);
}

static void mdlRTW_c2_function_call_test(SimStruct *S)
{
  if(sim_mode_is_rtw_gen(S)) {
    sf_write_symbol_mapping(S, "function_call_test", 2);
    ssWriteRTWStrParam(S, "StateflowChartType", "Embedded MATLAB");
  }
}

static void
sf_save_debug_c2_function_call_test(SFc2_function_call_testInstanceStruct*
 chartInstance, FILE* file)
{
  int machineNumber = _function_call_testMachineNumber_;
  int chartNumber = chartInstance->chartNumber;
  int instanceNumber = chartInstance->instanceNumber;
  int bufferSize = sf_debug_get_state_vectors_data_size(machineNumber,
   chartNumber, instanceNumber);
  unsigned char* buffer = (unsigned char*) malloc(bufferSize);
  unsigned int chartActive = sf_debug_get_chart_active(machineNumber,
   chartNumber, instanceNumber);
  fwrite(&chartActive, sizeof(chartActive),1,file);
  sf_debug_get_state_vectors_data(machineNumber, chartNumber, instanceNumber,
   buffer, bufferSize);
  fwrite(&bufferSize, sizeof(bufferSize), 1, file); /* Write number of bytes */
  fwrite(buffer, 1, bufferSize,file);   /* Write buffer */
  free(buffer);
}
static void
sf_load_debug_c2_function_call_test(SFc2_function_call_testInstanceStruct*
 chartInstance,FILE* file)
{
  int machineNumber = _function_call_testMachineNumber_;
  int chartNumber = chartInstance->chartNumber;
  int instanceNumber = chartInstance->instanceNumber;
  int bufferSize = 0;
  unsigned char* buffer = NULL;
  unsigned int chartActive = 0;
  fread(&chartActive, sizeof(chartActive),1,file);
  sf_debug_set_chart_active(machineNumber, chartNumber, instanceNumber,
   chartActive);
  fread(&bufferSize, sizeof(bufferSize), 1, file);
  buffer = (unsigned char*) malloc(bufferSize);
  fread(buffer, 1, bufferSize, file);
  sf_debug_set_state_vectors_data(machineNumber, chartNumber, instanceNumber,
   buffer, bufferSize);
  free(buffer);
}
static void sf_c2_function_call_test_sim_ctx_io(SimStruct* S, const char io,
 FILE* file)
{
  if(io == 'r') {
    sf_load_state_c2_function_call_test(file);
    sf_load_debug_c2_function_call_test(&chartInstance, file);
  } else {
    sf_save_state_c2_function_call_test(file);
    sf_save_debug_c2_function_call_test(&chartInstance, file);
  }
}
static void mdlStart_c2_function_call_test(SimStruct *S)
{
  chartInstance.chartInfo.chartInstance = NULL;
  chartInstance.chartInfo.isEMLChart = 1;
  chartInstance.chartInfo.chartInitialized = 0;
  chartInstance.chartInfo.sFunctionGateway =
    sf_opaque_gateway_c2_function_call_test;
  chartInstance.chartInfo.initializeChart =
    sf_opaque_initialize_c2_function_call_test;
  chartInstance.chartInfo.terminateChart =
    sf_opaque_terminate_c2_function_call_test;
  chartInstance.chartInfo.enableChart = sf_opaque_enable_c2_function_call_test;
  chartInstance.chartInfo.disableChart = sf_opaque_disable_c2_function_call_test;
  chartInstance.chartInfo.mdlRTW = mdlRTW_c2_function_call_test;
  chartInstance.chartInfo.mdlStart = mdlStart_c2_function_call_test;
  chartInstance.chartInfo.mdlSetWorkWidths =
    mdlSetWorkWidths_c2_function_call_test;
  chartInstance.chartInfo.restoreLastMajorStepConfiguration = NULL;
  chartInstance.chartInfo.restoreBeforeLastMajorStepConfiguration = NULL;
  chartInstance.chartInfo.storeCurrentConfiguration = NULL;
  chartInstance.S = S;
  ssSetUserData(S,(void *)(&(chartInstance.chartInfo))); /* register the chart instance with simstruct */
  ssSetmdlSimulationContextIO(S, sf_c2_function_call_test_sim_ctx_io);
  if(!sim_mode_is_rtw_gen(S)) {
    init_dsm_address_info();
  }
}

void c2_function_call_test_method_dispatcher(SimStruct *S, int_T method, void
 *data)
{
  switch (method) {
   case SS_CALL_MDL_START:
    mdlStart_c2_function_call_test(S);
    break;
   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c2_function_call_test(S);
    break;
   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c2_function_call_test(S);
    break;
   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
     "Error calling c2_function_call_test_method_dispatcher.\n"
     "Can't handle method %d.\n", method);
    break;
  }
}

