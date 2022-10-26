#include<bits/stdc++.h>
#include<vector>
#include<algorithm>
#include<string>
#include<math.h>
using namespace std;
int num(string s,string sub)
{
	int count,index=0;
	while((index=(s.find(sub,index))<s.length()))
	{
		count++;
		index++;
	}
	return count;
	
 } 
int main()
{
	string s;
	string sub=".";
	cout<<num(s,sub);
}
