#include<iostream>
#include<algorithm>
using namespace std;

void ans()
{
    string s1; cin>>s1;
    string s2; cin>>s2;
    string s3; cin>>s3;
    string saux = s1 + s2;
    sort(saux.begin(), saux.end());
    sort(s3.begin(), s3.end());

    if(saux == s3)
    {
        cout<<"YES"<<endl;
    }else
    {
        cout<<"NO"<<endl;
    }
}


int main()
{
    ans();
    return 0;
}