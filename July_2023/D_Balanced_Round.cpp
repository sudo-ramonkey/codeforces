#include<iostream>
#include<vector>
using namespace std;

int ans()
{
    int n;cin>>n;//numero de problemas
    int k;cin>>k;//diferencia entre los problemas
    vector<int> v(n);
    for(int i = 0; i < n;i++)
    {
        int aux;cin>>aux;
        v[i] = aux;
    }

    int i = 0;
    int j = 1;
    int ans = 0;
    while(j < v.size() && i < j)
    {
        if((v[j] - v[i]) > k)
        {
           ans++;
        }
        i++;
        j++;        
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
        cout<<ans()<<"\n";
        t--;
    }
    return 0;
}