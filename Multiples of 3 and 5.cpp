#include <stdio.h>
int main()
{
    unsigned long int s=0,i,T;
   scanf("%ld",&T);
for(i=0;i<T;i++)
    {
    unsigned long int N,p;
    scanf("%ld\n",&N);
    s=0;
    p=(N-1)/3;
    s=((3*p*(p+1))/2);
    p=(N-1)/5;
    s=s+((5*p*(p+1))/2);
    p = (N-1)/15;
    s=s-((15*p*(p+1))/2);
    printf("%ld\n",s);
    }     
    return 0;
}