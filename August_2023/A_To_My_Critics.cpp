#include<iostream>
using namespace std;
string ans()
{
    int a;cin>>a;
    int b;cin>>b;
    int c;cin>>c;

    if(a+b >= 10)
    {
        return "YES";
    }

    if(a+c >= 10)
    {
        return "YES";
    }

    if(b+c >= 10)
    {
        return "YES";
    }
    
    return "NO";
}

int main()
{
    int t;cin>>t;
    while(t > 0)
    {
        cout<<ans()<<endl;
        t--;
    }
    return 0;
}
//https://codeforces.com/contest/1850/problem/A
//Passed 