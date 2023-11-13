/*
*:astroprieto
*:CodeForces Round: 614
*:Div: 2
*:Problem: A. ConneR and the A.R.C. Markland-N
*:Tags: Binary Search, Brute Force, Implementation
*:Difficulty: 1100
*/
#include<iostream>
//#include<array>
#include<vector>
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

/*int ans()
{
    int n;cin>>n;//N pisos
    int s;cin>>s;//Oficina pos
    int k;cin>>k;//n pisos cerrados
    int arr [n];

    //pos abiertos
    for(int i = 0; i < n;i++)
    {
        arr[i] = 0;
    }

    for(int i = 0; i < k;i ++)//pos cerrados
    {
        int aux;cin>>aux;
        arr[aux - 1] = 1;
    }

    if(arr[s - 1] == 0)
    {
        return 0;
    }

    if(arr[s] == 0 || arr[s - 2] == 0)
    {
        return 1;
    }
    
    int l = 0;
    int r = n - 1;
    int steps = 0;
    int mid = s - 1;

    while(l <= r)
    {
        if(arr[mid] == 0 && (mid == 1 || arr[mid - 1] == 1))
        {
            //cout<<arr[mid]<<" "<<mid<<"\n";
            
            break;
        }else if (arr[mid] == 1)
        {
            l = mid + 1;
        }else{
            r = mid - 1;
        }
        mid = (l + r) / 2;
    }

    int dif = max(s-1, mid) - min(s-1, mid);
    return dif;
}*/

int ans()
{
    ll n;cin>>n;
    ll s;cin>>s;
    ll k;cin>>k;
    vector<ll> arr (n, 0);

    //pos abiertos
    /*for(ll i = 0; i < n;i++)
    {
        arr[i] = 0;
    }*/

    for(ll i = 0; i < k;i ++)//pos cerrados
    {
        ll aux;cin>>aux;
        arr[aux - 1] = 1;
    }

    
    
    ll min = MAX_N;
    ll si = s - 1;

    if(arr[si] == 0)
    {
        return 0;
    }

    for(ll i = 0; i < si; i++)
    {
        if(arr[i] == 0 && i < si)
        {
            if(si - i < min)
            {
                min = si - i;
            }
        }else if(arr[i] == 0 && i > si)
        {
            if(i - si < min)
            {
                min = i - si;
            }
        }else if(arr[i] == 0 && i == si)
        {
            min = i;
        }
    }

    for(ll i = si; i < n; i++)
    {
        if(arr[i] == 0 && i < si)
        {
            if(si - i < min)
            {
                min = si - i;
            }
        }else if(arr[i] == 0 && i > si)
        {
            if(i - si < min)
            {
                min = i - si;
            }
        }else if(arr[i] == 0 && i == si)
        {
            min = i;
        }
    }

    return min;
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