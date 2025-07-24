#include<iostream>
#include<vector>
#include <algorithm>


using namespace std;
int main(){
    vector <int> mi(7);
    int ar[7]={17,18,5,4,2,6,1};
    int ans=-1;
    for(int i=6;i>=0;i--){
        mi[i]=ans;
        ans=max(ans,ar[i]);
    }
    for(int a:mi){
        cout<<a<<" ";
    }
}
