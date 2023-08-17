#include<iostream>
#include<vector>
using namespace std;

void ans()
{
  int a;cin>>a;
  int b;cin>>b;
  vector<int> vec;
  int mayor = 0;
  while(a > 0)
  {
    int aux = a % 10; 
    vec.push_back(aux);
    a /= 10;
    if(aux > mayor)
    {
      mayor = aux;
    }
  }
  
}
  

int main()
{
  ans();
  cout<<"DETECTIVE."<<endl;
  cout<<"ARRIVING."<<endl;
  cout<<"ON. THE. SCENE."<<endl;
  return 0;
}
