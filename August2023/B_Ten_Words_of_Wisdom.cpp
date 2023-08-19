#include<iostream>
#include<map>
using namespace std;

void ans()
{
    int n;cin>>n;
    map<int, int> wisdom;
    map<int, int>::iterator it;
    int mayor = 0;

    while(n > 0)
    {
        int a;cin>>a;
        int b;cin>>b;
        wisdom.insert(make_pair(b,a));
        if(b > mayor && a <= 10)
        {
            mayor = b;
        }
        n--;
    }

    it = wisdom.find(mayor);
    cout<<it -> first<<endl;
}

int main()
{
    int t;cin>>t;
    while(t > 0)
    {
        ans();
        t--;
    }
    return 0;
}