#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>
using namespace std;
int main(){
    vector<int> m={1,1,1,2,3,4,5};
    vector<int> n={1,1,2,3,4};
    vector<int> ans;
    sort(m.begin(),m.end());
    sort(n.begin(),n.end());
      int i=0;
      int j=0;
      int a=-1;
     
      while(i<m.size()&&j<n.size()){
        if(m[i]==n[j]){
            if(m[i]!=a){
                a=m[i];
                ans.push_back(m[i]);
            }
            i++;
            j++;
        }
        else if(m[i]>n[j]){
            j++;
        }
        else{
            i++;
        }
      }
      for(int k:ans){
        cout<<k<<" ";
      }
    
}