#include<iostream>
using namespace std;

int ans()
{
    int n;cin>>n;//length paper
    int k;cin>>k;//coinsecutive cells to make them white
    int kAux = 0;
    string s;cin>>s;
    int steps = 0;
    
    for(int i = 0;i < n;i++)
    {
        if(kAux < k && s[i] != 'W')
        {
            s[i] = 'W';
            kAux++;
            steps++;
        }

        if(kAux == k)
        {
            kAux = 0;
        }
    }



    return steps;
}

int main()
{
    int t;cin>>t;
    while(t-- > 0)
    {
        cout<<ans()<<"\n";
    }
    return 0;
}