#include<bits/stdc++.h>
using namespace std;

int binarysearch(int arr[],int l,int f,int n,int key){
    int m=(l+f)/2;
    if(l>=f){
        return -1;
    }
    else if(arr[m]==key){
        return m;
    }else if(arr[m]>key){
        return binarysearch(arr,l,m-1,n,key);
    }else if(arr[m]<key){
        return binarysearch(arr,m+1,l,n,key);
    }
   
}
int main(){
    int arr[7]={2,4,6,6,8,9,10};
    int n=11;
    int l=0;
    int f=n-1;
    int key=7;
   int res=binarysearch(arr,l,f,n,key);
   if(res==-1){
    cout<<"elemet not found";
   }else{
    cout<<res;
   }
   return 0;
}