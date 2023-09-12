#include<iostream>
using namespace std;

void ans()
{
    //input
    int l;cin>>l;
    int r;cin>>r;
    //variables
    int a = l/2;
    int b = r/2;
    int mcd = 0;
    bool band = true;
    //logica
    while(band)
    {
        if((a+b) <= l && (a+b) >= r)
        {
           if(a % mcd == 0 && b % mcd == 0) 
           {
                band = false;
           }

           if(a+1 >= l || a+1 >= r)
           {
                a--;
           }else{
            a++;
           }

           if(b+1 >= r || b+1 >= l)
           {
                b--;
           }else{
                b++;
           }
        }


    }



    cout<<a<<" "<<b<<"\n";
}

int main()
{
    int t;cin>>t;
    while(t-- > 0)
    {
        ans();
    }
    return 0;
}