/*1. You are given a number n.
2. You've to create a pattern of * and separated by tab as shown in output format.*/
#include<iostream>
using namespace std;
int main()
{
    int n ;
    cin>>n;
    for(int row = 0 ; row<n ; row++)
    {
        for(int col = 0 ; col<n-row ; col++)
        {
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
    return 0 ;
}