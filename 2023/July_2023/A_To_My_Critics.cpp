#include<iostream>
#include<vector>
using namespace std;

string ans()
{   
    vector<int> v (3,0);
    for(int i = 0; i < v.size();i++)
    {
        int a; cin>>a;
        v[i] = a;
    }

    /*
    int l = 0;
    int r = v.size() - 1;
    while(l < r)
    {
        if((v[l] + v[r]) >= 10)
        {
            return "YES";
            break;
        }
        l++;
    }*/

    for(int i = 1; i < v.size();i++)
    {
        if((v[0] + v[i]) >= 10)
        {
            return "YES";
        }
    }
    return "NO";
}


int main()
{   
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;cin>>t;
    while(t > 0)
    {
        cout<<ans()<<endl;
        t--;
    }
    return 0;
}