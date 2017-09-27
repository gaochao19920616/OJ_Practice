#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
	int n,h;
    vector<int>hat;
    cin >> n;
    for (int i=0;i<n;i++)
    {
        cin >> h;
        hat.push_back(h);
    }
    sort(hat.begin(),hat.end());
    int count =1;
    for (int i=0;i<n-1;i++)
    {
        
        if (hat[i]==hat[i+1]) continue;
        else count++;
        if (count==3) 
        {
            cout<<hat[i+1];
            break;
        }
    }
    if (count<3)
    	cout<<-1;
    return 0 ;
}