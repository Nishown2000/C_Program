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
    int   totalamt;
}billDetails_t;

billDetails_t bill;

#define UrbanAmountPrice30       3.25
#define UrbanAmountPrice100      4.70
#define UrbanAmountPrice200      6.25
#define UrbanAmountPriceAbove200 7.30
#define RuralAmountPrice30       3.15
#define RuralAmountPrice100      4.40
#define RuralAmountPrice200      5.95
#define RuralAmountPriceAbove200 6.80
#define FixedAmount              330

void enter_information(); //Function for entering required information
void calculate_which_formula(); //Fuction for getting formula based on area
void urban_based_calculation(); //Function calculating on urban
void rural_based_calculation(); //Function calculating on rural
void displayamt(); //Function displaying value of amount

#endif