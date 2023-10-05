#include <stdio.h>

#define JAN 1
#define FEB 2
#define MAR 3
#define APR 4
#define MAY 5
#define JUN 6
#define JUL 7
#define AUG 8
#define SEP 9
#define OCT 10
#define NOV 11
#define DEC 12

int main()
{
  // initializing variables
  int nCalender = 0;

  // setting variables via scanf
  printf("Input your Month Data: ");
  scanf("%d", &nCalender);

  // calculating result
  ((nCalender >= MAR) && (nCalender <= MAY)) ?  printf("Month:%d, Result:Spring\n", nCalender) : nCalender = nCalender;
  ((nCalender >= JUN) && (nCalender <= AUG)) ?  printf("Month:%d, Result:Summer\n", nCalender) : nCalender = nCalender;
  ((nCalender >= SEP) && (nCalender <= NOV)) ?  printf("Month:%d, Result:Autumn\n", nCalender) : nCalender = nCalender;
  ((nCalender >= JAN) && (nCalender <= FEB)) || (nCalender == DEC) ?  printf("Month:%d, Result:Winter\n", nCalender) : nCalender = nCalender;
  ((nCalender < JAN) || (nCalender > DEC)) ? printf("Error::checking your input..\n", nCalender) : nCalender = nCalender;
  return 0;
}
