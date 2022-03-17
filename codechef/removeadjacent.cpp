#include<bits/stdc++.h>
using namespace std;
int main(){
  int t; 
  cin>>t;
  while(t--){
    int n, count=0;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
      cin>>arr[i];
    }
    int max=0;
    for(int i=0; i<n; i++){
      if(arr[i]>max){
        max=arr[i];
      }
    }
    if(n>2){
      for(int i=0; i<n; i++){
      if(arr[i]+arr[i+1]==max){
        arr[i]=max;
        count++;
        n--;
      }else if(arr[i]=arr[i+1]){
        count++;
      }
    }
    }
  }
}