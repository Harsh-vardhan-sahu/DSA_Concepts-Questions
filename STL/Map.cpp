#include <iostream>
#include<map>
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
}