#include<iostream>
#include<map>
using namespace std;

map<int, int> mp;

bool containsKey(int key)
{
    return mp.count(key) > 0;
}

bool containsValue(int val)
{
    return mp.find(val) != mp.end();
}

int ans()
{
    int n;cin>>n;
    int casheers = 0;
    while(n-- > 0)
    {
        int h;cin>>h;
        int m;cin>>m;
        mp.insert(make_pair(h,m));
        if(containsKey(h) && containsValue(m))
        {
            cout<<"si entre"<<"\n";
            casheers++;
        }
    }

    return casheers;
}

int main()
{ 
    cout<<ans()<<"\n";
    return 0;
}