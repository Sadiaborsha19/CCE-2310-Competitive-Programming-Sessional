1.// Problem name:  Gcd.
2.// Course title: Competitive Programming Sessional
3.// Course code: CCE-2310
4.// Course teacher name: Mirza Raquib
5.// Date: 05/04/25
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a , b,gcd;
    cin>>a>>b;
    for(int i=1; i<=a;i++)
    {
        for(int i=1; i<=b;i++)
        {
            if(a%i==0 && b%i==0)
            {
                gcd = i;
            }
        }

    }
     cout<<gcd;
}
