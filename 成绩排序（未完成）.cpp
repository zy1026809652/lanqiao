#include<bits/stdc++.h>
#include<vector>
#include<algorithm>
#include<string>
#include<math.h>
using namespace std;
typedef struct Student{
	int score_cn;
	int score_math;
	int score_eng;
	int score_total;
	string name;
};
int main()
{
	int n;
	cin>>n;
	int a[n],b[n],c[n],d[n];
	
	struct Student stu[n];
	for(int i=0;i<n;i++)
	{
		cin>>stu[i].name>>stu[i].score_cn>>stu[i].score_math>>stu[i].score_eng;
		stu[i].score_total=stu[i].score_cn+stu[i].score_eng+stu[i].score_math;
		a[i]=stu[i].score_total;
		b[i]=stu[i].score_cn;
		c[i]=stu[i].score_math;
		d[i]=stu[i].score_eng;
	}
	sort(a,a+n);
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)	
		{
			if(a[i]==a[j])
		}
		
	
	
}
