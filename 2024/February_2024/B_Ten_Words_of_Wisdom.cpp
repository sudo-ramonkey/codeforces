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
    rep(0, size-1)
    {
        cout<<arr[i];
    }
    cout<<"\n";
}

void showVector(vector<int> v)
{
    trav(a, v)
    {
        cout<<a<<' ';
    }
    cout<<"\n";
}


int ans()
{
    int n;cin>>n;//n responses
    int nAux = n;
    vector<int> qual(n, 0);
    int res = 0;

    while(n-- > 0)
    {
        int a;cin>>a;//n words
        int b;cin>>b;//quality word
        if(a < 11)
        {
            qual[res] = b;
        }else{
            qual[res] = -1;
        }
        res++;
    }

    int highestQuality = 1;
    int ans = 0;
    
     for(int i = 0; i < nAux;i++)
     {
        if(qual[i] > highestQuality)
        {
            highestQuality = qual[i];
            ans = i;
        }
     }

     return ans+1;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t;cin>>t;
    while(t-- > 0)
    {
        cout<<ans()<<'\n';
    }
    return 0;
} 
