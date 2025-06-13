#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>
using namespace std;
int main(){
unordered_map<int,int>pm;
vector<int> nums = {6,1,2,4,1};
cout<<"\n";
for(int n:nums){
     if (n%2==0) pm[n]++;
}
int ans=0;
int occur=0;
for(auto n:pm){
 if(occur==n.second){
    ans=min(ans,n.first);
 }
 else if(occur<n.second){
    occur=n.second;
    ans=n.first;
 }
}
ans=(occur==0)? -1:ans;
cout<<ans;
}