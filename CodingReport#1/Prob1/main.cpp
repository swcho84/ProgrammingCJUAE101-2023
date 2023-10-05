#include <stdio.h>

#define MAXDEG 360

int main()
{
  // initializing variables
  int nInitAng = 0;
  int nResAng = 0;

  // setting euler angle
  printf("Input your angle[deg](0~360, inteager type):\n");
  scanf("%d", &nInitAng);

  // calculating -180[deg]~+180[deg]
  nResAng = (nInitAng)%(MAXDEG);

  // calculating result
  (nResAng < -MAXDEG/2) ? nResAng += MAXDEG : nResAng = nResAng;
  (nResAng > MAXDEG/2) ? nResAng -= MAXDEG : nResAng = nResAng;

  // printing result
  printf("Input[deg]:%d, Result[deg]:%d\n", nInitAng, nResAng);

  return 0;
}
