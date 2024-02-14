#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void vectorPrint(vector<int> v)
{
    while(v.size() > 0)
    {
        cout<<v.back()<<" ";
        v.pop_back();
    }
    cout<<"\n";
}

int cuantoFalta(int sumA, int sumB)
{
    int n = 0;
    n = sumA - sumB;
    return n;
}

void ans()
{
    //Input
    int n;cin>>n;
    //Variabless
    vector<int> v;
    int a = n / 2;
    int aux = 2;
    int sumA = 0;
    bool mult4 = false;
    //Logica even

    if(n % 4 == 0)
    {
        mult4 = true;
    }

    while(v.size() < a && mult4)
    {
        sumA += aux;
        v.push_back(aux);
        aux += 2;
    }
    //Variables odd
    aux = 1;
    int sumB = 0;
    //Logica odd
    
    while(v.size() < n && mult4)
    {
        sumB += aux;
        v.push_back(aux);
        if(v.size() + 1 >= n)
        {
            mult4 = false;
        }
        aux += 2;
    }

    int auxSum = cuantoFalta(sumA, sumB);
    v.push_back(auxSum);
    sumB += auxSum;
    reverse(v.begin(), v.end());

    if(sumA == sumB && n % 4 == 0)
    {
        cout<<"YES"<<"\n";
        vectorPrint(v);
    }else{
        cout<<"NO"<<"\n";
    }

}


int main()
{
    int t;cin>>t;
    while(t-- > 0)
    {
        ans();
    }
    return 0;
}
// que codigo mas feo
// pero un win es un win q puedo decir
// 12/Septiembre/2023