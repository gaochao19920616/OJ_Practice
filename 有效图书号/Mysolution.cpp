#include <iostream>
#include <string>

using namespace std;

int main()
{
    string num;
    getline(cin,num);
    int n = num.size();
    int flag = 0;
    if (n!=11) flag = 1;
    if (num[1]!='-' || num[5]!='-') flag = 1;
    for (int i=0;i<11;i++)
    {
        if (num[i] >= '0' && num[i] <= '9')
            continue;
        else 
        {   
            flag = 1;
            break;
        }
    }

    if (flag==1){cout<<"ERROR";}
    else
    {
        int sum =0;
        int count = 1;
        for (int i=0 ;i<11;i++)
        {
            if (num[i]!='-')
            sum += (count++)*(num[i]-'0');
        }
        int m=sum%11;
        char a;   
        if (m==10) a='X';
        else  a=m+'0';
        string res = num+'-'+a;
        cout<<res;
    }
}