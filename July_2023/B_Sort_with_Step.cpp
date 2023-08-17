#include<iostream>
#include<vector>
using namespace std;

int ans()
{
    int n; cin>>n;//Length de la permutacion
    int k; cin>>k;//Distancia entre elementos que pueden ser swappeados
    int array[n];

    for(int i = 0; i < sizeof(array) / sizeof(array[0]); i++)
    {
       cin>>array[i];
    }

    return -1;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int tMayor; cin>>tMayor;
    while(tMayor > 0)
    {
        cout<<ans()<<endl;
        tMayor--;
    }
    return 0;
}