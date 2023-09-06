#include<iostream>
using namespace std;

int main()
{
    int j;cin>>j;//juegos no se usa con este metodo
    int n;cin>>n;//estatura
    int contador = 0;
    int b;//estaturas minimas
    while(cin >> b)
    {
        if(n >= b)
        {
            contador++;
        }
    }

    cout<<contador<<"\n";
    return 0;
}