#include<bits/stdc++.h>
using namespace std;
const int N = 1e7+10; //if array size is bigger then declare it globally 
long long int arr[N]; //global variable are always declared as zero
int main(){

  //------*normal method*-------
  // int n, m;
  // cin>>n>>m;
  // while(m--){
  //   int a, b, k;
  //   cin>>a>>b>>k;
  //   for(int i=a; i<=b; i++){
  //     arr[i] +=k;
  //   }
  // }
  // long long mx=-1;
  // for(int i=1; i<=n; ++i){
  //   if(mx<arr[i]){
  //     mx=arr[i];
  //   }
  // }
  // cout<<mx<<endl;

  //-------*optimized method*---------

  int n, m;
  cin>>n>>m;
  while(m--){
    int a, b, k;
    cin>>a>>b>>k;
    arr[a]+=k;
    arr[b+1]-=k;
  }
  for(int i =1; i<=n; ++i){
    arr[i]+=arr[i-1];
  }

  long long mx=-1;
  for(int i=1; i<=n; ++i){
    if(mx<arr[i]){
      mx=arr[i];
    }
  }
  cout<<mx<<endl;

  

  return 0;
}


