/*1. You are given a number n, representing the number of rows and number of columns.
2. You are given n*n numbers, representing elements of 2d array a.
3. You are required to rotate the matrix by 90 degree clockwise and then display the contents using display function.
*Note - you are required to do it in-place i.e. no extra space should be used to achieve it .**/
#include<iostream>
using namespace std;
int main()
{
    int n ;
    cin>>n;
    
    int arr[n][n];
    for(int i = 0 ; i<n ; i++)
    {
        for(int j = 0 ; j<n ; j++)
        {
            cin>>arr[i][j];
        }
    }
    for(int i = 0 ; i<n ; i++)
    {
        for(int j = i ; j<n ; j++) //kyuki half half matrix swap hoga
        {
            swap(arr[i][j] , arr[j][i]);
        }
    }
    for(int i = 0 ; i<n ; i++)
    {
        int start = 0 , end = n-1;
        while(start<end)
        {
            swap(arr[i][start] , arr[i][end]);
            start++;
            end--;
        }
    }
    for(int i = 0 ; i<n ; i++)
    {
        for(int j = 0 ; j<n ; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}