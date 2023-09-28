#include<iostream>
using namespace std;

string ans()
{
    string s;cin>>s;
    string ans = ""; 
    
    bool h = true;
    bool e = true;
    bool l1 = true;
    bool l2 = true;
    bool o = true;

    for(int i = 0;i < s.size();i++)
    {
        if(s[i] == 'h' && h)
        {
            h = false;
            ans+=s[i];
        }

        if(s[i] == 'e' && e && h == false)
        {
            e = false;
            ans+=s[i];
        }

        if(s[i] == 'l' && l1 == false && l2)
        {
            l2 = false;
            ans+=s[i];
        }

        if(s[i] == 'l' && l1 && e == false)
        {
            l1 = false;
            ans+=s[i];
        }

        if(s[i] == 'o' && o && l1 == false && l2 == false)
        {
            o = false;
            ans+=s[i];
        }
    }

    if(ans == "hello")
    {
        return "YES";
    }
    return "NO";
}

int main()
{
    cout<<ans()<<"\n";
    return 0;
}