#include<iostream>
using namespace std;

string ans()
{
    int n;cin>>n;
    int m;cin>>m;
    char arr[n][m];
    
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            char aux;cin>>aux;
            arr[i][j] += aux;
        }
    }

    if(arr[0][0] != 'v')
    {
        return "NO";
    }
    
    string ans = "";
    
    if(m % 2 == 0)
    {
        for(int i = 0; i < n;i++)
        {
            for(int j = i; j < i; j++)
            {
                ans[i] += arr[i][j];
            }
        }
    }else
    {
        for(int i = 0; i < n;i++)
        {
            for(int j = 0; j < i; j++)
            {
                ans[i] += arr[i][j];
            }
        }
    }

    cout<<ans<<endl;
    
    if(ans == "vika")
    {
        return "YES";
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
//Intento #1
//24/08/2023