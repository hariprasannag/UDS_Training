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
    if(d1.sub_function_id==0)
    {
    	printf("Sub-function : Stop response on event\n");
    }
    else if(d1.sub_function_id==1)
    {
        printf("Sub-function : On DTC status change\n");
    	}
    else if(d1.sub_function_id==2)
    {
    	printf("Sub-function : On timer interrupt\n");
    }
    else if(d1.sub_function_id==3)
    {
    	printf("Sub-function : On change of data identifier\n");
    }
    else if(d1.sub_function_id==4)
    {
        printf("Sub-function : Report activated event\n");
    }
    else if(d1.sub_function_id==5)
    {
        printf("Sub-function : Start response on event\n");
    }
    else if(d1.sub_function_id==6)
    {
        printf("Clear response on event\n");
    }
    else if(d1.sub_function_id==7)
    {
    	printf("On comparison of values\n");
    }
    }
    else
    {
         printf("Negative response\n");
         printf("7F %d \n\n",d1.function_id);
    }
}
