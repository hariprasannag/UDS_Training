/*
 * SID_0x37.c
 *
 *  Created on: Sep 30, 2022
 *      Author: LENOVO
 */

#include<stdio.h>
#include"main.h"
void SID_0x37(struct message d1)
{
    printf("\nRequest Transfer Exit\n");
    if(d1.length<=8)
    {
        printf("Positive response\n");
        printf("Response sent to client : x01 x77\n");
    }
    else
    {
    	printf("Negative response\n");
        printf("7F %d \n\n",d1.function_id);
    }
}
