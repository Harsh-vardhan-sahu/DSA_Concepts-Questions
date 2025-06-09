#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> ar={1,9,8,7,2,3,4,10};
     sort(begin(ar), end(ar));
     int s=0;
     int t=1;
     int ed=ar.size()-1;
    int m=s+(ed-s)/2;
    while(s<ed){
     if(ar[m]==t){
        cout<<m;
        break;
     }
     else if(ar[m]>t){
        ed--;
     }
     else{
        s++;
     }
     m=s+(ed-s)/2;
    }
};
//another