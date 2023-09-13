#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

string ansFloja()//lowkey mejor
{
    string s;cin>>s;
    if(s == "yes" ||s == "YES" || s == "yES" || s == "yeS" || s == "YEs" || s == "Yes" || s == "YeS")  
    {
        return "YES";
    }
    return "NO";
}

string ansMenosFloja()//respuesta verbose
{
    string s;cin>>s;
    string auxS = "";

    for(int i = 0; i < s.size(); i++)
    {
        char aux = tolower(s[i]);
        auxS += aux;
    }

    if(auxS == "yes")
    {
        return "YES";
    }
    return "NO";
}

string ansMilIq()
{
    return "NO";
}


int main()
{
    int t;cin>>t;
    while(t-- > 0)
    {
        cout<<ansMenosFloja()<<"\n";
    }
}