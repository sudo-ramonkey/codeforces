#include<iostream>
using namespace std;
//Two Pointers

int contarChar(string beautified)
{
  int contador = 0;
  for(int i = 0; i < beautified.length(); i++)
  {
    if(beautified[i] == 'b')
    {
      i = beautified.length();
    }else{
      contador++;
    }
  }
  return contador;
}


void ans()
{
  //Variables de input
  int n;cin>>n;//Length del string
  int k;cin>>k;//Maximo numero de caracteres a cambiar
  string beautify;cin>>beautify;
  
  //Manejo
  int left = 0;
  int right = n - 1;
  while(left <= right && k > 0)
  {
    if(beautify[left] == 'b')
    {
      beautify[left] = 'a';
      k--;
      left++;
      if(k == 0)
      {
        break;
      }
    }else 
    {
      left++;  
    }

    if(beautify[right] == 'b')
    {
      beautify[right] = 'a';
      k--;
      right--;
    }else 
    {
      right--; 
    }
  } 
  int ans = contarChar(beautify);
  cout<<ans<<endl;
  //cout<<"Tan tan ahi esta la respuesta"<<"\n";
}


int main()
{
  ans();
  return 0;
}

//String of length n 
//consists only of a and b
//denotes beauty of the string:
//As the maximum length of a substring
//subsequencia consecutiva
//consistiendo en letras iguales
//Vasya puede cambiar no mas de K caracteres del string original
//Cual es la maxima belleza que puede conseguir?

//Sample input
//4 2
//abba
//output:
//4
