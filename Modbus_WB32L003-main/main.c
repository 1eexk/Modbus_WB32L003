/* Includes ------------------------------------------------------------------*/
#include "wb32l003.h"
#include "bsp_lpuart1.h"
#include "mb.h"
#include "mbutils.h"
#include <stdio.h>
#include "user_mb_slave.h"


/* Private typedef -----------------------------------------------------------*/
/* Private define ------------------------------------------------------------*/
/* Private macro -------------------------------------------------------------*/
/* Private function prototypes -----------------------------------------------*/
/* Private functions ---------------------------------------------------------*/

int main(void)
{

    //初始化 Modbus Slave RTU模式
    eMBInit(MB_RTU, 0x01, 0x02, 9600, MB_PAR_NONE);
    eMBEnable();   
    for(;;)
    {
        (void)eMBPoll();
    }
}

/*********************************************END OF FILE**********************/
