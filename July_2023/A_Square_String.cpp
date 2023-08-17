#include<iostream>
#include<algorithm>
using namespace std;

string ans()
{
    string a ; cin>>a;
    if(a.length() % 2 != 0)
    {
        return "NO";
    }

    int i = 0;
    int j = a.length() / 2;
    while(i < (a.length() / 2))
    {
        if(a[i] != a[j])
        {
            return "NO";
        }
        i++;
        j++;
    }
    return "YES";
}

int main()
{
    int t; cin>>t;
    while(t-- > 0)
    {
        cout<<ans()<<endl;
    }
    return 0;
}