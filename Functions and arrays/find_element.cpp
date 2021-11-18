/*1.You are given a number n, representing the size of array a.
2.You are given n distinct numbers, representing elements of array a.
3. You are given another number d.
4. You are required to check if d number exists in the array a and at what index (0 based). If found print the index, otherwise print -1.*/

#include<iostream>
using namespace std;
int find_element(int arr[] , int n , int digit)
{
    int index = -1 ;
    for(int i = 0 ; i<n ; i++)
    {
        if(arr[i] == digit)
        {
            index = i ;
            return index;
        }
    }
    return - 1;
}
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
    int digit ;
    cin>>digit;
    int ans = find_element(arr , n , digit);
    cout<<ans ;
    return 0 ;
}