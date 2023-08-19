#include<iostream>
using namespace std;

int ans()
{
    long a; cin>>a;
    long b; cin>>b;
    long n; cin>>n;
    int contador = 0;
    while(a <= n && b <= n)
    {
        if(a >= b)
        {
            b += a;
        }else
        {
            a += b;
        }
        contador++;
    }
    return contador;
}

int main()
{
    int t; cin>>t;//Test Cases
    while(t > 0)
    {
        cout<<ans()<<endl;
        t--;
    }
    return 0;
}

