/*
*:astroprieto & Gadielo03
*:CodeForces Round: Beta Round 4
*:Div: 2
*:Problem: C. Registration System
*:Tags: Data Structures, Hashing, Implementation
*:Difficulty: 1300
*/
#include<iostream>
//#include<array>
#include<vector>
//#include<algorithm>
//#include<sets>
#include<map>
#include<string>
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


void ans()
{
    int n;cin>>n;
    map<string, int> mp;
    map<string, int>::iterator it;
    string aux = "";
    while(cin>>aux)
    {
       it = mp.find(aux);
       if(it == mp.end())
       {
            mp.insert({aux, 0});
            cout<<"OK"<<"\n";
       }else{
            mp[aux]++;
            string cons = aux + (to_string(mp[aux])); 
            cout<<cons<<"\n";
       }
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    ans();
    return 0;
}