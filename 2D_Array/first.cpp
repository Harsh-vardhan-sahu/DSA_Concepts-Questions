#include<iostream>
using namespace std;

int main() {
    int matrix[4][3];
    int r = 4;
    int c = 3;

    // Input
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            cin >> matrix[i][j];
        }
    }

    // Output
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    // Search
    int k = 4;
    bool found = false;
    for(int i = 0; i < r && !found; i++) {
        for(int j = 0; j < c; j++) {
            if(matrix[i][j] == k) {
                found = true;
                break;
            }
        }
    }

    cout << (found ? "true" : "false");

    return 0;
}
