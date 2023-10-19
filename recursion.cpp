#include<iostream>
using namespace std;
void printname(string s,int n){
    if(n>0){
        cout<<s<<endl;
        n--;
        printname( s, n);
    }
};
int main(){
    string s="nirmala";
    int n=5;
    printname(s,n);

    return 0;

}