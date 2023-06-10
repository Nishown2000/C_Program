#include "function.h"

void enter_information () {
    printf("***** Enter Information For Electric Bill ****\n");
    printf("Name : ");
    scanf("%s", bill.name);
    printf("Area : ");
    scanf("%s", bill.area);
    printf("Email : ");
    scanf("%s", bill.email);
    printf("Phone Number : ");
    scanf("%d", bill.phoneNumber);
    printf("Meter Number : ");
    scanf("%d", &bill.meterNumber);
    printf("Total Unit Consumption : ");
    scanf("%d", &bill.unitUsed);
}