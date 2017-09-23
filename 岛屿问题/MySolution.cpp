#include <iostream>
#include <vector>
using namespace std;

int land(vector<vector<int> >map);
void BFS(int m,int n,vector<vector<int> >map, vector<vector<int> >&mark);

int main()
{
	int m,n;
	cin>>m>>n;
	vector<vector<int> >map(m,vector<int>(n,0));
	vector<int>res;
	int k;
	int x,y;
	cin>>k;
	for (int i=0;i<k;i++)
	{
		cin>>x>>y;
		if(x<=m && y<=n)
			map[x][y]=1;
		res.push_back(land(map));
	}
	for (int i=0;i<k;i++)
		cout<<res[i]<<endl;
}
int land(vector<vector<int> >map)
{
	int M = map.size();
	int N = map[0].size();
	vector<vector<int> >mark(M,vector<int>(N,0));
	int count=0;
	
	
	for(int i=0;i<M;i++)
		for(int j=0;j<N;j++)
		{
			if (map[i][j]==1 && mark[i][j]==0)
			{
				count++;
				BFS(i,j,map,mark);
			}
		}
	return count;
}
void BFS(int m,int n,vector<vector<int> >map, vector<vector<int> >&mark)
{
	int M = map.size();
	int N = map[0].size();
	mark[m][n] = 1;
	 
	if(m-1>=0  && mark[m-1][n]==0 && map[m-1][n]==1) BFS(m-1,n,map,mark);
	if(m+1<=M-1 && mark[m+1][n]==0 && map[m+1][n]==1) BFS(m+1,n,map,mark);
	if(n-1>=0 && mark[m][n-1]==0 && map[m][n-1]==1) BFS(m,n-1,map,mark);
	if(n+1<=N-1 && mark[m][n+1]==0 && map[m][n+1]==1) BFS(m,n+1,map,mark);		
	
}