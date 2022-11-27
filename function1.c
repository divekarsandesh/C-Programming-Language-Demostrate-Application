#include<stdio.h>

int X=10;

void Demo()
{
	int B=30; //local variable(stack)
	
	printf("value of B from Demo:%d\n",B);
	printf("value of X from Demo:%d\n",X);
	
	//printf("%d",A); Not allowed
	
}

int main()
{
	int A = 20;
	
	printf("value of A from main:%d\n",A);
	printf("value of X from main:%d\n",X);
	
	//printf("%d",B); //Not allowed
	
	Demo(); //function call
	
	return 0;
}