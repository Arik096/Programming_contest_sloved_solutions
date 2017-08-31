# include <stdio.h>
# include <math.h>
long long int ans;
void primeFactors(long long int n)
{	long long int i=0,j;
    while (n%2 == 0)
    {
        n = n/2;
    }
    if(n==1)
     {
        ans=2;
        return;
    }
    for (i = 3; i <= sqrt(n); i = i+2)
    {
        while (n%i == 0)
        {
            n = n/i;
        }
    }
 if(n>=2)
    ans=n;
 else
     ans=i-2;
}

int main()
{
    int i,t;
    long long int n;
    scanf("%d",&t);
    if(t>=1&&t<=10)
    for(i=0;i<t;i++)
    {
    scanf("%lld",&n);
    primeFactors(n);
    printf("%lld\n",ans);
    }

    return 0;
}