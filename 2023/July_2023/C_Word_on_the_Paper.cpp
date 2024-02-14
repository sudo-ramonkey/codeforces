#include<iostream>
#include<vector>
using namespace std;

char solve(string s)
{
    int i = 0;
    int j = s.length() - 1;
    while(i <= j && j >= i)
    {
        if(s[i] != '.')
        {
            return s[i];
        }

        if(s[j] != '.')
        {
            return s[j];
        }

        i++;
        j--;
    }
    return '.';
}


void ans()
{
    vector<string> v;
    vector<char> v2;
    for(int i = 0; i < 8;i++)
    {
        string s;cin>>s;
        v.push_back(s);
    }

    while (v.size() > 0)
    {
        if(v.back() == "........")
        {
            v.pop_back();
        }else
        {
            string swag = v.back();
            v2.push_back(solve(swag));
            v.pop_back();
        }
    }

    while(v2.size() > 0)
    {
        std::cout<<v2.back();
        v2.pop_back();
    }
    std::cout<<"\n";
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;cin>>t;
    while(t > 0)
    {
        ans();
        t--;
    }
    return 0;
}