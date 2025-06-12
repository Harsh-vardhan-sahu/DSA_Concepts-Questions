#include<iostream>
#include<set>
using namespace std;
int main(){
    set<int> s;//it ignore duplicate values
  //it also uses self balanceing tree 
  //emplace,count,erase,find ,size,empty,earse same as map 
  // multiset<int>s,unordered_set<int>s; 
    s.insert(1);
    s.insert(1);
    s.insert(3);
    s.insert(4);
    s.insert(8);
    s.insert(2);
//O(logn)
    for(int i:s){
        cout<<i<<" ";
    }
cout<<endl;
cout<<"lower bound = "<<*(s.lower_bound(4))<<endl; //not less than but equal and greater to key variable
cout<<"Upper bound = "<<*(s.upper_bound(4))<<"\n";// always greater than key 


 

}