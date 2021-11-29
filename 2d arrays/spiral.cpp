/*1. You are given a number n, representing the number of rows.
2. You are given a number m, representing the number of columns.
3. You are given n*m numbers, representing elements of 2d array a.
4. You are required to traverse and print the contents of the 2d array in form of a spiral.
Note - Please check the sample output for details.*/
#include<iostream>
using namespace std;
int main()
{
    int n ;
    cin>>n;
    int m ;
    cin>>m;
    int arr[n][m];
    for(int i = 0 ; i<n ; i++)
    {
        for(int j = 0 ; j<m ; j++)
        {
            cin>>arr[i][j];
        }
    }
    int rs = 0 , re = n - 1 , cs = 0 , ce = m - 1 ; 
    while(rs<=re && cs<=ce)
    {
        //for printing first row
        for(int col = cs ; col<=ce ; col++)
        {
            cout<<arr[rs][col]<<" ";
        }
        rs++;
        //for printing last row
        for(int row = rs ; row<=re ; row++)
        {
            cout<<arr[row][ce]<<" ";
        }
        ce--;
        //for printing last row
        for(int col=ce ; col>=cs ; col--)
        {
            cout<<arr[re][col]<<" ";
        }
        re--;
        //for printing first column
        for(int row = re ; row>=rs ; row--)
        {
            cout<<arr[row][cs]<<" ";
        }
        cs++;
    }
}