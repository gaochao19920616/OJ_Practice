#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    string str;
    getline(cin,str);
    int L=str.size();
    int count =0 ;
    for (int i=L-1;i>=0;i--)
    {
        if (str[i]!=' ')
             count ++;
        else break;
    }
    cout<<count;
    return 0;  
}