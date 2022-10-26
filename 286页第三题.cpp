#include<bits/stdc++.h>
#include<vector>
#include<algorithm>
#include<string>
#include<math.h>
using namespace std;
int f(string s){
	for(int i=0;i<s.length()-1;i++)
	{
		if(s[i]>s[i+1])
		return false;
		else 
		return true;
     }
    
}
int main()
{
	int n,res;
	cin>>n;
	for(int i=10;i<=n;i++)
	{
	string s=to_string(i);
	if(f(s))
	res++;
	}
	cout<<res;

	
}
