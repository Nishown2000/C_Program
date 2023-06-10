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

#endif