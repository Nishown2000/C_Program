#ifndef __MAIN_H__
#define __MAIN_H__

#include <stdio.h>
#include <iostream.h>
#include "function.h"

#define maxNameLength   20
#define maxAreaLength   10
#define maxEmailLength  20

typedef struct billDetails_st {
    char* name[maxNameLength];
    char* area[maxAreaLength];
    char* email[maxEmailLength];
    int   meterNumber;
    int   unitConsumtion;
    int   phoneNumber;
}billDetails_t;

#endif