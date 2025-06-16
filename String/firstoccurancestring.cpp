#include <iostream>
#include <string>
using namespace std;
int main(){
   string s1="aaaaab";
   string s2="aab";
   int i=0;
   int j=0;
   int n=s1.size();
   while(j!=n){
    if(s2[i]==s1[j]){
        i++;
        j++;
         if(i==s2.size()){
    cout<<"true\n";
   }
    }
    else{
        i=0;
        j++;
   }
    
}
   
    cout<<"false";
   
}