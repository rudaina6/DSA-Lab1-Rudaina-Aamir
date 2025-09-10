#include <iostream>
#include <vector>
using namespace std;

vector<int> findIndices(int array[], int key, int  size) {
    vector<int> indices;
    for (int i = 0; i < array.length(); i++) {
        if (array[i] == key) {
            indices.push_back(i);
        }
    }
    return indices;
}

int main() {
    // Test case 1: Multiple occurrences
    vector<int> array1 = {1, 2, 3, 2, 4, 2};
    int key1 = 2;
    vector<int> result1 = findIndices(array1, key1);
    cout << "Test case 1: ";
    for (int index : result1) {
        cout << index << " ";
    }
    cout << endl;

    // Test case 2: Key not present
    vector<int> array2 = {5, 6, 7, 8};
    int key2 = 10;
    vector<int> result2 = findIndices(array2, key2);
    cout << "Test case 2: ";
    for (int index : result2) {
        cout << index << " ";
    }
    cout << endl;

    // Test case 3: Empty array
    vector<int> array3 = {};
    int key3 = 1;
    vector<int> result3 = findIndices(array3, key3);
    cout << "Test case 3: ";
    for (int index : result3) {
        cout << index << " ";
    }
    cout << endl;

    return 0;
}

