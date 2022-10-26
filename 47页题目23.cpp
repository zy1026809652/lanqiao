#include<bits/stdc++.h>
#include<vector>
#include<algorithm>
#include<string>
#include<math.h>
using namespace std;
int main()
{
	int n;
	cin>>n; 
	int a[2*n];
	for(int i=0;i<2*n;i++)
	{
		cin>>a[i];
	}
	for(int i=1;i<2*n-1;i++)
	{	
		if(a[i]>=10||a[i+1]>=20)
		cout<<"True"<<endl;
		else
		cout<<"False"<<endl;
	}
}
