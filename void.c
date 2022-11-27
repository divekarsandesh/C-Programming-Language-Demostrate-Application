#include<stdio.h>

int main()
{
	char ch = 'A';
	int i = 11;
	float f = 9.09;
	double d = 89.9078;
	
	char *cp = &ch;
    int *ip = &i;
    float *fp = &f;
    double *dp = &d;
	
	void *vp = &ch; 
	
	printf("value of ch :%c\n",ch);
	printf("address of ch :%p\n",&ch);
	printf("value inside cp :%p\n",cp);
	printf("Data refer by cp :%c\n",*cp);
	printf("size of ch :%d\n",sizeof(ch));
	printf("size of cp :%d\n",sizeof(cp));
	
	printf("Data refer by vp : %c\n",*(char *)vp);
	vp= &i;
	printf("Data refer bu vp :%d\n",*(int*)vp);
	
	return 0;
}