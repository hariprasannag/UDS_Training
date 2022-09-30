/*
 * SID_0x34.c
 *
 *  Created on: Sep 30, 2022
 *      Author: LENOVO
 */

#include<stdio.h>
#include"main.h"
void SID_0x34(struct message d1)
{
    printf("\nRequest Download\n");
    if(d1.length <= 8)
    {
        printf("Positive response\n");
        printf("Response sent to client : x04 x74 x20 x00 x81\n");
    }
    else
    {
        printf("Negative response\n");
        printf("7F %x \n\n",d1.function_id);
    }
}
