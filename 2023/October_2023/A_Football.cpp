#include<iostream>
using namespace std;

#define ar array
#define ll long long
#define ld long double
#define all(v) (v.begin(), v.end());

const int MAX_N = 1e5 + 5;

string ans()
{
    string s;cin>>s;
    int cont1 = 0;
    int cont0 = 0;
    //bool cons1 = false;
    //bool cons0 = false;

    for(int i = 0; i < s.size();i++)
    {
        if(s[i] == '1')
        {
            cont1++;
            //cons1 = true;
            //cons0 = false;
            cont0 = 0;
            if(cont1 > 6 /*&& cons1*/)
            {
                return "YES";
            }
        }

        if(s[i] == '0')
        {
            cont0++;
            //cons0 = true;
            //cons1 = false;
            cont1 = 0;
            if(cont0 > 6 /*&& cons0*/)
            {
                return "YES";
            }
        }

        
    }

    return "NO";
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cout<<ans()<<endl; 
    return 0;
}