/*
 * SID_0x87.c
 *
 *  Created on: Sep 30, 2022
 *      Author: LENOVO
 */
#include<stdio.h>
#include"main.h"
void SID_0x87(struct message d1)
{
	printf("Link Control\n");
    if(d1.length==2)
    {
    	printf("Positive response\n");
    	printf("Response sent to client : x02 C7 x00\n");
    	if(d1.sub_function_id==0x1)
    	{
    		printf("Sub-function : Verify Baudrate Transition With Fixed Baudrate\n\n");
    	}
    	else if(d1.sub_function_id==0x2)
    	{
    		printf("Sub-function : Verify Baudrate Transition With Specific Baudrate\n\n");
    	}
    	else if(d1.sub_function_id==0x3)
    	{
    	    printf("Sub-function : Transition Baudrate\n\n");
    	}
    }
    else
    {
        printf("Negative response\n");
        printf("7F %x \n\n",d1.function_id);
    }
}

