//vector is the most used type of contianers
#include<iostream>
#include<Algorithm>
#include<vector>
using namespace std;
int main(){
    vector<string> ans;//it have dynamic in terms of memory allocation and size
  cout<<ans.size()<<"\n";
  string n="harsh";
  for(char ele:n){
    ans.push_back(string(1,ele));
  }
  for(string e:ans){
    cout<<e<<" ";
  } 
  ans.pop_back();// for delete last index data
// Capacity usually grows like: 0 → 1 → 2 → 4 → 8 → 16 → 32 → 64 → ...
// This ensures efficient O(1) amortized time for push_back.
  cout<<"\n"<<ans.capacity()<<endl;
   cout<<ans.at(2)<<" "<<ans.front()<<" "<<ans.back();
   cout<<ans.empty();
}//it also have erase and insert function but it are costly have o(n) time complexity but it also at work in range of variables
// it can change size but capacity is same 
