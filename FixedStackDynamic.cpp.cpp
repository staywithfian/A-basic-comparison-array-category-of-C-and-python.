#include <iostream>
using namespace std;

int main() {
    int arr[5] = {1, 2, 3, 4, 5}; // Fixed size at compile time
    cout << "Fixed Stack Dynamic: ";
    for (int val : arr) cout << val << " ";
    return 0;
}
