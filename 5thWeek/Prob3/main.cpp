#include <iostream>

#define MINPRIMENUM 2

int main()
{
  // initializing variables
  int nNum = 0;

  // main loop
  while (1)
  {
    // interaction: getting some information related to the problem
    printf("Need to enter data(for calculating the prime number from 2 to your data): ");
    scanf_s("%d", &nNum);
    printf("Your raw input: %d\n", nNum);

    // calculating the prime number from 2 to the input data
    int nDivSize = 0;
    int nCounter = 0;
    if (nNum < MINPRIMENUM)
    {
      // asserting the wrong input and re-interaction
      printf("Please check your input..try again..\n");
      continue;
    }
    else
    {
      // ranging from 1 to nNum
      for (int i = 1; i <= nNum; i++)
      {
        // calculating nDivSize
        for (int j = 1; j <= i; j++)
        {
          // calculating zero remainder
          if ((i % j) == 0)
            nDivSize++;

          // for debugging
          // printf("[i]:%d, [j]:%d, [i%%j]:%d, nDivSize:%d\n", i, j, i%j, nDivSize);
        }

        // definition of the prime number: only two remainders
        if (nDivSize == MINPRIMENUM)
        {
          // printing number
          printf("%d\t", i);
          nCounter++;
        }

        // breaking line, w.r.t the reference
        if (nCounter == 5)
        {
          printf("\n");
          nCounter = 0;
        }

        nDivSize = 0;
      }

      // success: ending program
      break;
    }
  }
  return 0;
}
