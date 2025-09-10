#include <iostream>
#include <vector>
using namespace std;

vector<int> findIndices(int array[], int key, int  size) {
    vector<int> indices; //initialize vector to return
    for (int i = 0; i < size; i++) {
        if (array[i] == key) {
            indices.push_back(i);
        }
    }
    return indices;
}

int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    // check for empty array
    if (size == 0) {
        cout << "Index Result: " << endl;
        cout << "Empty array, no elements found.";
        return 0;
    }

    int* arr = new int[size];

    cout << "Enter " << size << " elements:" << endl;
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    int key;
    cout << "Enter the key to search in the array: ";
    cin >> key;

    // print results
    vector<int> result = findIndices(arr, key, size);
    cout << "Index Result: ";
    for (int index : result) {
        cout << index << " ";
    }

    return 0;
}
