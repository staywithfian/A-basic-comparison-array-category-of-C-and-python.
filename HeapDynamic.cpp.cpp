#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> arr = {1, 2, 3}; // Dynamically resizable
    arr.push_back(4);
    cout << "Heap Dynamic: ";
    for (int val : arr) cout << val << " ";
    return 0;
}
