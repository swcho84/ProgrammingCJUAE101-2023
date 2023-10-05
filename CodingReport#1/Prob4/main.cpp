#include <stdio.h>

#define HUNDCOIN 100
#define FIVEHUNDCOIN 500
#define THOUSANDBILL 1000

#define TARGETPRICE 5400

int main()
{
  // initializing variables
  int nInputCash = 0;
  int nResChange = 0;

  // setting input variable
  printf("Target Price:%d\n", TARGETPRICE);
  printf("Input your cash(inteager)(minChange:100won)(need to large amount than the target price:\n");
  scanf("%d", &nInputCash);

  // calculating change
  nResChange = nInputCash - TARGETPRICE;

  // printing result
  printf("Change:%d\n", nResChange);
  printf("1000won:%d\n", nResChange/THOUSANDBILL);
  nResChange = nResChange%THOUSANDBILL;
  printf("500won:%d\n", nResChange/FIVEHUNDCOIN);
  nResChange = nResChange%FIVEHUNDCOIN;
  printf("100won:%d\n", nResChange/HUNDCOIN);

  return 0;
}
