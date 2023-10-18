#include<iostream>
#include<map>
using namespace std;

#define ar array
#define ll long long
#define ld long double
#define all(v) (v.begin(), v.end());


const int MAX_N = 1e5 + 5;

string ans()
{
    map<char, int> mp;
    map<char, int> mp2;
    set<char> st;
    string p;cin>>p;
    string h;cin>>h;

    for(int i = 0; i < p.size(); i++)
    {
        char aux = p[i];
        st.insert(aux);
        mp[aux]++;
    }

    for(int i = 0; i < h.size(); i++)
    {
        char aux = h[i];
        mp2[aux]++;
    }

    int contador = 0;
    for(int i = 0; i < p.size();i++)
    {
        if(mp[st.back()] == mp2[st.back()])
        {
            contador++;
        }
    }

    if(contador == st.size()) 
    {
        return "YES";
    }

    return "NO";
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
