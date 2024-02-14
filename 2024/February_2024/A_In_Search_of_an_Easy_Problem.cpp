/*
*:astroprieto
*:CodeForces Round: 
*:Div: 
*:Problem: 
*:Tags: 
*:Difficulty:
*/
#include<iostream>
#include<array>
#include<vector>
#include<algorithm>
#include<set>
#include<map>
#include<cmath>
#include<cstring>
#include<climits>
#include<queue>
#include<stack>
#include<deque>
#include<bitset>
#include<unordered_map>
#include<unordered_set>
using namespace std;

#define ll long long
#define ld long double
#define pb push_back
#define mkp make_pair
#define l(s) s.size()
#define all(v) v.begin(), v.end()
#define array_size(arr) sizeof(arr)/sizeof(arr[0])
#define rep(ini, fin) for(int i = ini;i < (fin);i++)
#define trav(a, x) for(auto& a: x)
#define PI acos(-1)
#define MOD 1000000007
#define inf 1e9
#define debug cout<<"swag"<<"\n";
#define fr true
#define cap false

const int MAX_N = 1e5 + 5;

void showArray(int arr[], int size)
{
    rep(0, size)
    {
        cout<<arr[i];
    }
    cout<<"\n";
}

void showVector(vector<int> v)
{
    trav(a, v)
    {
        cout<<a;
    }
    cout<<"\n";
}


string ans()
{
    int n;cin>>n;
    int bin[n];

    rep(0, n)
    {
        cin>>bin[i];
        if(bin[i] == 1)
        {
            return "HARD";
        }
    }
    return "EASY";
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cout<<ans()<<"\n";
    return 0;
} 

