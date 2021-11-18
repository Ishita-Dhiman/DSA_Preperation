/*1. You are given a number n.
2. You are given a digit d.
3. You are required to calculate the frequency of digit d in number n.*/
#include<iostream>
using namespace std;
int count(int num , int digit){
    int ans = 0 ;
    while(num>0)
    {
        int rem = num%10;
        if(rem == digit)
        {
            ans++;
        }
        num = num/10;
    }
    return ans ;
}

int main()
{
    int num ;
    cin>>num;
    int digit;
    cin>>digit;
    int ans = count(num , digit);
    cout<<ans<<endl;
    return ans;
}