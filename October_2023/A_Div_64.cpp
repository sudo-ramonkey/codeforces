#include<iostream>
#include<string>
using namespace std;

#define ar array
#define ll long long
#define ld long double
#define all(v) (v.begin(), v.end());

const int MAX_N = 1e5 + 5;

int cont1 = 0;
int cont0 = 0;
    

bool revisarString(string s)
{
    bool first1 = false;
    bool conse = false;
    int cont0jr = 0;
    for(int i = 0; i < s.size();i++)
    {
        if(s[i] == '1' && first1 == false)
        {
            first1 = true;
        }

        if(s[i] == '0' && first1 == true)
        {
            conse = true;
            cont0jr++;
        }
    }

    if(first1 && conse && cont0jr >= 6)
    {
        return true;
    }
    return false;
}


bool contarDigitos(string s)
{
    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] == '1')
        {
            cont1++;
        }
        
        if(s[i] == '0')
        {
            cont0++;
        }
    }
    if(cont1 > 0 && cont0 > 5)
    {
        return true;
    }
    return false;
}


string ans()
{
    string s;cin>>s;
    if(contarDigitos(s) && revisarString(s))
    {
        return "yes";
    }

    return "no"; 
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cout<<ans()<<endl; 
    return 0;
}