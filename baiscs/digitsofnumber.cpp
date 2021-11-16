/*1. You've to display the digits of a number.
2. Take as input "n", the number for which digits have to be displayed.
3. Print the digits of the number line-wise.*/
#include<iostream>
using namespace std;
int main()
{
    int num ;
    cin>>num ;
    while(num)
    {
        cout<<num%10<<endl;
        num = num/10 ;
        
    }
    return 0 ;
}