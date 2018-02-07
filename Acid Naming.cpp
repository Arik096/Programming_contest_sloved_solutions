#include <bits/stdc++.h>
using namespace std;


int main() {
    int n;
    cin>>n;
    while(n>0)
    {
        string s;
        cin>>s;
        int t=s.size();
        if(s[0]=='h'&&s[1]=='y'&&s[2]=='d'&&s[3]=='r'&&s[4]=='o'&&s[t-1]=='c'&&s[t-2]=='i')
            cout<<"non-metal acid"<<endl;
        else if(s[t-1]=='c'&&s[t-2]=='i')
            cout<<"polyatomic acid"<<endl;
        else 
            cout<<"not an acid"<<endl;
        n--;
    }
    return 0;
}