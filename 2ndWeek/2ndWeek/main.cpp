#include <stdio.h>

#define DEP_POS 150
#define SIZE_STR 100

int main(void)
{
	char strProfId[SIZE_STR] = "01614";
	char strName[SIZE_STR] = "SungwookCho";
	int nID = DEP_POS;
	char chGrade = 'A';
	printf("Prof.ID:%s\n", strProfId);
	printf("Name:%s\n", strName);
	printf("ID:%d\n", nID);
	printf("Grade:%c\n", chGrade);
	return 0;
}