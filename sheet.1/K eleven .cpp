1.// Problem name:Max and min  .
2.// Course title: Competitive Programming Sessional
3.// Course code: CCE-2310
4.// Course teacher name: Mirza Raquib
5.// Date: 03/03/25
#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long a,b,c,minimum,maximum;
    cin>>a>>b>>c;
    minimum= min({a,b,c});
    maximum= max({a,b,c});
    cout<<minimum<<" "<<maximum<<endl;
}
