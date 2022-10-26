#include<bits/stdc++.h>
#include<vector>
#include<algorithm>
#include<string>
#include<math.h>
using namespace std;
int frequency(string s,string sub)
{   //查找子串出现次数 
	int index,count=0;
	//s.find(sub,index);后面的数字代表从什么位置开始查找。如果不加，默认从位置0（即第一个字符）开始查找。 
	while((index=s.find(sub,index))<s.length())
	{
		count++;
		index++;
	}
	return count;
}
int main()
{
	string s;
	string sub="lanqiao";
	getline(cin,s);
	for(int i=0;i<s.length();i++)
	s[i]=tolower(s[i]); 
	cout<<frequency(s,sub);
}
