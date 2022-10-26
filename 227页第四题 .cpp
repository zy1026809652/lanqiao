#include<bits/stdc++.h>
#include<vector>
#include<algorithm>
#include<string>
#include<math.h>
using namespace std;
//https://www.cnblogs.com/dabai56/p/10958080.html 
int num(int m,int n)
{
	if(m==1)
	return n+m;
	if(n==1)
	return n+m;
   return num(n-1,m)+num(n,m-1);
}
int main()
{
	int m,n;
	cin>>m>>n;
	cout<<num(m,n);
	
}
