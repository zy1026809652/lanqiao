#include<bits/stdc++.h>
#include<vector>
#include<algorithm>
#include<string>
#include<math.h>
using namespace std;
int frequency(string s,string sub)
{   //�����Ӵ����ִ��� 
	int index,count=0;
	//s.find(sub,index);��������ִ����ʲôλ�ÿ�ʼ���ҡ�������ӣ�Ĭ�ϴ�λ��0������һ���ַ�����ʼ���ҡ� 
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
