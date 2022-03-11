/*****************************************************/
/* File   : FiM.cpp                                  */
/* Author : Naagraaj HM                              */
/*****************************************************/

/*****************************************************/
/* #INCLUDES                                         */
/*****************************************************/
#include "module.h"
#include "infFiM_EcuM.h"
#include "infFiM_Dcm.h"
#include "infFiM_SchM.h"

/*****************************************************/
/* #DEFINES                                          */
/*****************************************************/

/*****************************************************/
/* MACROS                                            */
/*****************************************************/

/*****************************************************/
/* TYPEDEFS                                          */
/*****************************************************/
class module_FiM:
      public abstract_module
{
   public:
      FUNC(void, FIM_CODE) InitFunction   (void);
      FUNC(void, FIM_CODE) DeInitFunction (void);
      FUNC(void, FIM_CODE) GetVersionInfo (void);
      FUNC(void, FIM_CODE) MainFunction   (void);
};

/*****************************************************/
/* CONSTS                                            */
/*****************************************************/

/*****************************************************/
/* PARAMS                                            */
/*****************************************************/

/*****************************************************/
/* OBJECTS                                           */
/*****************************************************/
module_FiM     FiM;
infEcuMClient* gptrinfEcuMClient_FiM = &FiM;
infDcmClient*  gptrinfDcmClient_FiM  = &FiM;
infSchMClient* gptrinfSchMClient_FiM = &FiM;

/*****************************************************/
/* FUNCTIONS                                         */
/*****************************************************/
FUNC(void, FIM_CODE) module_FiM::InitFunction(void){
}

FUNC(void, FIM_CODE) module_FiM::DeInitFunction(void){
}

FUNC(void, FIM_CODE) module_FiM::GetVersionInfo(void){
}

FUNC(void, FIM_CODE) module_FiM::MainFunction(void){
}

#include "FiM_Unused.h"

FUNC(void, FIM_CODE) class_FiM_Unused::GetFunctionPermission(void){
}

FUNC(void, FIM_CODE) class_FiM_Unused::SetFunctionAvailable(void){
}

FUNC(void, FIM_CODE) class_FiM_Unused::DemTriggerOnMonitorStatus(void){
}

FUNC(void, FIM_CODE) class_FiM_Unused::DemTriggerOnComponentStatus(void){
}

FUNC(void, FIM_CODE) class_FiM_Unused::DemInitFunction(void){
}

FUNC(void, FIM_CODE) class_FiM_Unused::FunctionInhibition(void){
}

FUNC(void, FIM_CODE) class_FiM_Unused::ControlFunctionAvailable(void){
}

FUNC(void, FIM_CODE) class_FiM_Unused::FunctionIdType(void){
}

/*****************************************************/
/* EOF                                               */
/*****************************************************/

