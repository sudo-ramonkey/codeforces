#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

#define ar array
#define ll long long
#define ld long double
#define all(v) v.begin(), v.end()

const int MAX_N = 1e5 + 5;

string ans2()
{
    string p;cin>>p;
    string h;cin>>h;
    int lengthP = p.size();
    int lengthH = h.size();
    
    if(lengthP > lengthH)
    {
        return "NO";
    }
    
    sort(all(p));
    string aux;
    for(int i = 0; i+p.length() <= h.length();i++)
    {
        aux = h.substr(i, p.size());
        sort(all(aux));
        if(aux == p)
        {
            return "YES";
        }
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
        cout<<ans2()<<"\n";
    }
    return 0;
}
