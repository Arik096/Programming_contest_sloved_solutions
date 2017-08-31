#include<bits/stdc++.h>
using namespace std;
void print(std::string::size_type n, std::string const &s)
{
    if (n == std::string::npos) {
        std::cout << "not found\n";
    } else {
        std::cout << "found: " << s.substr(n) << '\n';
    }
}
int main()
{
          string s;
        cin>>s;     
        string GP ("017");
        string BL ("019");
        string TT ("015");
        string RB ("018");
        string AL ("016");
        string CC ("011");

if (s.find(GP) != string::npos) {
        cout<<"GP"<<endl;

} 
        else if (s.find(BL) != string::npos) {
        cout<<"BL"<<endl;

} 
       else  if (s.find(TT) != string::npos) {
        cout<<"TT"<<endl;

} 
        else if (s.find(RB) != string::npos) {
        cout<<"RB"<<endl;

} 
        else if (s.find(AL) != string::npos) {
        cout<<"AL"<<endl;

} 
        else if (s.find(CC) != string::npos) {
        cout<<"CC"<<endl;

} 
        else
                cout<<"Sim Not Found"<<endl;
          return 0;
}
