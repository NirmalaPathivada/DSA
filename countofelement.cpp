#include<bits/stdc++.h>
using namespace std;


int findkey(int arr[],int f ,int l,int key){
     int m=f+(l-1)/2;
      if(l<f){
        return -1;
      }
      else if(arr[m]==key){
            return m;
       }
      else if(arr[m]>key){
            return findkey(arr,f,m-1,key );
        }
      else if(arr[m]<key){
            return findkey(arr, m+1,l,key);
        }
}

int coutnumber(int arr[],int key,int n){
      int ind=findkey(arr,0,n-1,key);
      if(ind==-1){
        return 0;
      }
      int count=1;
      int left=ind-1;
      while(left>=0 && arr[left]==key){
           left--,count++;
      }
      int right=ind+1;
      while(right<n && arr[right]==key){
         right++,count++;
      }
      return count;

}
int main(){
    int arr[7]={0,0,0,0,1,3,3};
    int key=3;
    int res=coutnumber(arr,key,7);
    if(res==0){
        cout<<"element not found";
    }
    else{
        cout<<res;
    }
    return 0;
}