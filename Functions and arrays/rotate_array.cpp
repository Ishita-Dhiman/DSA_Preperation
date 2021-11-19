/*1. You are given a number n, representing the size of array a.
2. You are given n numbers, representing elements of array a.
3. You are given a number k.
4. Rotate the array a, k times to the right (for positive values of k), and to
the left for negative values of k.*/
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    int i = 0 ;
    while(i<n)
    {
        cin>>arr[i];
        i++;
    }
    int k ;
    cin>>k;
    for(int i = k-1 ; i<n ; i++)
    {
        cout<<arr[i]<<endl;
    }
    for(int i = 0; i<k-1 ; i++)
    {
        cout<<arr[i]<<endl;
    }
    return 0 ;
}