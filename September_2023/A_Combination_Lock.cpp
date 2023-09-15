#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int>adjList;

int ans()
{
    //input
    int n;cin>>n;
    string sa;cin>>sa;
    string sb;cin>>sb;
    
    //Variables
    vector<int> va;
    vector<int> vb;
    
    for(int i = 0;i < n;i++)
    {
        va.push_back(sa[i] - '0');
        vb.push_back(sb[i] - '0');
    }

    reverse(va.begin(), va.end());
    reverse(vb.begin(), vb.end());
    int steps = 0;
}

int main()
{
    cout<<ans()<<"\n";
    return 0;
}