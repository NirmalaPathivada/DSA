#include<bits/stdc++.h>
using namespace std;
void closestsum(int arr[],int f,int l,int k,int d){
    int m=f+(l-1)/2;

     int c=arr[m]+arr[m-1];
     int e=arr[m]+arr[m+1];
     int a=abs(k-c);
     int z=abs(k-e);
     if(l>z){
     if(a>z && z<d){
        d=z;
        int x=m,y=m+1;
        return closestsum(arr,m+1,l,k,d);
     }
     else if(z>a && a<d){
        d=a;
       int x=m;int y=m-1;
        return closestsum(arr,f,m-1,k,d);
     }
     }
     else{
        cout<<x<<endl;
        cout<<y;
     }
     }
int main(){
    int arr[7]={1,2,3,4,5,6,7};
    int k=29;
    int f=0;
    int l=7;
    int d=13;
    closestsum(arr,f,l,k,d);

    return 0;

}