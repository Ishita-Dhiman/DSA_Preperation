/*1. You are given an array of size 'n' and n elements of the same array.
2. You are required to find and print all the subarrays of the given array. 
3. Each subarray should be space seperated and on a seperate lines. Refer to sample input and output.*/
#include<iostream>
using namespace std;
int main()
{
    int n ;
    cin>>n;
    int arr[n];
    int i = 0 ;
    while(i<n)
    {
        cin>>arr[i];
        i++;
    }
    for(int i = 0 ; i<n; i++)
    {
        for(int j = i ; j<n ; j++)
        {
            for(int k = i ; k<=j ; k++)
            {
                cout<<arr[k]<<" ";
            }
            cout<<endl;
        }
    }
}