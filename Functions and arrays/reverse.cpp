/*1. You are given a number n, representing the size of array a.
2. You are given n numbers, representing elements of array a.
3. You are required to reverse the contents of array a.*/
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
    int start = 0 ;
    int end = n-1;
    while(start<=end)
    {
        int temp = arr[start];
        arr[start] =arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
    int x = 0 ;
    while(x<n)
    {
        cout<<arr[x]<<endl;
        x++;
    }
    return 0 ;
}