#include<iostream>
#include<vector>
using namespace std;

#define ar array
#define ll long long
#define ld long double
#define all(v) (v.begin(), v.end());

const int MAX_N = 1e5 + 5;

bool evaluar(vector<char> v)
{
    while(v.size() > 0)
    {
        if(v.back() == 'H' || v.back() == 'Q' || v.back() == '9')
        {
            return true;
        }else{
            v.pop_back();
        }
    }
    return false;
}


void ans()
{
    string s;cin>>s;
    vector<char> v;

    for(int i = 0; i < s.size();i++)
    {
        v.push_back(s[i]);   
    }
    
    if(evaluar(v))
    {
        cout<<"YES"<<"\n";
    }else{
        cout<<"NO";
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    ans();
    //int t;cin>>t;
    /*while(t-- > 0)
    {
        ans();
    }*/
    return 0;
}