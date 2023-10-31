#include<bits/stdc++.h>
using namespace std;
void sort(int arr[],int lo,int mid,int hi,int n){
   while(mid<=hi){
   if(arr[mid]==0){
               swap(arr[lo],arr[mid]);
               mid=mid+1;
               lo=lo+1;
       }
       else if(arr[mid]==1){
        mid=mid+1;
       }
       else{
        swap(arr[hi],arr[mid]);
        hi=hi-1;
       }
   }
     for(int i=0;i<n;i++){
        cout<<arr[i];
     }
}
int main(){
    int arr[5]={0,1,2,0,1};
    int n=5;
       int lo=0,mid=0,hi=4;
       sort(arr,lo,mid,hi,n);
     return 0;

    }
