#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void insertSort(int arr[], int n) {
    for (int i = 1; i < n; ++i) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
    return;
}

int main() {

    int n = 7;
    int arr[] = {1 , 5, 98, 73, 64, 29, 11};

    cout << "unsorted array: " << endl;
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    insertSort(arr, n);

    cout << "sorted array: " << endl;
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
