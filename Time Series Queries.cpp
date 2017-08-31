#include<bits/stdc++.h>
using namespace std;
class history{
  public:
    signed long long time;
    signed long long price;
    void get_time()
    {
        cin>>time;
    }
    void get_price()
    {
        cin>>price;
    }
    
};
int main() 
{
    signed long long n,q;
    cin>>n>>q;
    history t[n],p[n];
    for(signed long long i=0;i<n;i++)
        t[i].get_time();
    for(signed long long i=0;i<n;i++)
        p[i].get_price();
    for(signed long long i=0;i<q;i++)
    {
        signed long long v,ti,c=0;
        cin>>v>>ti;
        if(v==1)
        {
            for(signed long long i=0;i<n;i++)
            {
                if(ti<=p[i].price)
                {
                    cout<<t[i].time<<endl;
                    c++;
                    break;
                }
            }
            if(c==0)
                cout<<-1<<endl;
        }
        else if(v==2)
        {
            signed long long max=0,loc=0;
            for(signed long long i=0;i<n;i++)
            {
                if(ti<=p[i].price&&ti<=t[i].time&&ti>max)
                {
                    max=p[i].price;
                    loc=i;
                    c++;
                    break;
                }
            }
            if(c==0)
                cout<<-1<<endl;
            else
                cout<<p[loc].price<<endl;
        }
    }
    return 0;
}