#include <iostream>
#include <string>
#include <vector>
#include <cmath>

using namespace std;

long long min_sum(long long s,long long e,vector<long long> num);
int main()
{
    long long L,a,sum=0;
    cin>>L;
    vector<long long> num;
    vector<vector<long long>>M (L,vector<long long>(L,0));
    for(int i=0;i<L;i++)
    {
        cin>>a;
        num.push_back(a);
        sum+=a;
    }
    cout<<min_sum(0,L-1,num)+sum;
	return 0;
}
long long min_sum(long long s,long long e,vector<long long> num)
{
	if (s==e||s>e) return 0;
	else
	{
		if (num[s]==num[e]) 
			return min_sum(s+1,e-1,num);
		else 
			return min(min_sum(s+1,e,num)+num[s],min_sum(s, e-1,num)+num[e]);
    }
}