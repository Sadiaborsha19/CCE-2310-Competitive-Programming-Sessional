1.// Problem name: Positions in array.
2.// Course title: Competitive Programming Sessional
3.// Course code: CCE-2310
4.// Course teacher name: Mirza Raquib
5.// Date: 1/6/25
#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
cin>>arr[i];
}
for(int i=0;i<n; i++){
if (arr[i]<=10){
cout<<"A["<< i <<"]"<<" "<<"="<<" "<<arr[i]<<endl;
}
}
}
