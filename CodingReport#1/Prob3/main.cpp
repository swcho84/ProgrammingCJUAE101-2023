#include <stdio.h>

#define LEAPCOND1 4
#define LEAPCOND2 100
#define LEAPCOND3 400

int main()
{
  // initializing variables
  int nInputYear = 0;

  // setting input variable
  printf("Input your designated year(inteager): ");
  scanf("%d", &nInputYear);

  // calculating leap year condition
  (((nInputYear%LEAPCOND1) == 0) &&
   ((nInputYear%LEAPCOND2) != 0) ||
   ((nInputYear%LEAPCOND3) == 0)) ?
    printf("Your Input:%d, Result: LeapYear\n", nInputYear) :
    printf("Your Input:%d, Result: Not LeapYear\n", nInputYear);

  return 0;
}
