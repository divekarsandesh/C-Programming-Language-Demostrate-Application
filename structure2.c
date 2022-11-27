#include<stdio.h>

struct marvellous
{
	int *ip;
	float *fp;
};

int main()
{
	int no = 11;
	float f = 10.67;

    struct marvellous obj1;
    
    obj1.ip = &no;
    obj1.fp = &f;

    printf("Sizes of whole values :%d\n",no);
	printf("Sizes of whole values :%d\n",&f);
	
	return 0;
	
}