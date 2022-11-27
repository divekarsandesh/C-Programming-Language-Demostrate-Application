#include<stdio.h>

int Addition(int iNo1, int iNo2)
{
	int iAns = 0;
	iAns = iNo1 + iNo2;
	return iAns;
	
}

int main()
{
	int ivalue1 =0, ivalue2 = 0, iRet =0;
	
	printf("Enter first number\n");
	scanf("%d",&ivalue1);
	
	printf("Enter second number\n");
	scanf("%d",&ivalue2);
	
	
	iRet = Addition(ivalue1,ivalue2);
	
	printf("Addition is : %d\n",iRet);
	
	return 0;
}