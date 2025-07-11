1.// Problem name: Char .
2.// Course title: Competitive Programming Sessional
3.// Course code: CCE-2310
4.// Course teacher name: Mirza Raquib
5.// Date: 03/03/25
#include<bits/stdc++.h>
using namespace std;
int main()
{
    char x;
    cin>>x;if(x>= 'A' && x<='Z')
    {
     cout<<(char)(x+32);

    }
    else
    {
      cout<<(char)(x-32);
    }
    }
