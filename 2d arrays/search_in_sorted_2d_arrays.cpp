/*1. You are given a number n, representing the number of rows and columns of a square matrix.
2. You are given n * n numbers, representing elements of 2d array a. 
Note - Each row and column is sorted in increasing order.
3. You are given a number x.
4. You are required to find x in the matrix and print it's location int (row, col) format as discussed in output format below.
5. In case element is not found, print "Not Found".*/
#include <iostream>
using namespace std;
int main()
{
    int n;
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
    int x ;
    cin>>x;
    for(int i = 0 ; i<n ; i++)
    {
        for(int j = 0 ; j<m ; j++)
        {
            if(arr[i][j] == x)
            {
                cout<<i<<" "<<j<<endl;
            }
        }
    }

}