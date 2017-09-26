#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main()
{
    int n;
    while(cin>>n)
    {
        if (n>1000) n=1000;
        vector<int>delet(n,0);

        int gap=0;
        int label=0;
        int res=-1;
        int count=0;

        while(1)
        {
            if(label>n-1) label=label-n;
            if(delet[label]==0)
            {
                if(gap==2)
                {
                    if(count<n-1)
                    {
                        delet[label]=1;
                        count++;
                        gap=0;
                    }
                    else
                        res=label;
                }
                else
                    gap++;
            }
            label++;
            if (res!=-1)
                break;
        }
        cout<<res<<endl;
    }
    return 0;  
}

