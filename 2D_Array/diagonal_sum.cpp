#include<iostream>
using namespace std;

int main() {
    int matrix[4][4]={{1,2,3,4},{3,5,6,7},{7,8,9,12},{10,11,12,10}};
    int r = 4;
    int c = 4;

   

    // Output
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    //diagonal sum
    int sum=0;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(i==j){
                sum+=matrix[i][j];
            }
        }
    }
  cout<<sum;
    return 0;
}
