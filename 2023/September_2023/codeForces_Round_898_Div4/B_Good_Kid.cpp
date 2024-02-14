#include<iostream>
#include<vector>
using namespace std;

int ans()
{
    int n;cin>>n;
    vector<int> v;
    int biggest = 9;
    int aux = 0;
    for(int i = 0; i < n; i++)
    {
        cin>>aux;
        v.push_back(aux);
        if(aux <= biggest)
        {
            biggest = aux;
        }
    }
    
    int max = 1;
    bool justOne = true;
    while(v.size() > 0)
    {
        int vAux = v.back();
        if(vAux == biggest && justOne)
        {
            vAux++;
            v.pop_back();
            v.push_back(vAux);
            justOne = false;
        }
        max *= vAux;
        v.pop_back();
    }
    return max;
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