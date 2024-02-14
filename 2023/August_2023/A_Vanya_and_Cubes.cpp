#include<iostream>
using namespace std;

int solve(int n)
{
    //Declaracion Variables
    bool band = true;
    int i = 1;
    int contador = 1;
    int aux = 1;
    int sum = i;
    //Logica
    
    while(band)
    {
        i += (aux);
        aux++;
        sum += i;
        //cout<<sum<<endl;
        if(sum >= n)
        {
            
            return contador;
        }

        if((sum+i)>= n)
        {
            return contador+1;
        }

        contador++; 
    }

    return contador;
}


int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;cin>>n;
    cout<<solve(n)<<"\n";
    return 0;
    //not done
}