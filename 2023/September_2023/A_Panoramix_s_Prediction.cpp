#include<iostream>
using namespace std;

int siguientePrimo(int n)
{
    if(n == 1 || n == 0)
    {
        return n;
    }
    return n * siguientePrimo(n-1);
}

string ans()
{
    int n;cin>>n;
    int m;cin>>m;
    int aux = 0;
    return "NO";
}

int main()
{
    ans();
    return 0;
}