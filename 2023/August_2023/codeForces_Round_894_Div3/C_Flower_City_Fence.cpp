#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

string solve()
{
    vector<int> v;
    int l;cin>>l;//length fence
    int i = 0;
    
    while(i++ < l)
    {
        int aux;cin>>aux;
        v.push_back(aux);
    }

    sort(v.begin(), v.end());

    if(v.back() == l)
    {
        return "YES";
    }
    return "NO";
}


int main()
{
    int t;cin>>t;
    while(t > 0)
    {
        cout<<solve()<<endl;
        t--;        
    }
    return 0;
}
//Intento #1
//Pasa el testcase del editorial
//pero falla en el segundo