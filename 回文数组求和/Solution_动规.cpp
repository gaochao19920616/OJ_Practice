#include <iostream>
#include <string>
#include <vector>
#include <cmath>

using namespace std;

int main()
{
    long long L,a,sum=0;
    cin>>L;
    vector<long long> num;
    vector<vector<long long> >M (L,vector<long long>(L,0));
    for(int i=0;i<L;i++)
    {
        cin>>a;
        num.push_back(a);
        sum+=a;
    }
    for (int e=0;e<L;e++)
    	for (int s=L-1;s>=0;s--)
    	 {
    	 	if (s<e) 
    	 	  {
    	 	  	if(num[s]==num[e]) M[s][e]=M[s+1][e-1];
    	 	  	else  M[s][e]=min(M[s+1][e]+num[s],M[s][e-1]+num[e]);
			   }
		 }
    cout<<M[0][L-1]+sum;
	return 0;
}