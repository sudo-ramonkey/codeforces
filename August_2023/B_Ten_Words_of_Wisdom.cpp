#include<iostream>
#include<map>
using namespace std;

int ans()
{
    int n;cin>>n;
    map<int, int> wisdom;
    //map<int, int>::iterator it;
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

    int ans = distance(wisdom.begin(), wisdom.find(mayor)) + 1;
    return ans;
    /*
    it = wisdom.find(mayor);
    cout<<it -> first<<endl;*/
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
//No salio XD