#include<stdio.h>

struct PPA
{
	int Arr[3];
	float Brr[4];
};


int main()
{
   struct PPA obj;
   
   obj.Arr[0] = 11;
   obj.Arr[1] = 21;
   obj.Arr[2] = 31;
   obj.Brr[0] = 10.3;
   obj.Brr[1] = 11.5;
   obj.Brr[2] = 31.4;
   obj.Brr[3] = 51.5;

   printf("size of values : %d\n",obj.Arr[2]);
   printf("size of values : %f\n",obj.Brr[3]);
   
	return 0;
}