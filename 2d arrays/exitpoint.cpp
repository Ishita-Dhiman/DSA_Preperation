/*1. You are given a number n, representing the number of rows.
2. You are given a number m, representing the number of columns.
3. You are given n*m numbers (1's and 0's), representing elements of 2d array a.
4. Consider this array a maze and a player enters from top-left corner in east direction.
5. The player moves in the same direction as long as he meets '0'. On seeing a 1, he takes a 90 deg right turn.
6. You are required to print the indices in (row, col) format of the point from where you exit the matrix.*/
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
    int rs = 0 ; int rc = 0 ;
    while(rs<=n && rc<=m)
    {
        if(rs == n-1 || rc == m-1)
        {
            cout<<rs<<" "<<rc<<endl;
            break;
        }
        if(arr[rs][rc] == 0)
        {
            rc++;
        }
        if(arr[rs][rc] == 1)
        {
            rs++;
        }
    }
}