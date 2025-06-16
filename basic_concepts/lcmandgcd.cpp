#include <iostream>
using namespace std;

int gcd(int a,int b){
    while(b!=0){
     int temp=b;
     b=a%b;
     a=temp;   
    }
    return a;
}
int lcm(int a,int b){
    return (a*b)/gcd(a,b);
}
int main(){
    int nums[5]={1,2,3,4,5};
    
 cout<<gcd(8,16)<<endl;
 cout<<lcm(8,16)<<endl;
 cout<<gcd(nums[2],nums[4])<<endl;
 cout<<lcm(nums[0],nums[1]);
}