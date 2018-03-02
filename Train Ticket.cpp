#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    int lb[]={1,4,9,12,17,20,25,28,33,36,41,44,49,52,57,60,65,68};
    int mb[]={2,5,10,13,18,21,26,29,34,37,42,45,50,53,58,61,66,69};
    int ub[]={3,6,11,14,19,22,27,30,35,38,43,46,51,54,59,62,67,70};
    int slb[]={7,15,23,31,39,47,55,63,71};
    int sub[]={8,16,24,32,40,48,56,64,72};
    cin>>n;
    for(int i=0;i<=18;i++)
    {
        if(n==lb[i])
        {
            cout<<"LB"<<endl;
            break;
        }
        else if(n==mb[i])
        {
            cout<<"MB"<<endl;
            break;
        }
        else if(n==ub[i])
        {
            cout<<"UB"<<endl;
            break;
        }
        else if(n==slb[i])
        {
            cout<<"SLB"<<endl;
            break;
        }
        else if(n==sub[i])
        {
            cout<<"SUB"<<endl;
            break;
        }
    }
    return 0;
}
