#include<iostream>
using namespace std;

int ans()
{
    //Input
    int a;cin>>a;//mass a
    int b;cin>>b;//mass b
    int c;cin>>c;//capacity c
    //Variables
    bool band = true;
    int contador = 0;
    int min = 0;
    int max = 0;
    //Determinar max
    if(a > b)
    {
        max = a;
        min = b;
    }else{
        max = b;
        min = a;
    }
    //Logica
    while(band)
    {
        if(max == min)
        {
            return contador;
        }

        if(max > min && c <= max && c <= min)
        {
            max -= c;
            min += c;
            contador++;
        }

        if(c >= max && c >= min)
        {
            int aux = max - min;
            aux /=2;
            max -= aux;
            min += aux;
            contador++;
        }

        if(min * 2 == max)
        {
            max -= (c/2 + (1));
            min += (c/2 + (1));
            contador++;
        }

        if((max - min) % 2 != 0)
        {
            max -= (c/2) + 0.5;
            min += (c/2) + 0.5;
            contador++;
        }
    }

    return -1;
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