#include<stdio.h>
int input_n()
{
  int n;
  printf("enter any value :\n");
  scanf("%d",&n);
  return n;
}
int sum_n(int n)
{
  int x;
  x=(n*(n+1)/2);
  return x;
}
void output(int x,int n)
{
  int i;
  for(i=1;i<n;i++);
  {
    printf("%d+",i);
  }
  printf("%d=%d",x,n);
}
int main()
{
  int n,sum;
  n=input_n();
  sum=sum_n( n);
  output(n,sum);
  return 0;
}