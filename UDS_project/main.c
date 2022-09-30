/*
 * main.c
 *
 *  Created on: Sep 29, 2022
 *      Author: LENOVO
 */
#include<stdio.h>
#include"main.h"
#include"main_branch.h"
int main()
{
    struct message d1;
    int Raw_Data[4];
    int i;
    while(1)
    {
    	printf("---------------------------------------------------------\n");
    	fflush(stdout);
        printf("Please enter the valid format as given below\n");
        fflush(stdout);
        printf("Data_Length  Function_ID  Sub_Function  Actual_Data\n\n");
        fflush(stdout);
        for(i=0;i<4;i++)
        scanf("%x",&Raw_Data[i]);
        RawDataToFrame(d1, &Raw_Data);
    }
    return 0;
}
