#include<iostream>
using namespace std;

string ans()
{
    int n;cin>>n;
    string a = "";
    string b = "";
    int contadorA = 0;
    int contadorB = 0;
    string  aux = "";
    
    for(int i = 0; i < n; i++)
    {
        cin>>aux;
        if(i == 0)
        {
            a = aux;
            contadorA++;
        }

        if(aux != a && i != 0)
        {
            b = aux;
            contadorB++;
        }else{
            contadorA++;
        }

    }

    if(contadorA > contadorB)
    {
        return a;
    }else{
        return b;
    }
}

int main()
{
    cout<<ans()<<"\n";
    return 0;
}