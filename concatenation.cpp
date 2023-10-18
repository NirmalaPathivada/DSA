#include<iostream>
#include<vector>
using namespace std;
vector<int> concatenation(vector<int>&nums){
   vector<int>ans;
   int n=nums.size();
   for(int i=0;i<n;i++){
    ans.push_back(nums[i]);
   }
   for(int i=0;i<n;i++){
    ans.push_back(nums[i]);
   }
   return ans;
}

int main(){
  vector<int>nums;
  vector<int>k;
  nums={1,2,3,4,5};

  k=concatenation(nums);
  for(int i=0;i<k.size();i++){
    cout<<k[i];
  }
  return 0;

}