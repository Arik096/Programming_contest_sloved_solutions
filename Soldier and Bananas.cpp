#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int w,n,k;
        cin>>k>>n>>w;
        int i,s=0;
        for(i=1;i<=w;i++)
        {
                s=s+(i*k);
        }
        if(s==n||s<n)
                cout<<0;
        else{
        
        int r=s-n;
        cout<<r<<endl;
}
    return 0;
}
