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
  switch(nCalender)
  {
    case MAR:
    case APR:
    case MAY:
    {
      printf("Month:%d, Result:Spring\n", nCalender);
      break;
    }
    case JUN:
    case JUL:
    case AUG:
    {
      printf("Month:%d, Result:Summer\n", nCalender);
      break;
    }
    case SEP:
    case OCT:
    case NOV:
    {
      printf("Month:%d, Result:Autumn\n");
      break;
    }
    case DEC:
    case JAN:
    case FEB:
    {
      printf("Month:%d, Result:Winter\n", nCalender);
      break;
    }
    default:
    {
      printf("Error::checking your input..\n", nCalender);
      break;
    }
  }
  return 0;
}
