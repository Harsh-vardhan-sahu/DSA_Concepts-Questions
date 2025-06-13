#include <iostream>
#include<map>
#include<vector>
#include<unordered_map>
using namespace std;
int main(){

map<string,int> m;
multimap<string,int> n;
//we can store multiple/duplicate keys in multi map
unordered_map<string,int> v;
//it is unordered not sorted like ordered one and it not take duplicate value


m["tv"]=100;
m["laptop"]=250;
m["earphone"]=30;

m.insert({"iphone",400});
m.emplace("watch",40);
for(auto p:m){
    cout<<p.first<<" "<<p.second<<endl;
}
cout<<"count = "<<m.count("laptop")<<"\n";
if(m.find("camera")!=m.end()){
    cout<<"found\n";
}else{
    cout<<"not fount\n";
}
m.erase("tv");
cout<<m.size()<<" "<<m.empty();
cout<<endl;
cout<<endl;
n.emplace("tv",100);
n.emplace("rafle",1000000);
n.emplace("omnitix",10000000);
n.emplace("car",100);
n.emplace("car",100);
 for(auto p:n){
    cout<<p.first<<" "<<p.second<<endl;
}
cout<<endl;
cout<<endl;
v.emplace("tv",100);
v.emplace("rafle",1000000);
v.emplace("omnitix",10000000);
v.emplace("car",100);
v.emplace("car",100);
 for(auto p:v){
    cout<<p.first<<" "<<p.second<<endl;
}
unordered_map<int,int>mp;
map<int,int>pm;
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

//function in map like insert,erase,count takes o(logn) time complexcity because map implemented by self balanceing tree
//unorder_map all function have O(1) and in very rare cases O(n)
}