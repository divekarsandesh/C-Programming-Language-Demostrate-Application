#include<stdio.h>
int main()
{
  double no = 3.14;  //consider address of no as 100
  double *a = &no;   //consider address of a as 200
  double **b = &a;   //consider address of c as 300
  double ***c = &b;  //consider address of d as 400
  double ****d = &c;  //consider address of e as 500
  
  printf("%d\n",sizeof(no));
  printf("%d\n",sizeof(a));
  printf("%d\n",sizeof(b));
  printf("%d\n",sizeof(c));
  printf("%d\n",sizeof(d));
  printf("%d\n",sizeof(**d));
  printf("%d\n",sizeof(****d));
  printf("%d\n",sizeof(*a));
  printf("%d\n",sizeof(***c));
  printf("%d\n",sizeof(**c));
  
  return 0;
}