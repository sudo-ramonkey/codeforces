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
#include <iterator>
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
        cout<<a;
    }
    cout<<"\n";
}


auto ans()
{
    int ans = 0;
    double a;cin>>a;
    double b;cin>>b; 
    double c;cin>>c;//Max capacity
    if(a == b)
    {
        return 0;
    }

    double mayor = 0;
    double menor = 0;
    
    if(a > b)
    {
        mayor = a;
        menor = b;
    }else{
        mayor = b;
        menor = a;
    }
    
    double diff = mayor - menor;
    


    if(mayor - c == menor || menor + c == mayor)
    {
        return 1;
    }

    return ans;
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
