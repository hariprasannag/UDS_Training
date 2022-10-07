/*
 * SID_0x35.c
 *
 *  Created on: Sep 30, 2022
 *      Author: LENOVO
 */

#include<stdio.h>
#include"main.h"
void SID_0x35(struct message d1)
{
    printf("\nRequest Upload\n");
    if(d1.length==5)
    {
        printf("Positive response\n");
        printf("Response sent to client : x02 x75 x01\n");
    }
    else
    {
        printf("Negative response\n");
        printf("7F %d \n\n",d1.function_id);
    }
}
