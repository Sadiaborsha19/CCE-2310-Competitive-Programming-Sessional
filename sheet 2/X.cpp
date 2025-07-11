1.// Problem name:Control to decimal 2  .
2.// Course title: Competitive Programming Sessional
3.// Course code: CCE-2310
4.// Course teacher name: Mirza Raquib
5.// Date: 05/04/25
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)

{
  long long n,one=0,r;
  cin>>n;
  while(n!=0)
  {
    r=n%2;
    if(r==1)one++;
    n=n/2;
  }
    long long ans=pow(2,one);
    cout<<ans-1<<endl;
}
}
