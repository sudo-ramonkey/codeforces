#include<iostream>
using namespace std;

int ans()
{
    int n;cin>>n;//no se usa
    string s;
    int x = 0;
    while(cin >> s)
    {
        if(s == "++X" || s == "X++" )
        {
            x++;
        }else{
            x--;
        }
    }
    return x;
}

int main ()
{
    cout<<ans()<<"\n";
    return 0;
}