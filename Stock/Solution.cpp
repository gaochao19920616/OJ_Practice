#include <iostream>
using namespace std;
int Stock(int s)
{
  	int res = s-1;
 	int i=2;
  	while (res>=i)
    	res-=i++;
  	return (i-3)*(i-2)/2+res+1;
}
int main()
{
	int n;
	while (cin>>n)
          cout<<Stock(n)<<endl;
    return 0;
}
