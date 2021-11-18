#include<iostream>
using namespace std;
int main()
{
    int n ;
    cin>>n;
    int row = 1;
    while(row<=n)
    {
        int spaces = 1 ;
        while(spaces <= n- row)
        {
            cout<<" ";
            spaces++;
            
        }
        int stars = 1 ;
        while(stars <= row)
        {
            cout<<"*";
            stars++;
            
        }
        stars = row - 1;
        while(stars>=1)
        {
            cout<<"*";
            stars -- ;
        }
        cout<<endl;
        row++;
    }
return 0 ;
}