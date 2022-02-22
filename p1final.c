#include <stdio.h>

void input(int *pa,int *pb)
{
  printf("enter two numbers");
  scanf("%d%d",pa,pb);
}
void output(int a,int b,int c)
{
  printf("the sum of %d + %d is %d",a,b,c);
}
int add(int a, int b)
{
  int sum = a + b;
  return sum;
}
int main()
{
  int a,b,c;
  input(&a,&b);
  c = add(a,b);
  output(a,b,c);
  return 0;
}