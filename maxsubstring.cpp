#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        int e;
        cin>>e;
        v[i]=(e);
    }
    int fm=0;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
           int temp=0;
           for(int k=i;k<=j;k++){
            temp+=v[k];
           }
           if(fm<temp){
            fm=temp;

           }
        }
    }
    cout<<fm;
    return 0;
}