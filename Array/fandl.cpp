#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector <int> ans={1,2,3,4,5,3,6,3,3};
    int f=0;
    int l=0;
    int k=3;
    for(int i=0;i<ans.size();i++){
            if(ans[i]==k){
                f=i;
                break;
            }
    }
    for(int i=0;i<ans.size();i++){
        if(ans[i]==k){
            l=max(l,i);
        }
    }
    cout<<f<<"  "<<l;
    
}