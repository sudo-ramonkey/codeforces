#include<iostream>
using namespace std;

int main()
{
  int t;cin>>t;
  long ans = 0;
  int ansInt = 0;
  while(t > 0)
  {
  int n;cin>>n;
    if(n % 2 != 0)
    {
      ans = (n/2) + 1;
      cout<<ans<<endl;
    }else 
    {
      ansInt = (n/2);
      cout<<ansInt<<endl;
    }
  t--;
  }
  return 0;
}
