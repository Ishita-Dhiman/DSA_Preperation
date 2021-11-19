/**/
#include<iostream>
using namespace std;
int main()
{
    int n ;
    cin>>n;
    int arr[n];
    int k = 0 ;
    while(k<n)
    {
        cin>>arr[k];
        k++;
    }
    int target;
    cin>>target;
    int i = 0 ;
    while(i<n)
    {
        if(arr[i] == target)
        {
            cout<<i<<" ";
            break;
        }
        i++;
    }
    int j = n-1;
    while(j>=0)
    {
        if(arr[j] == target)
        {
            cout<<j;
            break;
        }
        j--;
    }
    return -1;
}