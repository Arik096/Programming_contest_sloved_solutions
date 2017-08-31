#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,x,y,t;
    cin>>n;
    int a[n],s=0,c=0;
    for(int i=0;i<n;i++)
        cin>>a[i];

    cin>>x;
    while(s<x)
    {
    for(int i=0;i<n;i++)
    {
        s=s+a[i];
        //cout<<"1 "<<s<<endl;
        if(s>x)
            break;
        y=s;
        //cout<<"3 "<<s<<endl;
        c++;
        t=i;
        while(t!=0)
        {
            s=s+a[i]*t;
           if(s>x)
            break;
        y=s;
            //cout<<"2 "<<s<<endl;
        c++;
            t--;
        }
       
    }
    }
    cout<<c;
    
    return 0;
}