/*1. You've to display the digits of a number in reverse.
2. Take as input "n", the number for which digits have to be display in reverse.
3. Print the digits of the number line-wise, but in reverse order.*/
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int num ;
    cin>>num ;
    while(num != 0 )
    {
        cout<<num%10<<endl;
        num = num/10 ;
        
    }
    return 0 ;
}