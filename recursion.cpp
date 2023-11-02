#include<bits/stdc++.h>
using namespace std;

/*void printnumbers(int n) {
    if(n>=1){
        cout<<n<<endl;
    }printnumbers(n-1);
}*/
int printsum(int n,int sum){
   if(n>=1){
     printsum(n-1,sum+n);
 }else{
    return sum;
 }

}
int main(){
    int n=7;
   // printnumbers(n);//
   int r=printsum(n,0);
   cout<<r;
    return 0;
}