#include<iostream>
#include<vector>
#include<stack>
using namespace std;

vector<int> prevsmaller(vector<int> arr){

}

int main(){
    vector<int> arr={3,1,0,8,6};
    vector<int> ans=prevsmaller(arr);

    for(int val:ans){
        cout<<val<" ";
    }
    cout<<endl;
    return 0;
}