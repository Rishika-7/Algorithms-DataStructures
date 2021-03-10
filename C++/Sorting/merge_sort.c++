#include <iostream>
using namespace std;

void merge(int arr[], int lo, int mid, int hi){
    int n1 = mid - lo + 1;
    int n2 = hi - mid;
    int left[n1];
    int right[n2];

    for (int i = 0; i < n1; i++) left[i] = arr[lo + i];
    for (int i = 0; i < n2; i++) right[i] = arr[mid + 1 + i];

    int i = 0, j = 0, k = lo;

    while (i < n1 && j < n2) {
        if (left[i] <= right[j]) {
            arr[k++] = left[i++];
        } else {
            arr[k++] = right[j++];
        }
    }

    while (i < n1) {
        arr[k++] = left[i++];
    }

    while (j < n2) {
        arr[k++] = right[j++];
    }

    return;
}

void mergeSort(int arr[], int lo, int hi){
    if (hi > lo) {
        int mid = lo + (hi - lo) / 2;
        mergeSort(arr, lo, mid);
        mergeSort(arr, mid + 1, hi);
        merge(arr, lo, mid, hi);
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

    mergeSort(arr, 0, 6);

    cout << "sorted array: " << endl;
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
