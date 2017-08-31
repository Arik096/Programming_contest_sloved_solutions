#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
        cin>>n;
        if(n==0||n==1)
                cout<<"Don't You Dare!!!"<<endl;
        else if(n>=2&&n<=4)
                cout<<"Sit Down and Play!!!"<<endl;
        else if(n>=5&&n<=7)
                cout<<"Be Careful!!!"<<endl;
        else if(n>=8&&n<=10)
                cout<<"Rock The Show!!!"<<endl;
        else
                cout<<"Doctor Are You Nuts!!!"<<endl;
    return 0;
}