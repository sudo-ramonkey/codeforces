#include<iostream>
#include<vector>
using namespace std;
#define mod 1073741824;

void ans(int a, int b, int c)
{
    int n = 0; 
    n = a * b * c + 1;
    int ans = 0;
    vector<int> d (n, 0);
    
    for(int i = 1; i < d.size();i++)
    {
        for(int j = i; j < d.size(); j+=i)
        {
            d[j]++;
        }
    }


    for(int i = 1; i <= a; i++)
    {
        for(int j = 1; j <= b; j++)
        {
            for(int k = 1; k <= c; k++)
            {
                int prod = i * j * k;
                int div = d[prod];
                ans += div;
            }
        }
    }   
    cout<<ans<<endl;
}

void input()
{
    int a; cin>>a;
    int b; cin>>b;
    int c; cin>>c;
    ans(a,b,c);
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    input();
    return 0;
}