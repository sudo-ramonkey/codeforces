/*
*:astroprieto
*:CodeForces Round: Beta Round 95
*:Div: 2
*:Problem: A. cAPS lOCK
*:Tags: Implementation, Strings
*:Difficulty: 1000
*/
#include<iostream>
//#include<array>
//#include<vector>
#include<algorithm>
//#include<sets>
//#include<maps>
using namespace std;

#define ar array
#define ll long long
#define ld long double
#define pb push_back
#define mkp make_pair
#define l(s) s.size()
#define all(v) v.begin(), v.end()
#define debug cout<<"Swag"<<"\n";
#define fr true
#define cap false

const int MAX_N = 1e5 + 5;

string exceptFirst(string s)
{
    for(int i = 0; i < l(s);i++)
    {
        if(s[i] >= 'A' && s[i] <= 'Z')
        {
            s[i]+=32;
        }
    }
    s[0] -=32;
    return s;
}

string allCaps(string s)
{
    for(int i = 0; i < l(s);i++)
    {
        if(s[i] >= 'A' && s[i] <= 'Z')
        {
            s[i]+=32;
        }
    }
    return s;
}

string check(string s)
{
    bool bandAllCaps = cap;
    bool bandExceptFirst = cap;
    bool bandMoreLower = cap;

    for(int i = 0; i < l(s);i++)
    {
        if(s[i] >= 'A' && s[i] <= 'Z' && bandMoreLower == cap && bandExceptFirst == cap)
        {
            bandAllCaps = fr;
        }

        if(s[i] >= 'a' && s[i] <= 'z' && bandExceptFirst == cap)
        {
            bandExceptFirst = fr;
            bandAllCaps = cap;
        }

        if(s[i] >= 'a' && s[i] <= 'z' && bandExceptFirst && i != 0)
        {
            bandAllCaps = cap;
            bandMoreLower = fr;
            bandExceptFirst = cap;
        }
    }

    if(bandAllCaps)
    {
        return allCaps(s);
    }

    if(bandExceptFirst)
    {
        return exceptFirst(s);
    }

    if(bandMoreLower)
    {
        return s;
    }

    return ":(";
}

string ans()
{
    string s;cin>>s;
    return check(s);
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cout<<ans()<<"\n";
    return 0;
}