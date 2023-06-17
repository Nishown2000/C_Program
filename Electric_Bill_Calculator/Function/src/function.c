#include "function.h"

void enter_information () {
    printf("***** Enter Information For Electric Bill ****\n");
    printf("Name : ");
    scanf("%s", bill.name);
    printf("Area (Choose Urban or Rural): ");
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

void calculate_which_formula() {
    if (strcasecmp(bill.area,"urban") == 0) {
        printf("Urban is Selected\n");
    }
    else if (strcasecmp(bill.area,"rural") == 0)
    {
        printf("Rural is Selected\n");
    }
}