#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
//custom comparators
bool comparator(pair<int,int>p1,pair<int,int>p2){
  if(p1.second<p2.second)return true;
  if(p1.second>p2.second) return false;

  if(p1.first<p2.first) return true;
  else return false;

}
int main(){

    int arr[5]={3,1,5,2,9};
    vector<pair<int,int>> vec= {{1,2},{2,3},{4,5},{11,1},{17,1},{100,0},{6,7},{10,9}};
    sort(arr,arr+5);
    sort(vec.begin(),vec.end());
  for(int a:arr){
    cout<<a<<" ";
  }
  cout<<endl;
  sort(arr,arr+5,greater<int>());
  //use for descending order
  for(int a:arr){
    cout<<a<<" ";
  }
  cout<<endl;
  for (auto a : vec) {
    cout << "(" << a.first << ", " << a.second << ") ";
}//it sort based on first element
cout<<"\n";
sort(vec.begin(),vec.end(),comparator);
  for (auto a : vec) {
    cout << "(" << a.first << ", " << a.second << ") ";
}
//it sort based on second 

}