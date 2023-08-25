#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int ans()
{
    vector<int> v;
    int n;cin>>n;//n problems
    int k;cin>>k;//max difference
    int aux = 0;
    int ans = 0;
    int contador = 0;

    while(cin>>aux)
    {
        v.push_back(aux);
    }

    sort(v.begin(), v.end());

    int i = 0;
    while(i++ < v.size())
    {
        if(v[i] - v[i+1] > k)
        {

        }
    }

    return ans;
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

//Intento #1
//23/08/2023