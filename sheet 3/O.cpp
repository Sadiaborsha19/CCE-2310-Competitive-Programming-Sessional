1.// Problem name: Fibonacci.
2.// Course title: Competitive Programming Sessional
3.// Course code: CCE-2310
4.// Course teacher name: Mirza Raquib
5.// Date: 22/6/25
#include<bits/stdc++.h>
using namespace std;
int main()
{
    

long long index;
long long a[51];
a[1]=0;
a[2]=1;
for(int i=3;i<=50;i++)
{
    a[i]=a[i-1]+a[i-2];
}
cin>>index;
cout<<a[index]<<endl;
}
