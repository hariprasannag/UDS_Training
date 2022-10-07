/*
 * main_branch.c
 *
 *  Created on: Sep 29, 2022
 *      Author: LENOVO
 */


#include<stdio.h>
struct message d1;
#include"main.h"
void RawDataToFrame(struct message d1, char Raw_Data[15])
{
    d1.length=(Raw_Data[1]-48)*10+(Raw_Data[2]-48);
    d1.function_id=(Raw_Data[4]-48)*10+(Raw_Data[5]-48);
    d1.sub_function_id=(Raw_Data[7]-48)*10+(Raw_Data[8]-48);
    d1.actual_data=(Raw_Data[13]-48)+(Raw_Data[12]-48)*10+(Raw_Data[11]-48)*100+(Raw_Data[10]-48)*1000;
    //printf("%d\n",d1.actual_data);
    SID_function_call(d1);
}

void SID_function_call(struct message d1)
{
    switch(d1.function_id)
    {
        case 87 : SID_0x87(d1);
        break;
        case 34 : SID_0x34(d1);
        break;
        case 35 : SID_0x35(d1);
        break;
        case 37 : SID_0x37(d1);
        break;
        case 86 : SID_0x86(d1);
        break;
        default   : printf("Entered function id is invalid\n\n");
    }
}
