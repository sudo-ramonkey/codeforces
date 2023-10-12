#include<iostream>
#include<string>
using namespace std;

int binarySearch(string x, string s)
{
    int i = 0;
    int j = x.size() - 1;
    while(i < j)
    {
        if(x[i] == s[0])
        {
            return i;
        }


    }

}


int ans()
{
    int a;cin>>a;
    int b;cin>>b;
    string x;cin>>x;//length a
    string s;cin>>s;//length b

    
    bool band = true;
    std::string xAux = x;
    int steps = 1;
    while(band)
    {
        int pos = binarySearch(xAux, s);
        string ans = xAux.substr(pos);
        
        if(ans == s)
        {
            return steps;
        }

        xAux += x;
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