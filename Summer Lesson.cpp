#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    long long int a,b;
    cin>>a>>b;
    long long int arr[a],ar[b];
        for(long long int i=0;i<b;i++)
        ar[i]=0;
    for(long long int i=0;i<a;i++)
    {
        cin>>arr[i];
        ar[arr[i]]++;
    }
    for(long long int i=0;i<b;i++)
        cout<<ar[i]<<" ";
    

    return 0;
}