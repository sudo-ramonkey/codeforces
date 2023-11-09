/*
*:astroprieto
*:CodeForces Round:
*:Div:
*:Problem:
*:Tags:
*:Difficulty:
*/
#include<iostream>
//#include<array>
//#include<vector>
#include<algorithm>
//#include<sets>
//#include<maps>
#include<string>
using namespace std;

#define ar array
#define ll long long
#define ld long double
#define pb push_back
#define mkp make_pair
#define l(s) s.size()
#define all(v) v.begin(), v.end()
#define debug cout<<"Swag"<<"\n";
#define fr true
#define cap false
#define newln "\n"

const int MAX_N = 1e5 + 5;

void ans()
{
   int n;cin>>n;
   string s;cin>>s;
   string x = s; 
   sort(all(s));
   int l = 0;
   int r = 0; 

   if(s == x)
   {
        cout<<"NO";
   }else{ 
        for(int i = 0; i < l(s);i++)
        {
            cout<<x<<endl;
            x = s.substr(i, l(s));
            sort(all(x));
            cout<<x<<endl;
            if(x == s)
            {
                debug
                break;
            }
        }
        cout<<x<<endl;
   }

}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    ans();
    return 0;
}