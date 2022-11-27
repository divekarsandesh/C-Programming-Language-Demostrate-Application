#include<stdio.h>

int main()
{
	int Arr[4]= {11,21,51,101};
	int icnt = 0;  // loop counter
	
	printf("Elements of array are : \n");
	//   1       2      3
	for(icnt=0;icnt<=3;icnt++)
	{
	printf("%d\n",Arr[icnt]); //4
	}
	
	return 0;
}