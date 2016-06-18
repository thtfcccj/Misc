/*****************************************************************************************

                                PIC16位定义总文件  
//使用PIC MPLIB(PICC的<chip_select.h>有示例)内部宏区分不同单片机                                                                
*****************************************************************************************/
#ifndef __PIC16_BIT_H
#define __PIC16_BIT_H

//这里增加 PIC MCU位支持
//--------------------------PIC193X系列---------------------------
#ifdef _16F1935
#include "Pic16f193xBit.h"
#endif

#ifdef _16F1936
#include "Pic16f193xBit.h"
#endif

#ifdef _16F1937
#include "Pic16f193xBit.h"
#endif

#ifdef _16F1938
#include "Pic16f193xBit.h"
#endif

//--------------------------PIC194X系列---------------------------
//与193x比,管脚更多了，LCD段码更多了,多了一个USART
#ifdef _16F1947
#include "Pic16f193xBit.h"
#endif


//--------------------------PIC18FxK80系列---------------------------
//MCU内部集成CAN总线，12位AD
#ifdef _18F25K80
#include "Pic18FxK80Bit.h"
#endif

#ifdef _18F26K80
#include "Pic18FxK80Bit.h"
#endif

#ifdef _18F46K80
#include "Pic18FxK80Bit.h"
#endif


#endif #define __PIC16_BIT_H
