 #include <stdio.h>
#include <math.h>

#define PERCENTAGE 85

int main()
{
    double classAttended,totalClasses,classToBePresent;
    float perc;
    printf("******************************************************\n");
    printf("Enter Classes Attended:");
    scanf("%lf",&classAttended);
    printf("Enter Total No. Of Classes:");
    scanf("%lf",&totalClasses);
    perc = (classAttended/totalClasses);
    printf("******************************************************\n");
    printf("Your current Attendance Percentage %f\n",(perc*100));
    printf("******************************************************\n");
    
    if(perc > (((float)PERCENTAGE/100)+1))
    {
        classToBePresent = ((classAttended*100) - (totalClasses*PERCENTAGE))/(PERCENTAGE);
        printf("You can bunk  %d class to remain at  %d percent attendance\n",(int)floor(classToBePresent),PERCENTAGE);
        printf("******************************************************\n");
    }

    else if(perc < (((float)PERCENTAGE/100)))
    {
        classToBePresent = ((totalClasses*PERCENTAGE) - (classAttended*100))/(100 - PERCENTAGE);
        printf("You Need To Attend %d more classes  to make %d percent attendance\n",(int)ceil(classToBePresent),PERCENTAGE);
        printf("******************************************************\n");
    }
    else
    {
        printf("Chill!!\n");
        printf("******************************************************\n");
    }
}
 