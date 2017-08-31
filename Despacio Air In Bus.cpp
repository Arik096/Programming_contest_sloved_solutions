#include <bits/stdc++.h>
using namespace std;
int main()
{
          int n;
          cin>>n;
          for(int i=1;i<=n;i++)
          {

                    float l,w,d;
                    scanf("%f%f%f",&l,&w,&d);
                    float r=(l*w)-(l*d);
                    printf("Case %d: %.2f\n",i,r/2);
          }
          return 0;
}
