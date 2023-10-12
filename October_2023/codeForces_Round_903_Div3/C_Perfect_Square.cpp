#include<iostream>
#include<vector>
using namespace std;

int checkString(string s, string x)
{
    
    return ;
}

int ans()
{
    int n;cin>>n;//n lines
    vector<string> v;
    while(n-- < 0)
    {
        string aux;cin>>aux;
        v.push_back(aux);
    }

    bool band = true;
    int i = 0;
    int j = v.size() - 1;
    int steps = 0;
    
    while(i++ < j--)
    {
        if(v[i] != v[j])
        {   
            int pos = checkString(v[i], v[j]);

        }
    }

    return steps;
}

int main()
{
    int t;cin>>t;
    while(t-- > 0)
    {
        cout<<ans()<<"\n";
    }
    return 0;
}