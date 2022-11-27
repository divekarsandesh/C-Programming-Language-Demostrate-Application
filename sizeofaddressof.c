#include<stdio.h>

int main()
{
	char ch='S';
	int i=1;
	float f=3.14;
	double d=9.5667;
	
	printf("values form the variable:\n");
	printf("%c\n",ch);
	printf("%d\n",i);
	printf("%f\n",f);
	printf("%lf\n",d);
	
	printf("sizes of each variable:\n");
	printf("size of character:%d\n",sizeof(ch));
	printf("size of int:%d\n",sizeof(i));
	printf("size of float:%d\n",sizeof(f));
	printf("size of double:%d\n",sizeof(d));
	
	printf("address of each varivbles:\n");
	printf("address of ch:%d\n",&ch);
	printf("address of i:%d\n",&i);
	printf("address of f:%d\n",&f);
	printf("address of d:%d\n",&d);
	
	return 0;		
}