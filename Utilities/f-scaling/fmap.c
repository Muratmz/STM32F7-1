#include "perf_config.h"
#include "stm32f7xx_ll_pwr.h"
#include "stm32f7xx_ll_rcc.h"

const PLLParam_TypeDef ClockRateScale_Low[] = { 
{LL_RCC_PLLSOURCE_HSE, LL_RCC_PLLM_DIV_4, 120, LL_RCC_PLLP_DIV_4},
{LL_RCC_PLLSOURCE_HSE, LL_RCC_PLLM_DIV_4, 122, LL_RCC_PLLP_DIV_4},
{LL_RCC_PLLSOURCE_HSE, LL_RCC_PLLM_DIV_4, 124, LL_RCC_PLLP_DIV_4},
{LL_RCC_PLLSOURCE_HSE, LL_RCC_PLLM_DIV_4, 126, LL_RCC_PLLP_DIV_4},
{LL_RCC_PLLSOURCE_HSE, LL_RCC_PLLM_DIV_4, 128, LL_RCC_PLLP_DIV_4},
{LL_RCC_PLLSOURCE_HSE, LL_RCC_PLLM_DIV_4, 130, LL_RCC_PLLP_DIV_4},
{LL_RCC_PLLSOURCE_HSE, LL_RCC_PLLM_DIV_4, 132, LL_RCC_PLLP_DIV_4},
{LL_RCC_PLLSOURCE_HSE, LL_RCC_PLLM_DIV_4, 134, LL_RCC_PLLP_DIV_4},
{LL_RCC_PLLSOURCE_HSE, LL_RCC_PLLM_DIV_4, 136, LL_RCC_PLLP_DIV_4},
{LL_RCC_PLLSOURCE_HSE, LL_RCC_PLLM_DIV_4, 138, LL_RCC_PLLP_DIV_4},
{LL_RCC_PLLSOURCE_HSE, LL_RCC_PLLM_DIV_4, 140, LL_RCC_PLLP_DIV_4},
{LL_RCC_PLLSOURCE_HSE, LL_RCC_PLLM_DIV_4, 142, LL_RCC_PLLP_DIV_4},
{LL_RCC_PLLSOURCE_HSE, LL_RCC_PLLM_DIV_4, 144, LL_RCC_PLLP_DIV_4},
{LL_RCC_PLLSOURCE_HSE, LL_RCC_PLLM_DIV_4, 146, LL_RCC_PLLP_DIV_4},
{LL_RCC_PLLSOURCE_HSE, LL_RCC_PLLM_DIV_4, 148, LL_RCC_PLLP_DIV_4},
{LL_RCC_PLLSOURCE_HSE, LL_RCC_PLLM_DIV_4, 150, LL_RCC_PLLP_DIV_4},
{LL_RCC_PLLSOURCE_HSE, LL_RCC_PLLM_DIV_4, 152, LL_RCC_PLLP_DIV_4},
{LL_RCC_PLLSOURCE_HSE, LL_RCC_PLLM_DIV_4, 154, LL_RCC_PLLP_DIV_4},
{LL_RCC_PLLSOURCE_HSE, LL_RCC_PLLM_DIV_4, 156, LL_RCC_PLLP_DIV_4},
{LL_RCC_PLLSOURCE_HSE, LL_RCC_PLLM_DIV_4, 158, LL_RCC_PLLP_DIV_4},
{LL_RCC_PLLSOURCE_HSE, LL_RCC_PLLM_DIV_4, 160, LL_RCC_PLLP_DIV_4},
{LL_RCC_PLLSOURCE_HSE, LL_RCC_PLLM_DIV_4, 162, LL_RCC_PLLP_DIV_4},
{LL_RCC_PLLSOURCE_HSE, LL_RCC_PLLM_DIV_4, 164, LL_RCC_PLLP_DIV_4},
{LL_RCC_PLLSOURCE_HSE, LL_RCC_PLLM_DIV_4, 166, LL_RCC_PLLP_DIV_4},
{LL_RCC_PLLSOURCE_HSE, LL_RCC_PLLM_DIV_4, 168, LL_RCC_PLLP_DIV_4},
{LL_RCC_PLLSOURCE_HSE, LL_RCC_PLLM_DIV_4, 170, LL_RCC_PLLP_DIV_4},
{LL_RCC_PLLSOURCE_HSE, LL_RCC_PLLM_DIV_4, 172, LL_RCC_PLLP_DIV_4},
{LL_RCC_PLLSOURCE_HSE, LL_RCC_PLLM_DIV_4, 174, LL_RCC_PLLP_DIV_4},
{LL_RCC_PLLSOURCE_HSE, LL_RCC_PLLM_DIV_4, 176, LL_RCC_PLLP_DIV_4},
{LL_RCC_PLLSOURCE_HSE, LL_RCC_PLLM_DIV_4, 178, LL_RCC_PLLP_DIV_4},
{LL_RCC_PLLSOURCE_HSE, LL_RCC_PLLM_DIV_4, 180, LL_RCC_PLLP_DIV_4},
{LL_RCC_PLLSOURCE_HSE, LL_RCC_PLLM_DIV_4, 182, LL_RCC_PLLP_DIV_4},
{LL_RCC_PLLSOURCE_HSE, LL_RCC_PLLM_DIV_4, 184, LL_RCC_PLLP_DIV_4},
{LL_RCC_PLLSOURCE_HSE, LL_RCC_PLLM_DIV_4, 186, LL_RCC_PLLP_DIV_4},
{LL_RCC_PLLSOURCE_HSE, LL_RCC_PLLM_DIV_4, 188, LL_RCC_PLLP_DIV_4},
{LL_RCC_PLLSOURCE_HSE, LL_RCC_PLLM_DIV_4, 190, LL_RCC_PLLP_DIV_4},
{LL_RCC_PLLSOURCE_HSE, LL_RCC_PLLM_DIV_4, 96, LL_RCC_PLLP_DIV_2},
{LL_RCC_PLLSOURCE_HSE, LL_RCC_PLLM_DIV_4, 97, LL_RCC_PLLP_DIV_2},
{LL_RCC_PLLSOURCE_HSE, LL_RCC_PLLM_DIV_4, 98, LL_RCC_PLLP_DIV_2},
{LL_RCC_PLLSOURCE_HSE, LL_RCC_PLLM_DIV_4, 99, LL_RCC_PLLP_DIV_2},
{LL_RCC_PLLSOURCE_HSE, LL_RCC_PLLM_DIV_4, 100, LL_RCC_PLLP_DIV_2},
{LL_RCC_PLLSOURCE_HSE, LL_RCC_PLLM_DIV_4, 101, LL_RCC_PLLP_DIV_2},
{LL_RCC_PLLSOURCE_HSE, LL_RCC_PLLM_DIV_4, 102, LL_RCC_PLLP_DIV_2},
{LL_RCC_PLLSOURCE_HSE, LL_RCC_PLLM_DIV_4, 103, LL_RCC_PLLP_DIV_2},
{LL_RCC_PLLSOURCE_HSE, LL_RCC_PLLM_DIV_4, 104, LL_RCC_PLLP_DIV_2},
{LL_RCC_PLLSOURCE_HSE, LL_RCC_PLLM_DIV_4, 105, LL_RCC_PLLP_DIV_2},
{LL_RCC_PLLSOURCE_HSE, LL_RCC_PLLM_DIV_4, 106, LL_RCC_PLLP_DIV_2},
{LL_RCC_PLLSOURCE_HSE, LL_RCC_PLLM_DIV_4, 107, LL_RCC_PLLP_DIV_2},
{LL_RCC_PLLSOURCE_HSE, LL_RCC_PLLM_DIV_4, 108, LL_RCC_PLLP_DIV_2},
{LL_RCC_PLLSOURCE_HSE, LL_RCC_PLLM_DIV_4, 109, LL_RCC_PLLP_DIV_2},
{LL_RCC_PLLSOURCE_HSE, LL_RCC_PLLM_DIV_4, 110, LL_RCC_PLLP_DIV_2},
{LL_RCC_PLLSOURCE_HSE, LL_RCC_PLLM_DIV_4, 111, LL_RCC_PLLP_DIV_2},
{LL_RCC_PLLSOURCE_HSE, LL_RCC_PLLM_DIV_4, 112, LL_RCC_PLLP_DIV_2},
{LL_RCC_PLLSOURCE_HSE, LL_RCC_PLLM_DIV_4, 113, LL_RCC_PLLP_DIV_2},
{LL_RCC_PLLSOURCE_HSE, LL_RCC_PLLM_DIV_4, 114, LL_RCC_PLLP_DIV_2},
{LL_RCC_PLLSOURCE_HSE, LL_RCC_PLLM_DIV_4, 115, LL_RCC_PLLP_DIV_2},
{LL_RCC_PLLSOURCE_HSE, LL_RCC_PLLM_DIV_4, 116, LL_RCC_PLLP_DIV_2},
{LL_RCC_PLLSOURCE_HSE, LL_RCC_PLLM_DIV_4, 117, LL_RCC_PLLP_DIV_2},
{LL_RCC_PLLSOURCE_HSE, LL_RCC_PLLM_DIV_4, 118, LL_RCC_PLLP_DIV_2},
{LL_RCC_PLLSOURCE_HSE, LL_RCC_PLLM_DIV_4, 119, LL_RCC_PLLP_DIV_2},
{LL_RCC_PLLSOURCE_HSE, LL_RCC_PLLM_DIV_4, 120, LL_RCC_PLLP_DIV_2},
{LL_RCC_PLLSOURCE_HSE, LL_RCC_PLLM_DIV_4, 121, LL_RCC_PLLP_DIV_2},
{LL_RCC_PLLSOURCE_HSE, LL_RCC_PLLM_DIV_4, 122, LL_RCC_PLLP_DIV_2},
{LL_RCC_PLLSOURCE_HSE, LL_RCC_PLLM_DIV_4, 123, LL_RCC_PLLP_DIV_2},
{LL_RCC_PLLSOURCE_HSE, LL_RCC_PLLM_DIV_4, 124, LL_RCC_PLLP_DIV_2},
{LL_RCC_PLLSOURCE_HSE, LL_RCC_PLLM_DIV_4, 125, LL_RCC_PLLP_DIV_2},
{LL_RCC_PLLSOURCE_HSE, LL_RCC_PLLM_DIV_4, 126, LL_RCC_PLLP_DIV_2},
{LL_RCC_PLLSOURCE_HSE, LL_RCC_PLLM_DIV_4, 127, LL_RCC_PLLP_DIV_2},
{LL_RCC_PLLSOURCE_HSE, LL_RCC_PLLM_DIV_4, 128, LL_RCC_PLLP_DIV_2},
{LL_RCC_PLLSOURCE_HSE, LL_RCC_PLLM_DIV_4, 129, LL_RCC_PLLP_DIV_2},
{LL_RCC_PLLSOURCE_HSE, LL_RCC_PLLM_DIV_4, 130, LL_RCC_PLLP_DIV_2},
{LL_RCC_PLLSOURCE_HSE, LL_RCC_PLLM_DIV_4, 131, LL_RCC_PLLP_DIV_2},
{LL_RCC_PLLSOURCE_HSE, LL_RCC_PLLM_DIV_4, 132, LL_RCC_PLLP_DIV_2},
{LL_RCC_PLLSOURCE_HSE, LL_RCC_PLLM_DIV_4, 133, LL_RCC_PLLP_DIV_2},
{LL_RCC_PLLSOURCE_HSE, LL_RCC_PLLM_DIV_4, 134, LL_RCC_PLLP_DIV_2},
{LL_RCC_PLLSOURCE_HSE, LL_RCC_PLLM_DIV_4, 135, LL_RCC_PLLP_DIV_2},
{LL_RCC_PLLSOURCE_HSE, LL_RCC_PLLM_DIV_4, 136, LL_RCC_PLLP_DIV_2},
{LL_RCC_PLLSOURCE_HSE, LL_RCC_PLLM_DIV_4, 137, LL_RCC_PLLP_DIV_2},
{LL_RCC_PLLSOURCE_HSE, LL_RCC_PLLM_DIV_4, 138, LL_RCC_PLLP_DIV_2},
{LL_RCC_PLLSOURCE_HSE, LL_RCC_PLLM_DIV_4, 139, LL_RCC_PLLP_DIV_2},
{LL_RCC_PLLSOURCE_HSE, LL_RCC_PLLM_DIV_4, 140, LL_RCC_PLLP_DIV_2},
{LL_RCC_PLLSOURCE_HSE, LL_RCC_PLLM_DIV_4, 141, LL_RCC_PLLP_DIV_2},
{LL_RCC_PLLSOURCE_HSE, LL_RCC_PLLM_DIV_4, 142, LL_RCC_PLLP_DIV_2},
{LL_RCC_PLLSOURCE_HSE, LL_RCC_PLLM_DIV_4, 143, LL_RCC_PLLP_DIV_2},
{LL_RCC_PLLSOURCE_HSE, LL_RCC_PLLM_DIV_4, 144, LL_RCC_PLLP_DIV_2}
};
const PLLParam_TypeDef ClockRateScale_High[] = { 
{LL_RCC_PLLSOURCE_HSE, LL_RCC_PLLM_DIV_4, 180, LL_RCC_PLLP_DIV_2},
{LL_RCC_PLLSOURCE_HSE, LL_RCC_PLLM_DIV_4, 181, LL_RCC_PLLP_DIV_2},
{LL_RCC_PLLSOURCE_HSE, LL_RCC_PLLM_DIV_4, 182, LL_RCC_PLLP_DIV_2},
{LL_RCC_PLLSOURCE_HSE, LL_RCC_PLLM_DIV_4, 183, LL_RCC_PLLP_DIV_2},
{LL_RCC_PLLSOURCE_HSE, LL_RCC_PLLM_DIV_4, 184, LL_RCC_PLLP_DIV_2},
{LL_RCC_PLLSOURCE_HSE, LL_RCC_PLLM_DIV_4, 185, LL_RCC_PLLP_DIV_2},
{LL_RCC_PLLSOURCE_HSE, LL_RCC_PLLM_DIV_4, 186, LL_RCC_PLLP_DIV_2},
{LL_RCC_PLLSOURCE_HSE, LL_RCC_PLLM_DIV_4, 187, LL_RCC_PLLP_DIV_2},
{LL_RCC_PLLSOURCE_HSE, LL_RCC_PLLM_DIV_4, 188, LL_RCC_PLLP_DIV_2},
{LL_RCC_PLLSOURCE_HSE, LL_RCC_PLLM_DIV_4, 189, LL_RCC_PLLP_DIV_2},
{LL_RCC_PLLSOURCE_HSE, LL_RCC_PLLM_DIV_4, 190, LL_RCC_PLLP_DIV_2},
{LL_RCC_PLLSOURCE_HSE, LL_RCC_PLLM_DIV_4, 191, LL_RCC_PLLP_DIV_2},
{LL_RCC_PLLSOURCE_HSE, LL_RCC_PLLM_DIV_4, 192, LL_RCC_PLLP_DIV_2},
{LL_RCC_PLLSOURCE_HSE, LL_RCC_PLLM_DIV_4, 193, LL_RCC_PLLP_DIV_2},
{LL_RCC_PLLSOURCE_HSE, LL_RCC_PLLM_DIV_4, 194, LL_RCC_PLLP_DIV_2},
{LL_RCC_PLLSOURCE_HSE, LL_RCC_PLLM_DIV_4, 195, LL_RCC_PLLP_DIV_2},
{LL_RCC_PLLSOURCE_HSE, LL_RCC_PLLM_DIV_4, 196, LL_RCC_PLLP_DIV_2},
{LL_RCC_PLLSOURCE_HSE, LL_RCC_PLLM_DIV_4, 197, LL_RCC_PLLP_DIV_2},
{LL_RCC_PLLSOURCE_HSE, LL_RCC_PLLM_DIV_4, 198, LL_RCC_PLLP_DIV_2},
{LL_RCC_PLLSOURCE_HSE, LL_RCC_PLLM_DIV_4, 199, LL_RCC_PLLP_DIV_2},
{LL_RCC_PLLSOURCE_HSE, LL_RCC_PLLM_DIV_4, 200, LL_RCC_PLLP_DIV_2},
{LL_RCC_PLLSOURCE_HSE, LL_RCC_PLLM_DIV_4, 201, LL_RCC_PLLP_DIV_2},
{LL_RCC_PLLSOURCE_HSE, LL_RCC_PLLM_DIV_4, 202, LL_RCC_PLLP_DIV_2},
{LL_RCC_PLLSOURCE_HSE, LL_RCC_PLLM_DIV_4, 203, LL_RCC_PLLP_DIV_2},
{LL_RCC_PLLSOURCE_HSE, LL_RCC_PLLM_DIV_4, 204, LL_RCC_PLLP_DIV_2},
{LL_RCC_PLLSOURCE_HSE, LL_RCC_PLLM_DIV_4, 205, LL_RCC_PLLP_DIV_2},
{LL_RCC_PLLSOURCE_HSE, LL_RCC_PLLM_DIV_4, 206, LL_RCC_PLLP_DIV_2},
{LL_RCC_PLLSOURCE_HSE, LL_RCC_PLLM_DIV_4, 207, LL_RCC_PLLP_DIV_2},
{LL_RCC_PLLSOURCE_HSE, LL_RCC_PLLM_DIV_4, 208, LL_RCC_PLLP_DIV_2},
{LL_RCC_PLLSOURCE_HSE, LL_RCC_PLLM_DIV_4, 209, LL_RCC_PLLP_DIV_2},
{LL_RCC_PLLSOURCE_HSE, LL_RCC_PLLM_DIV_4, 210, LL_RCC_PLLP_DIV_2},
{LL_RCC_PLLSOURCE_HSE, LL_RCC_PLLM_DIV_4, 211, LL_RCC_PLLP_DIV_2},
{LL_RCC_PLLSOURCE_HSE, LL_RCC_PLLM_DIV_4, 212, LL_RCC_PLLP_DIV_2},
{LL_RCC_PLLSOURCE_HSE, LL_RCC_PLLM_DIV_4, 213, LL_RCC_PLLP_DIV_2},
{LL_RCC_PLLSOURCE_HSE, LL_RCC_PLLM_DIV_4, 214, LL_RCC_PLLP_DIV_2},
{LL_RCC_PLLSOURCE_HSE, LL_RCC_PLLM_DIV_4, 215, LL_RCC_PLLP_DIV_2},
{LL_RCC_PLLSOURCE_HSE, LL_RCC_PLLM_DIV_4, 216, LL_RCC_PLLP_DIV_2}
};
const PLLParam_TypeDef ClockRateScale_Medium = {LL_RCC_PLLSOURCE_HSE, LL_RCC_PLLM_DIV_4, 168, LL_RCC_PLLP_DIV_2};