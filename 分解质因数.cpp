#include<bits/stdc++.h>
#include<vector>
#include<algorithm>
#include<string>
#include<math.h>
using namespace std;
int main()
{
  long long n,i=2;
  cin>>n;

  	do{
	  	while(n%i==0)
  		{ 
		  	cout<<i;
  		 	n/=i;
			if(n!=1)
		    cout<<"*"; 
  		} 
  		i++;
  	   }
  	   while(n!=1);
  	
}
