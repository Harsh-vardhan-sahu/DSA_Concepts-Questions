#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s="harsh";
    vector<int> vec={1,9,10,11,14};
    cout<<*(max_element(vec.begin(),vec.end()))<<endl;
    cout<<*(min_element(vec.begin(),vec.end()))<<endl;

    cout<<binary_search(vec.begin(),end(vec),1)<<endl;
    next_permutation(s.begin(),s.end());
     cout<<s;

}  