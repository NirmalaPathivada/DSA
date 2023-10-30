#include<bits/stdc++.h>
using namespace std;
 void reverse(int arr[],int n){
        for(int i=0;i<n/2;i++){
            int tem=arr[i];
            arr[i]=arr[n-1-i];
            arr[n-1-i]=tem;


        }
        for(int j=0;j<n;j++){
            cout<<arr[j];
        }
       
}
int main(){
    int arr[5]={1,2,3,4,5};
    int n= sizeof(arr)/sizeof(arr[0]);
    reverse(arr,n);

    return 0;
}