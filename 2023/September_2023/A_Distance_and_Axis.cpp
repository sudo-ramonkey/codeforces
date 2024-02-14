#include<iostream>
using namespace std;

int ans()
{
    //Input
    int n;cin>>n;//inicio de A
    int k;cin>>k;//diferencia absoluta
    //Variables
    int distance = 0;
    int origen = 0;
    int a = n;//para no confunidirme
    int b = 0;
    bool band = true;
    
    if(a % 2  == 0)
    {
        b = a/2;
    }    

    while(band)
    {
        if((b - k) - (a - b) == 0)
        {
            band = false;
        }

        a++;
    }

    return distance;
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
//continuara...
