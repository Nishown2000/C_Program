#ifndef __FUNCTION_H__
#define __FUNCTION_H__

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define maxNameLength   20
#define maxAreaLength   10
#define maxEmailLength  20
#define maxPhoneLength  10

typedef struct billDetails_st {
    char* name[maxNameLength];
    char* area[maxAreaLength];
    char* email[maxEmailLength];
    int   meterNumber;
    int   unitUsed;
    int   phoneNumber[maxPhoneLength];
}billDetails_t;

billDetails_t bill;

void enter_information(); //Function for entering required information
void calculate_which_formula(); //Fuction for getting formula based on area
void urban_based_calculation(); //Function calculating on urban
void rural_based_calculation(); //Function calculating on rural

#endif