#include <iostream>
#include <algorithm>
#include <vector>
#include <climits>

using namespace std;

/* Time  Complexity: O(n2)
 * Space Complexity: O(n) */

void selectSortNaive(int arr[], int n) {
    int temp[n];

    for (int i = 0; i < n; i++) {
        int min_idx = 0;
        for (int j = 1; j < n; j++) {
            if (arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }
        temp[i] = arr[min_idx];
        arr[min_idx] = INT_MAX;
    }

    for (int i = 0; i < n; i++) {
        arr[i] = temp[i];
    }
    return;
}


/* Time  Complexity: O(n2)
 * Space Complexity: O(1) */

void selectSortInPlace(vector<int> &v) {
    int n = v.size();
    for (int i = 0; i < n - 1; i++) {
        int min_idx = i;
        for (int j = i + 1; j < n; j++) {
            if (v[j] < v[min_idx]) {
                min_idx = j;
            }
        }
        swap(v[i], v[min_idx]);
    }
    return;
}


int main() {
    int v1[] = {2, 43, 98, 46, 1, 70, 38, 4};
    cout << "unsorted vector: " << endl;
    for (int x: v1) {
        cout << x << " ";
    }
    cout << endl;

    selectSortNaive(v1, 8);

    cout << "sorted vector: " << endl;
    for (int x: v1) {
        cout << x << " ";
    }
    cout << endl;

    vector<int> v2 = {92, 3, 29, 6, 11, 7, 38, 74};
    cout << "unsorted vector: " << endl;
    for (int x: v2) {
        cout << x << " ";
    }
    cout << endl;

    selectSortInPlace(v2);

    cout << "sorted vector: " << endl;
    for (int x: v2) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
