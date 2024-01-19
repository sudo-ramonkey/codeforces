/*
*:astroprieto
*:CodeForces Round: 905
*:Div: 3
*:Problem: B. Chemestry
*:Tags: Strings
*:Difficulty: 900
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
#define rep(i, a, b) for(int i = a;i < (b);i++)
#define trav(a, x) for(auto& a: x)
#define PI acos(-1)
#define MOD 1000000007
#define inf 1e9
#define debug cout<<"swag"<<"\n";
#define fr true
#define cap false

const int MAX_N = 1e5 + 5;

void showArray(int arr[])
{
    rep(i, 0, array_size(arr))
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

bool esPalindromo(string s)
{
    if(l(s) % 2 == 0)
    {

    }else{

    }
}

string ans()
{
    
    return "YES";
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t;cin>>t;
    while(t-- > 0)
    {
        cout<<ans()<<"\n";
    }
    return 0;
} 