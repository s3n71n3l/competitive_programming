#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int n, k, count=0;
    cin>>n>>k;
    string s;
    cin>>s;
    for(int i=0; i<n/2; i++){
        if(s[i]!=s[n-i-1]){
          count++;
        }
    }
    if(k>=count){
      if((k-count)%2==0){
        cout<<"yes"<<endl;
      }else if(n%2==1){
        cout<<"yes"<<endl;
      }else{
        cout<<"no"<<endl;
      }
    }else{
      cout<<"no"<<endl;
    }
  }
}