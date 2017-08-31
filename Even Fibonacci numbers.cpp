#include<stdio.h>
int main()
    {
    long int n,t;
    scanf("%ld",&t);
    for(n=1;n<=t;n++)
        {
        long long int f,a=-1,b=1,c=0,s=0;
        scanf("%lld",&f);
        while(c<f)
            {
            c=a+b;
        if(c>f)
        break;
            a=b;
            b=c;
            if(c%2==0)
                {
                s=s+c;
            }
        }
        printf("%lld\n",s);
    }
    return 0;
}