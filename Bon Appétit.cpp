#include<stdio.h>
int main()
        {
        int n,t,s=0;
        scanf("%d%d",&n,&t);
        int a[n];
        int i;
        for(i=0;i<n;i++)
                {
                scanf("%d",&a[i]);
                s=s+a[i];
        }
        s=s-a[t];
        s=s/2;
        int m;
        scanf("%d",&m);
        if(m>s)
                printf("%d",m-s);
        else
                printf("Bon Appetit");
        return 0;
}