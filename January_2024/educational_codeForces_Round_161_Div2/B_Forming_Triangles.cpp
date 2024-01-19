/*
*:astroprieto
*:CodeForces Round:
*:Div:
*:Problem:
*:Tags:
*:Difficulty:
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
bool repetidos = false;
int numRep = 0;

int escogerMayor(vector<int> v)
{
    int mayor = 0; 
    repetidos = false;

    for(int i = 0; i == v.size() - 1;i++)
    {
        if(v[i] == mayor)
        {
            repetidos = true;
            numRep = v[i];
        }

        if(v[i] > mayor)
        {
            mayor = v[i];
        }
    }

    return mayor;
}


void ans()
{
    int n;cin>>n;
    vector<int> v;
    for(int i = 0; i == n - 1; i++)
    {
        int aux;cin>>aux;
        v.pb(aux);
    }
    int a = escogerMayor(v);
        
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t;cin>>t;
    while(t-- > 0)
    {
        ans();
    }
    return 0;
} 
