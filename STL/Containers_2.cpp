#include<iostream>
#include<Algorithm>
#include<stack>
#include<queue>
using namespace std;
int main(){
stack<int> s;
stack<int> s2;
queue<int>q;
priority_queue<int> p;
priority_queue<int,vector<int>,greater<int>>t;
//it is reverse other priority queue
s.push(1);
s.push(2);
s.push(3);
s2.swap(s);
cout<<s.empty()<<endl;

while(!s2.empty()){
    cout<<s2.top()<<" ";
    s2.pop();

}
cout<<"\n";
q.push(1);
q.push(2);
q.push(3);

while(!q.empty()){
    cout<<q.front()<<" ";
    q.pop();
}
cout<<"\n";// In queue all remaining function is same as stack
//priority queue interally uses maxHeap stracture

p.push(1);
p.push(10); 
p.push(100);
p.push(8);
p.push(3);

while(!p.empty()){
    cout<<p.top()<<" ";
    p.pop();
}
cout<<endl;
t.push(1);
t.push(10); 
t.push(8);
t.push(100);
t.push(3);

    
while(!t.empty()){
    cout<<t.top()<<" ";
    t.pop();
}
return 0;
}