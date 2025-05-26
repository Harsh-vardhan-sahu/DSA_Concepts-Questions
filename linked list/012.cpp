#include <iostream>
using namespace std;

int main() {
    // Initialize the array
    int ar[5] = {1, 2, 0, 0, 1};

    // Initialize pointers
    int left = 0;       // Points to the start of the array
    int right = 4;      // Points to the end of the array

    // Rearrange the array based on the conditions
    while (left < right) {
        if ((ar[left] == 1 && ar[right] == 0) || 
            (ar[left] == 2 && ar[right] == 0) || 
            (ar[left] == 2 && ar[right] == 1)) {
            swap(ar[left], ar[right]); // Swap elements
             if (ar[left] == 0 ) left++;
            if (ar[right] == 1 || ar[right] == 2) right--;
             
        } 
    }

    // Output the final array
    cout << "Rearranged array: ";
    for (int a : ar) {
        cout << a << " ";
    }

    return 0;
}
