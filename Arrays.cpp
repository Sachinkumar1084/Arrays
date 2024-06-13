

#include <iostream>
#include <array>
#include <algorithm>
using namespace std;

int main() {
    array<int, 5> arr = {5, 3, 4, 1, 2};

    cout << "Element at index 0: " << arr.at(0) << endl;
    cout << "Element at index 1: " << arr[1] << endl;

    cout << "Size of array: " << arr.size() << endl;

    cout << "Elements in array: ";
    for (auto it = arr.begin(); it != arr.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    cout << "Elements in array (range-based for loop): ";
    for (auto i : arr) {
        cout << i << " ";
    }
    cout << endl;

    sort(arr.begin(), arr.end());
    cout << "Sorted array: ";
    for (int elem : arr) {
        cout << elem << " ";
    }
    cout << endl;

    arr.fill(10);
    cout << "Array after fill(10): ";
    for (const auto& elem : arr) {
        cout << elem << " ";
    }
    cout << endl;

    array<int, 5> arr2 = {10, 20, 3, 4, 5};
    arr.swap(arr2);
    cout << "Array after swapping with arr2: ";
    for (const auto& elem : arr) {
        cout << elem << " ";
    }
    cout << endl;

    cout << "First element (front): " << arr.front() << endl;

    return 0;
}
