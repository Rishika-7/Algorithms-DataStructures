#include <iostream>
using namespace std;


int countInvAndMerge(int arr[], int lo, int mid, int hi) {
    int inv = 0;
    int n1 = mid - lo + 1;
    int n2 = hi - mid;
    int left[n1];
    int right[n2];

    for (int i = 0; i < n1; i++) {
        left[i] = arr[lo + i];
    }
    for (int i = 0; i < n2; i++) {
        right[i] = arr[mid + 1 + i];
    }

    int i = 0, j = 0, k = lo;

    while (i < n1 && j < n2) {
        if (left[i] <= right[j]) {
            arr[k] = left[i];
            i++;
        } else {
            arr[k] = right[j];
            j++;
            inv += n1 - i;
        }
        k++;
    }

    while (i < n1) arr[k++] = left[i++];
    while (j < n2) arr[k++] = right[j++];

    return inv;
}


int countInversions(int arr[], int lo, int hi) {
    int inv = 0;
    if (hi > lo) {
        int mid = lo + (hi - lo) / 2;
        inv += countInversions(arr, lo, mid);
        inv += countInversions(arr, mid + 1, hi);
        inv += countInvAndMerge(arr, lo, mid, hi);
    }
    return inv;
}


int main() {
    int inversions = 0;
    int arr[] = {8, 8, 8, 8, 8, 8, 8, 8, 8};

    for (int x: arr) {
        cout << x << " ";
    }
    cout << endl;

    cout << "Number of Inversions in this array: " << " ";
    inversions = countInversions(arr, 0, 8);
    cout << inversions << endl;

    return 0;
}
