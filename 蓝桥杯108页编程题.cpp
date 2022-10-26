#include<bits/stdc++.h>
#include<string>
#include<iostream> 
#include <stdlib.h>
using namespace std;
bool isEven(int n)
{
	if(n%2==0)
	return true;
	else
	return false;
}
int main()
{
 int n;
 cin>>n;
 while(n>1)
 {
 	if(isOdd(n))
 	{
 		
 		cout<<n<<"/"<<2<<n/2<<endl;
		 n=n/2;
	 }
	 else if(!isOdd(n))
	 {
	 	
	 	cout<<3<<"*"<<n<<"+"<<1<<"="<<3*n+1<<endl;
		 n=3*n+1;
	 }
	 }
 }

