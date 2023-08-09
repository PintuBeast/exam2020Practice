/*
Name: Abhishek J K
Netid: aj4119
*/

#include<iostream>
using namespace std;
int n,squareType=-1; // -1 indicates X and 1 indicates O

int main()
{
    cout<<"Please enter a positive integer: \n";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            switch(squareType)
            {
                case -1:
                {
                    cout<<"X";
                    squareType=1;
                    break;
                }
                case 1:
                {
                    cout<<"O";
                    squareType=-1;
                    break;
                }
            }
        }
        cout<<"\n";
        if(n % 2 == 0)
        {  squareType=-1*squareType;

        }
    }
    return 0;

}

