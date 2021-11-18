#include <bits/stdc++.h> 
using namespace std; 

int main() 
{ 
	int n;
	cin>>n;
	int n1,n2;
	n1=(n+1)/2;
	n2=(n-n1);
	int i=1;
	while(i<=n1)
	{
		int space=1;
		while(space<=n1-i)
		{
			cout<<" ";
			space=space+1;
		}
		int j=1;
		while(j<=i)
		{
			cout<<"*";
			j=j+1;
		}
	int k=1;
	while(k<=i-1)
	{ 
		cout<<"*";
		k=k+1;
		}
		i=i+1;
		cout<<endl;
	}
		 int t=1;
		 while(t<=n2)
		 {
		 int p=1;
		 while(p<=t)
		 {
		 	cout<<" ";
		 	p=p+1;
			 }	
		 int q=1;
		 while(q<=(2*n2-2*t+1))
		 {
		 	cout<<"*";
		 	q=q+1;
		 }
	    t=t+1;
	    cout<<endl;
		}
        return 0 ;
        
}

