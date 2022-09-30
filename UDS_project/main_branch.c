/*
 * main_branch.c
 *
 *  Created on: Sep 29, 2022
 *      Author: LENOVO
 */


#include<stdio.h>
struct message d1;
#include"main.h"
void RawDataToFrame(struct message d1, int *RawData)
{
    d1.length=*(RawData+0);
    d1.function_id=*(RawData+1);
    //printf("%x\n",d1.length);
    d1.sub_function_id=*(RawData+2);
    d1.actual_data=*(RawData+3);
    SID_function_call(d1);
}

void SID_function_call(struct message d1)
{
    switch(d1.function_id)
    {
        case 0x87 : SID_0x87(d1);
        break;
        case 0x34 : SID_0x34(d1);
        break;
        case 0x35 : SID_0x35(d1);
        break;
        case 0x37 : SID_0x37(d1);
        break;
        case 0x86 : SID_0x86(d1);
        break;
        default   : printf("Entered function id is invalid\n\n");
    }
}
