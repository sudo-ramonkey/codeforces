#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
//For the three rabits
void ans()
{
    int a;cin>>a;//Restaurants to lunch
    int b;cin>>b;//Time units for lunch
    
    vector<int> v;
    int maxJoy = 0;
    int joyAux = 0;

    for(int i = 0; i < a;i++)
    {
        int joy;cin>>joy;
        int time;cin>>time;
       
        if(time > b)
        {
            joyAux = (joy - (time - b));
            v.push_back(joyAux);
        }else{
            v.push_back(joy);
        }
    }

    cout<<*max_element(v.begin(),v.end());
}

int main()
{
    ans();
    return 0;
}