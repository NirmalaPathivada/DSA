#include<bits/stdc++.h>
using namespace std;
int maxsum(int arr[],int k,int n){
  if(k>n)
     return 0;

 int max_sum=0;
 for(int i=0;i<k;i++)
    max_sum+=arr[i];
 
 int win_sum=max_sum;
 for(int i=k;i<n;i++){
   win_sum+=arr[i]-arr[i-k];
   max_sum=max(win_sum,max_sum);
 }
return max_sum;
}

int main(){
    int arr[5]={4,12,8,7,2};
   int res= maxsum(arr,2,5);
   cout<<res;
    return 0;
}