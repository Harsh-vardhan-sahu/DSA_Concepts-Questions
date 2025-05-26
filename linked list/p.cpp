#include <iostream>
#include <string>
using namespace std;

int main() {
    string n = ")))))";
    int o = 0;
    int i=0;
   
    for (int i = 0; i < n.length(); i++) {
        
        if (n[i] == ')') {
            o++; 
        }
        else if(n[i] == '('){
            i++;
        }
    }

     cout<<(o>i)?o-i:i-o;
    return 0;
}
