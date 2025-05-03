#include <iostream>
using namespace std;

int main() {
    int size = 5;
    int* arr = new int[size]{1, 2, 3, 4, 5}; // Fixed size at runtime
    cout << "Fixed Heap Dynamic: ";
    for (int i = 0; i < size; i++) cout << arr[i] << " ";
    delete[] arr;
    return 0;
}
