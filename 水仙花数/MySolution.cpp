#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

bool Judge (int n);
int main()
{
	int m,n;
	vector<vector<int> >res;
	while(cin>>m>>n)
	{
		vector<int>line(1,0);
		line.pop_back();
		for (int i=0;i<=n-m;i++)
			if (Judge(i+m)) 
				line.push_back(i+m);
	    res.push_back(line);
	}
	for (int i=0;i<res.size();i++)
	{
		if (!res[i].size()) cout<<"no"<<endl;
		else 
		{
			cout<<res[i][0];
			if (res[i].size()>1)
				for (int j=1;j<res[i].size();j++)
					cout<<" "<<res[i][j];
			cout<<endl;
		}
	}
}
bool Judge (int n)
{
	int m=n;
	int sum=0;
	while(m)
	{
		sum+=pow((m%10),3);
		m/=10;
	}
	return (n==sum);
}
