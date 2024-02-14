#include<iostream>
#include<array>
using namespace std;

int ans2()
{
    int score = 0;
    char arr[10][10];

    for(int i = 0; i < 10; i++)
    {
        string s;cin>>s;
        for(int j = 0; j < 10;j++)
        {
            arr[i][j] = s[j];
        }
    }

    for(int i = 0; i < 10;i++)
    {
        for(int j = 0; j < 10;j++)
        {
           switch(i)
           {
                case 0:
                    if(arr[i][j] == 'X')
                    {
                        score+=1;
                    }
                break;
                case 1:
                    if(arr[i][j] == 'X' && (j == 0 || j == 9))
                    {
                        score+=1;
                    }else if (arr[i][j] == 'X'){
                        score+=2;
                    }
                break;
                case 2:
                    if(arr[i][j] == 'X' && (j == 0 || j == 9))
                    {
                        score+=1;
                    }else if(arr[i][j] == 'X' && (j == 1 || j == 8))
                    {
                        score+=2;
                    }else if (arr[i][j] == 'X'){
                        score+=3;
                    }
                break;
                case 3:
                    if(arr[i][j] == 'X' && (j == 0 || j == 9))
                    {
                        score+=1;
                    }else if(arr[i][j] == 'X' && (j == 1 || j == 8))
                    {
                        score+=2;
                    }else if(arr[i][j] == 'X' && (j == 2 || j == 7))
                    {
                        score+=3;
                    }else if (arr[i][j] == 'X'){
                        score+=4;
                    }
                break;
                case 4:
                    if(arr[i][j] == 'X' && (j == 0 || j == 9))
                    {
                        score++;
                    }else if(arr[i][j] == 'X' && (j == 1 || j == 8))
                    {
                        score+=2;
                    }else if(arr[i][j] == 'X' && (j == 2 || j == 7))
                    {
                        score+=3;
                    }else if(arr[i][j] == 'X' && (j == 3 || j == 6))
                    {
                        score+=4;
                    }else if (arr[i][j] == 'X'){
                        score+=5;
                    }
                break;
                case 5:
                    if(arr[i][j] == 'X' && (j == 0 || j == 9))
                    {
                        score+=1;
                    }else if(arr[i][j] == 'X' && (j == 1 || j == 8))
                    {
                        score+=2;
                    }else if(arr[i][j] == 'X' && (j == 2 || j == 7))
                    {
                        score+=3;
                    }else if(arr[i][j] == 'X' && (j == 3 || j == 6))
                    {
                        score+=4;
                    }else if (arr[i][j] == 'X'){
                        score+=5;
                    }
                break;
                case 6:
                    if(arr[i][j] == 'X' && (j == 0 || j == 9))
                    {
                        score+=1;
                    }else if(arr[i][j] == 'X' && (i == j || j == 8))
                    {
                        score+=2;
                    }else if(arr[i][j] == 'X' && (j == 2 || j == 7))
                    {
                        score+=3;
                    }else if (arr[i][j] == 'X'){
                        score+=4;
                    }
                break;
                case 7:
                    if(arr[i][j] == 'X' && (j == 0 || j == 9))
                    {
                        score+=1;
                    }else if(arr[i][j] == 'X' && (j == 1 || j == 8))
                    {
                        score+=2;
                    }else if (arr[i][j] == 'X'){
                        score+=3;
                    }
                break;
                case 8:
                    if(arr[i][j] == 'X' && (j == 0 || j == 9))
                    {
                        score+=1;
                    }else if (arr[i][j] == 'X'){
                        score+=2;
                    }
                break;
                case 9:
                    if(arr[i][j] == 'X')
                    {
                        score+=1;
                    }
                break; 
           }
        }
    }

    return score;
}

int gady()
{
    int score = 0;
    int arr[10][10] =
    {
        {1,1,1,1,1,1,1,1,1,1},
        {1,2,2,2,2,2,2,2,2,1},
        {1,2,3,3,3,3,3,3,2,1},
        {1,2,3,4,4,4,4,3,2,1},
        {1,2,3,4,5,5,4,3,2,1},
        {1,2,3,4,5,5,4,3,2,1},
        {1,2,3,4,4,4,4,3,2,1},
        {1,2,3,3,3,3,3,3,2,1},
        {1,2,2,2,2,2,2,2,2,1},
        {1,1,1,1,1,1,1,1,1,1}
    };

    string s = "";
    for(int i = 0; i < 10; i++)
    {
        cin>>s;
        for(int j = 0; j < 10;j++)
        {
            if(s[j] == 'X')
            {
                score += arr[i][j];
            }
        }
    }
    return score;
}

int main()
{
    int t;cin>>t;
    while(t-- > 0)
    {
        cout<<gady()<<"\n";   
    }
    return 0;
}