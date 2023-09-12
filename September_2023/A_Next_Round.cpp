#include<iostream>
#include<vector>
using namespace std;

int ans()
{
    //Input
    int n;cin>>n;//n participants
    //no se usa
    int k;cin>>k;//pos a superar

    //Variables
    int aux = 0;
    int valor = 0;
    int contador = 0;
    int pasos = 0;
    vector<int> v;

    while(cin >> aux)
    {
        pasos++;
        if(pasos == k)
        {
            valor = aux;
        }
        v.push_back(aux);
    }

    while(v.size() > 0)
    {
        if(v.back() >= valor && v.back() != 0)
        {
            contador++;
        }
        v.pop_back();
    }
    return contador;
}

int main()
{
    cout<<ans()<<"\n";
    return 0;
}