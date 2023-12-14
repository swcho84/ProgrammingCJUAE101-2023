#include <stdio.h>

// calculating summation, two numbers
int CalcSum(int nX, int nY)
{
  return nX + nY;
}

// calculating subtraction, two numbers
int CalcSub(int nX, int nY)
{
  return nX - nY;
}

// calculating multiplication, two numbers
int CalcMul(int nX, int nY)
{
  return nX * nY;
}

// calculating divide, two numbers
int CalcDiv(int nX, int nY)
{
  return nX / nY;
}

// calculating remain, two numbers
int CalcRem(int nX, int nY)
{
  return nX % nY;
}

// main loop
int main(void)
{
  // initializing variables
  int nNumA = 0;
  int nNumB = 0;
  int nRes = 0;
  char chArithOper;

  // generating the input information
  printf("Input the arithmetic operation using two integer numbers(e.g. a (+, -, *, /) b):\n");
  scanf("%d %c %d", &nNumA, &chArithOper, &nNumB);

  // using switch-case with the ASCII code for solving the given problem
  switch (chArithOper)
  {
    case '+':
    {
      // addition
      nRes = CalcSum(nNumA, nNumB);
      break;
    }
    case '-':
    {
      // subtraction
      nRes = CalcSub(nNumA, nNumB);
      break;
    }
    case '*':
    {
      // multiplication
      nRes = CalcMul(nNumA, nNumB);
      break;
    }
    case '/':
    {
      // division
      nRes = CalcDiv(nNumA, nNumB);
      break;
    }
    case '%':
    {
      // division
      nRes = CalcRem(nNumA, nNumB);
      break;
    }
    default:
    {
      // handling the exception status
      printf("please check the (+, -, *, /, %) option..\n");
      break;
    }
  }

  // for debugging
  printf("result: %d %c %d = %d\n", nNumA, chArithOper, nNumB, nRes);

  // end of program..
  printf("\nEnd of the program..\n");

  return 0;
}