#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[6]={2,2,4,4,7,7};
    int i=0;
    int j=1;
    while(j<=5){
        if(arr[i]!=arr[j]){
            i++;
            arr[i]=arr[j];
        }
        j++;
    }
    for(int k=0;k<i+1;k++){
        cout<<arr[k];
    }
    return 0;
}