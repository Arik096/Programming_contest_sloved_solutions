#include<stdio.h>
int main()
    {
    long long int t,n;
    scanf("%lld",&t);
    for(n=1;n<=t;n++)
        {
        long long int a,b=0,c=0,i;
        scanf("%lld",&a);
        for(i=1;i<=a;i++)
            {
            b=b+i;
        }
        b=b*b;
        for(i=1;i<=a;i++)
            {
            c=c+(i*i);
        }
        i=b-c;
        printf("%lld\n",i);
    }
    return 0;
}