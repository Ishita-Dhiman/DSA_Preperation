/*1. You are given a number n, representing the count of elements.
2. You are given n numbers.
3. You are required to find the span of input. Span is defined as difference of maximum value and minimum value.*/
#include<iostream>
using namespace std;
int main()
{
    int n ;
    int arr[n];
    cin>>n;
    int i = 0 ; 
    while(i<n)
    {
        cin>>arr[i];
        i++;
    }
    int maximum = INT_MIN;
    int minimum = INT_MAX;
    for(int i = 0 ; i<n; i++)
    {
        
            maximum = max(arr[i],maximum);

        
    }
    for(int i = 0 ; i<n; i++)
    {
        
            minimum = min(arr[i],minimum);
        
        
    }
    
    cout<<(maximum-minimum)<<endl;
    return 0 ;
}