#include<bits/stdc++.h>
using namespace std;

// class Solution {
// public:
//     vector<int> buildArray(vector<int>& nums) {
//      vector<int> ans;
//         for(int i=0;i<nums.size();i++)
//             ans.push_back(nums[nums[i]]);
//         return ans;
//     }
// };

// int main(){
    
//     int n, value;
//     cout<<"Size: ";
//     cin>>n;
    
//     vector<int> nums;
//     while(n--)
//     {
//         cin>>value;
//         nums.push_back(n);
//     }
//     Solution s;
    
//     vector<int> ans = s.buildArray(nums);
    
//     for(auto i: ans)
//     cout<<i<<" ";
// }

int main(){
  int n;
  cin>>n;
  int nums[n];
  for(int i =0; i<n; ++i){
    cin>>nums[i];
  }
  int ans[n];
  for(int i=0; i<n; ++i){
    ans[i]=nums[nums[i]];
    cout<<ans[i]<<" ";
  }
  

}