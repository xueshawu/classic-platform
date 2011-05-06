/*
 * Configuration of module EcuM (EcuM_Cfg.c)
 *
 * Created by: 
 * Configured for (MCU): MPC551x
 *
 * Module vendor: ArcCore
 * Module version: 2.0.1
 *
 * 
 * Generated by Arctic Studio (http://arccore.com) 
 *           on Mon Jan 24 11:07:49 CET 2011
 */



#include "EcuM.h"

#if defined(USE_CANSM)
extern const CanSM_ConfigType CanSM_Config;
#endif
#if defined(USE_NM)
extern const Nm_ConfigType Nm_Config;
#endif
#if defined(USE_CANNM)
extern const CanNm_ConfigType CanNm_Config;
#endif
#if defined(USE_COMM)
extern const ComM_ConfigType ComM_Config;
#endif

EcuM_ConfigType EcuMConfig =
{
	.EcuMDefaultShutdownTarget = ECUM_STATE_RESET,
	.EcuMDefaultSleepMode = 0, // Don't care
	.EcuMDefaultAppMode = OSDEFAULTAPPMODE,
	.EcuMNvramReadAllTimeout = ECUM_NVRAM_READALL_TIMEOUT,
	.EcuMNvramWriteAllTimeout = ECUM_NVRAM_WRITEALL_TIMEOUT,
	.EcuMRunMinimumDuration = ECUM_NVRAM_MIN_RUN_DURATION,

#if defined(USE_MCU)
        .McuConfig = McuConfigData,
#endif
#if defined(USE_PORT)
        .PortConfig = &PortConfigData,
#endif
#if defined(USE_CAN)
        .CanConfig = &CanConfigData,
#endif
#if defined(USE_CANIF)
        .CanIfConfig = &CanIf_Config,
#endif
#if defined(USE_CANSM)
        .CanSMConfig = &CanSM_Config,
#endif
#if defined(USE_CANNM)
        .CanNmConfig = &CanNm_Config,
#endif
#if defined(USE_COM)
        .ComConfig = &ComConfiguration,
#endif
#if defined(USE_COMM)
        .ComMConfig = &ComM_Config,
#endif
#if defined(USE_NM)
        .NmConfig = &Nm_Config,
#endif
#if defined(USE_PDUR)
        .PduRConfig = &PduR_Config,
#endif
#if defined(USE_DMA)
        .DmaConfig = DmaConfig,
#endif
#if defined(USE_ADC)
        .AdcConfig = AdcConfig,
#endif
#if defined(USE_PWM)
        .PwmConfig = &PwmConfig,
#endif
#if defined(USE_GPT)
        .GptConfig = GptConfigData,
#endif
#if defined(USE_FLS)
	.FlashConfig = FlsConfigSet,
#endif
};
