#include <stdio.h>

#define BMI(input) (input >= 20.0) && (input < 25.0) ? printf("It is standard\n") : printf("You need a diet\n")

int main(void)
{
    double kg = 0.0;
    double cm = 0.0;
    double bmi = 0.0;

    printf("Enter your weight(kg) and heigt(cm) : ");
    scanf("%lf%lf", &kg, &cm);
    bmi = kg / (cm * cm);
    BMI(bmi);
    return 0;

}