/*
*:astroprieto
*:CodeForces Round: 614
*:Div: 2
*:Problem: A. ConneR and the A.R.C. Markland-N
*:Tags: Binary Search, Brute Force, Implementation
*:Difficulty: 1100
*/
#include<iostream>
#include<array>
//#include<vector>
//#include<algorithm>
//#include<sets>
//#include<map>
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
    int n;cin>>n;//N pisos
    int s;cin>>s;//Oficina pos
    int k;cin>>k;//n pisos cerrados
    int arr [n];
    int lsteps=-1;

    //pos abiertos
    for(int i = 0; i < n;i++)
    {
        arr[i] = 0;
    }

    int aux = 0;
    //pos cerrados
    while(cin>>aux)
    {
        arr[aux] = 1;
    }
    
    
    if(arr[s] == 0)
    {
        return steps;
    }
    else
    {
        for(int i=s;i<0;i--)
        {
            if(arr[i]==0)
            steps=i;
            break;
        }
        
    }
    



    return steps;
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