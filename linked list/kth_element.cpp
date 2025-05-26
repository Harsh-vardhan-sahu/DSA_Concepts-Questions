#include <iostream>
#include <vector>
using namespace std;
int main(){
    int a[5]={1,2,4,5,8};
    int b[4]={3,6,7,9};
    int k=6;
    int m=9;
    int i=0;
    int j=0;
    int ans=0;
    while(i<m||j<m){
        if(a[i]>b[j]){
            j++;
            ans=a[i];
        }
        else if(a[i]<b[j]){
            i++;
            ans=b[j];
        }
        else if(i+j==k){
            cout<<ans;
        }
        
    cout<<"hello;";}
}