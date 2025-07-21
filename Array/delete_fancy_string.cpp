#include <iostream>
#include <vector>
#include<unordered_map>
#include<string>
using namespace std;
int main(){
 
  string nw="";
 string st="leeetcode";
 int c=1;
 int n=st.length();
 for(int i=0;i<n;i++){
    if(i>0&&st[i]==st[i-1]){
        c++;
    }else{
        c=1;
    }

    if(c<3){
        nw.push_back(st[i]);
    }
 }
 cout<<nw;
}