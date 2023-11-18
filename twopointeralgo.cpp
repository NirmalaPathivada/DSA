#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[]={2,3,5,8,9,10,15};
    int val=17;
    int n=6;
    int count=0;
    int l=0;
    while(l<n){
        if(arr[l]+arr[n]>val){
            n--;
        }
        else if(arr[l]+arr[n]<val){
            l++;
        }else if(arr[l]+arr[n]==val){
             count++;
             l++;
             n--;
        }
    }
    cout<<count;
    return 0;
}