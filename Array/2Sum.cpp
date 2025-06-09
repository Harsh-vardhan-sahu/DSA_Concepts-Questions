#include <iostream>
#include <unordered_map>
#include<vector>
using namespace std;
int main(){
    int t=8;
    int ar[10]={1,2,3,7,4,5,6,7,8,0};
   unordered_map<int,int> mp;
   vector<int> ans;
   for(int i=0;i<10;i++){
    int k= t-ar[i];
    if(mp.find(k)!=mp.end()){
        ans.push_back(mp[k]);
        ans.push_back(i);
    }
    mp[ar[i]]=i;
   }
   for(int i:ans){
    cout<<i<<" ";
   }
 
}