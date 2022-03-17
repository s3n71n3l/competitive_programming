#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    double func;
    func=pow((0.143*n), n);
    int r = round(func);
    cout<<r<<endl;
  }
}