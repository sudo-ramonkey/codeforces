/*
*:astroprieto
*:CodeForces Round: 773
*:Div: 2
*:Problem: B. Power Walking
*:Tags: Greedy
*:Difficulty: 900
*/
#include<iostream>
//#include<array>
#include<vector>
//#include<algorithm>
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

int ans()
{
    int n;cin>>n;
    vector<int> v;//powerups
    int aux = 0;
    while(cin>>aux)
    {
        v.pb(aux);
    }

}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t;cin>>t;
    while(t-- > 0)
    {
        cout<<ans()<<endl;
    }
    return 0;
} 
