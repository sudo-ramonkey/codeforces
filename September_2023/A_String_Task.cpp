#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

void ans()
{
    string s;cin>>s;
    vector<char> v;
    v.push_back('.');
    bool band = true;
    
    for(int i = 0; i < s.size();i++)
    {
        char aux = tolower(s[i]);
        if(s[i] != 'a' && s[i] != 'i' && s[i] != 'u' && s[i] != 'e' && s[i] != 'o' && s[i] != 'A' && s[i] != 'I' && s[i] != 'U' && s[i] != 'E' && s[i] != 'O' && s[i] != 'y' && s[i] != 'Y')
        {
            v.push_back(aux);
            v.push_back('.');
        }
    }

    v.pop_back();
    
    reverse(v.begin(), v.end());

    while(v.size() > 0)
    {
        cout<<v.back();
        v.pop_back();
    }
}


int main()
{
    ans();
    return 0;
}
//codigo hack
//Me lo aceptaron pero a que costo...