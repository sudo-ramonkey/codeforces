#include<iostream>
using namespace std;


string ans()
{
    int a;cin>>a;
    int b;cin>>b;
    int resul = a + b;
    string sa = to_string(a);
    string sb = to_string(b);
    string sres = to_string(resul);
    string resA = "";
    string resB = "";
    string resRes = "";

    //a
    for(int i = 0; i < sa.length(); i++)
    {
        if(sa[i] != '0')
        {
            resA += sa[i];
        }
    }
    //b
    for(int i = 0; i < sb.length();i++)
    {
        if(sb[i] != '0')
        {
            resB += sb[i];
        }
    }
    //resul
    for(int i = 0; i < sres.length();i++)
    {
        if(sres[i] != '0')
        {
            resRes += sres[i];
        }
    }

    int resAnum = stoi(resA);
    int resBnum = stoi(resB);
    int resResnum = stoi(resRes);

    if(resAnum + resBnum == resResnum)
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
