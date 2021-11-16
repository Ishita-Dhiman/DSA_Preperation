/*1. You've to count the number of digits in a number.
2. Take as input "n", the number for which the digits has to be counted.
3. Print the digits in that number.*/
#include<iostream>
using namespace std;
int main()
{
    int num ;
    cin>>num;
    int ans = 0 ;
    while(num)
    {
        num = num/10 ;
        ans++;
    }
    cout<<ans;
    return ans ;
}