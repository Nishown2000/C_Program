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
        urban_based_calculation();
    }
    else if (strcasecmp(bill.area,"rural") == 0)
    {
        printf("Rural is Selected\n");
        rural_based_calculation();
    }
    else
    {
        printf("!!!!!!!! Provide Proper Information !!!!!!!!!\n");
        printf("Area (Choose Urban or Rural): ");
        scanf("%s", bill.area);
        calculate_which_formula();
    }
}

void rural_based_calculation() {
    printf("Entering Rural\n");
    int unit = bill.unitUsed;

    if (unit <= 30)
    {
        bill.totalamt = unit * RuralAmountPrice30;
    }
    else if (unit > 30 && unit <= 100)
    {
        bill.totalamt = (30 * RuralAmountPrice30) + ((unit - 30) * RuralAmountPrice100);
    }
    else if (unit > 100 && unit < 200)
    {
        bill.totalamt = (30 * RuralAmountPrice30) + (70 * RuralAmountPrice100) + ((unit - 100) * RuralAmountPrice200); 
    }
    else
    {
        bill.totalamt = (30 * RuralAmountPrice30) + (70 * RuralAmountPrice100) + (100 * RuralAmountPrice200) + ((unit - 200) * RuralAmountPriceAbove200);
    }
    printf("Exiting Rural\n");
    return 0;
}

void urban_based_calculation() {
    printf("Entering Urban\n");
    int unit = bill.unitUsed;

    if (unit <= 30)
    {
        bill.totalamt = unit * UrbanAmountPrice30;
    }
    else if (unit > 30 && unit <= 100)
    {
        bill.totalamt = (30 * UrbanAmountPrice30) + ((unit - 30) * UrbanAmountPrice100);
    }
    else if (unit > 100 && unit < 200)
    {
        bill.totalamt = (30 * UrbanAmountPrice30) + (70 * UrbanAmountPrice100) + ((unit - 100) * UrbanAmountPrice200); 
    }
    else
    {
        bill.totalamt = (30 * UrbanAmountPrice30) + (70 * UrbanAmountPrice100) + (100 * UrbanAmountPrice200) + ((unit - 200) * UrbanAmountPriceAbove200);
    }
    printf("Exiting Urban\n");
    return 0;
}

void displayamt(){
    printf("Total Amount of Bill is %d\n", bill.totalamt);
    printf("Fixed Amount :-----> %d\n", FixedAmount);
    printf("Total Amount with Fixed Amount is %d\n", bill.totalamt+FixedAmount);
}