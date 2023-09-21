#include <stdio.h>

#define COMPARE(nA, nB)	(nA > nB) ? nA : nB

int main(void)
{
	// initializing variables
	int nTest1 = 0, nTest2 = 0;
	int nRes = 0;

	// setting variables via scanf input method
	printf("Input your two numbers:\n");
	int nResScanf = scanf("%d%d", &nTest1, &nTest2);

	// printing result
	nRes = COMPARE(nTest1, nTest2);
	printf("Result:%d\n", nRes);

	return 0;
}