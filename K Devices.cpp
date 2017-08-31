#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    signed long long int n,k;
    scanf("%lli%lli",&n,&k);
    signed long long int a[n],b[n],i;
    long double min,s,mn,mm;
    for(i=0;i<n;i++)
    scanf("%lli",&a[i]);
    for(i=0;i<n;i++)
    scanf("%lli",&b[i]);
    for(i=0;i<n;i++)
    {
        s=sqrt(pow(a[i],2)+pow(b[i],2));
        if(i==0)
        min=s;
        if(s<min&&s!=0)
        min=s;
    }
    mn=ceil(min);
    mm=min+1;
    if(mm-mn>1)
    printf("%.0llf\n",min);
    else
    printf("%.0llf\n",mn);
    return 0;
}