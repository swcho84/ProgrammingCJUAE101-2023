#include <stdio.h>

#define NUM_DNA_INFO 5

int main()
{
  // getting DNA information
  printf("Input DNA information(MaxCount:5)\n");

  // calculating DNA info. summation for detecting Suspect
  int nSumDNA = 0;
  for (int i = 0; i < NUM_DNA_INFO; i++)
  {
    int nTempDNA = 0;
    scanf("%d", &nTempDNA);
    nSumDNA += nTempDNA;
  }

  // detecting Suspect
  if (nSumDNA%5 == 3)
    printf("Result: Suspect\n");
  else
    printf("Result: Citizen\n");

  return 0;
}
