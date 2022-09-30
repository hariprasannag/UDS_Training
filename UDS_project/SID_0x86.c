/*
 * SID_0x86.c
 *
 *  Created on: Sep 30, 2022
 *      Author: LENOVO
 */

#include<stdio.h>
#include"main.h"
void SID_0x86(struct message d1)
{
    printf("\nRequest On Event\n");
    if(d1.length=3)
    {
    	printf("Positive response\n");
    	printf("Response sent to client : x01 xC6\n");
    if(d1.sub_function_id==0x00)
    {
    	printf("Sub-function : Stop response on event\n");
    }
    else if(d1.sub_function_id==0x01)
    {
        printf("Sub-function : On DTC status change\n");
    	}
    else if(d1.sub_function_id==0x02)
    {
    	printf("Sub-function : On timer interrupt\n");
    }
    else if(d1.sub_function_id==0x03)
    {
    	printf("Sub-function : On change of data identifier\n");
    }
    else if(d1.sub_function_id==0x04)
    {
        printf("Sub-function : Report activated event\n");
    }
    else if(d1.sub_function_id==0x05)
    {
        printf("Sub-function : Start response on event\n");
    }
    else if(d1.sub_function_id==0x06)
    {
        printf("Clear response on event\n");
    }
    else if(d1.sub_function_id==0x07)
    {
    	printf("On comparison of values\n");
    }
    }
    else
    {
         printf("Negative response\n");
         printf("7F %x \n\n",d1.function_id);
    }
}
