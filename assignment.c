#include <stdio.h>

struct date
{
   int days;
   int months;
   int years;
};

int main(){
    struct date dob;
    struct date current;
    printf("\nEnter the date of birth\n");
    scanf("%d%d%d",&dob.days, &dob.months, &dob.years);

    printf("\nEnter the current date\n");
    scanf("%d%d%d",&current.days, &current.months, &current.years);


    struct date dif;

    dif.days = current.days-dob.days;
    int correction = 0; 
    if(dif.days<0){
        dif.days+=30;
        current.months--;
        switch(dob.months){
        case 1: correction = 1; break;
        case 2: correction = -2; break;
        case 3: correction = 1; break;
        // case 4: correction = -1; 
        case 5: correction = 1; break;
        // case 6: correction = -1; 
        case 7: correction = 1; break;
        case 8: correction = 1; break;
        // case 9:
        case 10: correction = 1; break;
        // case 11:
        case 12: correction = 1; break;
    }
    }
    

    dif.days+=correction;

    

    dif.months = current.months-dob.months;
    if(dif.months < 0){
        dif.months+=12;
        current.years--;
    }
  

    dif.years = current.years-dob.years;
    if(dif.years < 0){
        printf("\nWrong format between the current and the date of birth");
        return 0;
    }
    printf("\nDate is: %d\n Month is: %d\n Year is: %d\n", dif.days, dif.months, dif.years);
}