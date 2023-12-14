#include <stdio.h>

int main()
{
  char strTest1[100];
  char strTest2[100];
  char *pStrTest1 = strTest1;
  char *pStrTest2 = strTest2;

  printf("Input Your Sentence: ");
  gets(pStrTest1);
  printf("result#1:%s\n", pStrTest1);

  fflush(stdin);

  printf("Input Your second animal: ");
  scanf("%s", pStrTest2);
  printf("result#2:%s\n", pStrTest2);
  return 0;
}


