#include<iostream>
#include<string>
using namespace std;
int main(){
    string s="amazama";
    int st=0;
    int ed=s.size()-1;
    while(st<=ed){
        if(s[st]==s[ed]){
            st++;
            ed--;
            cout<<s[st]<<" "<<s[ed]<<" "<<st<<" "<<ed<<"\n";
        }
        else{
            cout<<"false";
            break;
        }
    }
    if(st>ed){
        cout<<"true";
    }
}