1.// Problem name: compare.
2.// Course title: Competitive Programming Sessional
3.// Course code: CCE-2310
4.// Course teacher name: Mirza Raquib
5.// Date: 23/6/25
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s1,s2;
    cin>>s1>>s2;
   int min_index;
  int x=s1.size();
  int y=s2.size();
  min_index= min(x,y);
  int flag;
  for(int i=0;i<min_index;i++)
  {
      if(s1[i]>s2[i])
      {
          cout<<s2<<endl;
          flag=0;
          break;
      }
      else if(s1[i]<s2[i])
      {
          cout<<s1<<endl;
          flag=0;
          break;
      }
      else flag=-1;
  }
  if(flag==-1)
  {
  if(s1.size()<s2.size())
    cout<<s1;
  else if(s1.size()>s2.size())
      cout<<s2;
        else if(s1.size()==s2.size())
  {
      cout<<s2;
  }
  }
}
