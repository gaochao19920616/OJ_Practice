#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main()
{
	float n,m;
	float sum=0;
	vector<float>res;
	while(cin>>n>>m)
	{
		sum = n;
		for (int i=1;i<m;i++)
		{
			n=sqrt(n);
			sum+=n;
		}
		res.push_back(sum);
	}
	for(int i=0;i<res.size();i++)
		printf("%.2f\n",res[i]);
}