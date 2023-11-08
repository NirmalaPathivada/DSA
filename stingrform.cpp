#include<bits/stdc++.h>
using namespace std;
 
string stringform(string s){
    string r;
    for(auto c:s){
       if(c=='o' || c=='u'|| c=='a'||c=='y'||c=='i'||c=='e'||c=='O' || c=='U'|| c=='A'||c=='Y'||c=='I'||c=='E'){
          
       }
       else{
           r=r+".";
           c=tolower(c);
           r=r+c;
       }
    }
    return r;
}
int main(){
   
    string s;
    cin>>s;
    string k= stringform(s);
    cout<<k;

    
}