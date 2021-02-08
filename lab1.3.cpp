#include<stdio.h>
int main()
{
  long long n,k=0,u=0 ;
  scanf("%lld",&n) ;
  k = n%3;
  u = n%11;
  printf("%lld %lld",k,u);
    return 0;
}
