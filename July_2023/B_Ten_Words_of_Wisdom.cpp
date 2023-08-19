#include<iostream>
#include<map>
using namespace std;

int ans()
{
    int n;cin>>n;//Number of responses
    int ans = 0;
    map<int, int> pos;
    map<int, int> words;
    for(int i = 0; i < n; i++)
    {
        int a;cin>>a;
        int b; cin>>b;
        pos[i] = a;
        words[a] = b;
    }

    bool band = true;
    int i = 0;
    int mayor = 0;
    while(band)
    {
        if(words[pos[i]] > mayor)

        i++;
    }



    return ans;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t; cin>>t;
    while(t > 0)
    {
       cout<<ans()<<endl;
       t--;
    }
    
    return 0;
}