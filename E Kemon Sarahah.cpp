#include <bits/stdc++.h>
using namespace std;
void find_and_replace(string& source, string const& find, string const& replace)
{
    for(string::size_type i = 0; (i = source.find(find, i)) != string::npos;)
    {
        source.replace(i, find.length(), replace);
        i += replace.length();
    }
}
int main()
{
          int n;
          cin>>n;
          for(int i=0;i<n;i++)
    {
   cin.ignore();
    string text;
    getline(cin,text);
    find_and_replace(text, "cheater", "charming");
    find_and_replace(text, "kala para na", "khela pare");
    find_and_replace(text, "appy nyc lagca", "vaiya you are very handsome");
    find_and_replace(text, "programmer", "man with love and life");
    cout <<text<<endl;
    }

    return 0;
}
