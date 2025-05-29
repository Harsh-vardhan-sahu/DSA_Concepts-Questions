#include <iostream>
#include<vector>
#include<list>
#include<deque>
using namespace std;
int main(){
    //seqeunce containers list, vector, deque 
    vector<int> vec={1,2,3,4,5};
    vector<int>::iterator it;
    // it's use for forward
     vector<int>::reverse_iterator ti;
    
    for(it=vec.begin();it!=vec.end();it++){
        cout<<*(it)<<" ";
    }
    cout<<endl;
    // for backward 
    for(auto ti=vec.rbegin();ti!=vec.rend();ti++){
        cout<<*(ti)<<" ";
    }
    cout<<endl;

    //LIST
    //vector is dynamic array , and list is a doubly linked list it have two front(fornt and back)
    //random acess is not possible
    list<int> l;
    l.push_back(1);
    l.push_back(2);
    l.push_back(3);
    l.push_front(8);
    for(int c:l){
        cout<<c<<" ";
    }
    cout<<endl;
    //Deque:double Ended Queue
    //random acess is possible

deque<int> k={2,3,1,3};

//pairs
//special container
pair<string,int> ar={"harsh",12};
cout<<ar.first<<" "<<ar.second<<"\n";

pair<int,pair<int,int>> p={1,{1,2}};
cout<<p.first<<" "<<p.second.first<<" "<<p.second.second<<"\n";

  vector<pair<int, int>> v = {{1, 2}, {3, 4}, {4, 5}};
  v.push_back({4,5});//insert,it cannot convert simpler value into pairs
  v.emplace_back(4,5);//in-place objects create ,but it can convert
    for (auto a : v) {
        cout << a.first << ' ' << a.second << endl;
    }
    return 0;
}