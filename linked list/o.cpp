#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
int ar[7]={1,2,2,2,2,3,3};
unordered_map<int ,int> m;
for(int i:ar){
  m[i]++;
}
for(const auto &pair:m){
cout<<pair.second<<"  "<<pair.first<<"\n";
}
}