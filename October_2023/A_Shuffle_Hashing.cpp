#include<iostream>
#include<map>
#include<set>
using namespace std;

#define ar array
#define ll long long
#define ld long double
#define all(v) (v.begin(), v.end());


const int MAX_N = 1e5 + 5;

string construir_aux(set<char> st)
{
    string str = "";
    for(auto c : st)
    {
        str += c;
    }
    return str;
}

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
    
    string aux = construir_aux(st);
    int contador = 0;

    for(int i = 0; i < aux.size();i++)
    {
        if(mp[aux[i]] == mp2[aux[i]])
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
