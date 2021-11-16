/*1. You've to print first n fibonacci numbers.
2. Take as input "n", the count of fibonacci numbers to print.
3. Print first n fibonacci numbers.*/
#include<iostream>
using namespace std;
int main()
{
    int n ;
    cin>>n;
    int a = 0 ;
    int b = 1;
    cout<<a<<endl<<b<<endl;

    for(int i = 2 ; i<n ; i++)
    {
        int c = a+b;
        cout<<c<<endl;
        a = b;
        b = c;

    }
    return 0 ;
}