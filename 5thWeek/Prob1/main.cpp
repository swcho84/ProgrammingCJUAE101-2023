#include <stdio.h>

#define MINRANGE 2
#define MAXRANGE 9
#define COND_END 999

int main()
{
  // initializing variables
  int nNumber = 0;

  // printing program purpose
  printf("Multiplication table(2-9)\n");

  // making infinity loop
  while (true)
  {
    // assigning variable
    printf("input your number(999:end):");
    scanf("%d", &nNumber);

    // checking input condition
    if (nNumber == COND_END)
    {
      // making loop end
      printf("End Loop..Bye!\n");
      break;
    }

    // checking input condition
    if ((nNumber < MINRANGE) || (nNumber > MAXRANGE))
    {
      // not correct, going to the loop start line
      printf("Error::checking your input..\n");
      continue;
    }

    // calculating designated multiplication
    for (int i = MINRANGE - 1; i <= MAXRANGE; i++)
    {
      printf("%d x %d = %d\n", nNumber, i, (nNumber * i));
    }
    printf("\n");
  }3

  return 0;
}
