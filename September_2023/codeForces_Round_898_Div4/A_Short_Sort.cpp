#include<iostream>
using namespace std;

string ans()
{
    string s;cin>>s;
    if(s == "abc" || s == "acb" || s == "bac" || s == "cba")
    {
        return "YES";   
    }

    return "NO";
}

int main()
{
    int t;cin>>t;
    while(t-- > 0)
    {
        cout<<ans()<<"\n";
    }
    return 0;
}