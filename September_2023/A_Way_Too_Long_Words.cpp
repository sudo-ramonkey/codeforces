#include<iostream>
using namespace std;

string ans()
{
   string s;cin>>s;
   if(s.size() <= 10)
   {
        return s;
   }

   string solved = "";
   solved += s[0];
   int contador = 0;
   for(int i = 1; i < s.size();i++)
   {
        if(i+1 != s.size())
        {
            contador++;
        }
   }

   solved += to_string(contador);
   solved += s[s.size()-1];

   return solved;
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