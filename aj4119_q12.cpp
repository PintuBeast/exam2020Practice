/*
Name: Abhishek J K
Netid: aj4119
*/

#include<iostream>
using namespace std;
int main()
{
    int num,coutEvenNumbers=0,countEventDigits=0,countOddDigits=0;
    cout<<"Please enter a sequence of positive integers,each one in a seperate line. \n"
         << "End your sequence by typing -1:\n";
    while(1)
    {
        cin>>num;
        if(num==-1)
        {
            break;
        }
        countEventDigits=0;
        countOddDigits=0;
        while(num>0)
        {
            if((num % 10 )%2 == 0)
            {
                countEventDigits++;
            }
            else
            {
                countOddDigits++;
            }
            num=num/10;
        }
        if(countEventDigits>countOddDigits)
        {
            coutEvenNumbers++;
        }
    }
    cout<<"You entered "<<coutEvenNumbers<<" more-even numbers";     
}