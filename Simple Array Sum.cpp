#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
     long long int n,s=0;
        cin>>n;
         long long int a[n];
        for( long long int i=0;i<n;i++)
                cin>>a[i];
        for(long long int i=0;i<n;i++)
                s=s+a[i];
        cout<<s;
        
    return 0;
}