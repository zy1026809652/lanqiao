#include<bits/stdc++.h>
#include<vector>
#include<string>
using namespace std;
int a[10];
double sum=0;
int main()
{
	for(int i=0;i<=9;i++)
	{
		cin>>a[i];
		sum+=a[i];
	}
	//����fixed���ʾ��λ������fixed��ʾС��λ��
	//*max_element(a,a+10)��ʾ������a���ֵ 
	cout<<*(max_element(a,a+10))<<","<<*(min_element(a,a+10))
	<<","<<fixed<<setprecision(2)<<sum/10;
} 
