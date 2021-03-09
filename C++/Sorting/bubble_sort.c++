#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void bubbleSort(vector<int> &v) {
    int n = v.size();

    for (int i = 0; i < n - 1; i++) {
        bool swapped = false;
        for (int j = 0; j < n - i - 1; j++) {
            if (v[j] > v[j + 1]) {
                swap(v[j], v[j + 1]);
                swapped = true;
            }
        }
        if (swapped == false) break;
    }
    return;
}


int main() {
    vector<int> v = {2, 5, 6, 78, 42, 31, 4};
    for (int x: v) {
        cout << x << "  ";
    }
    cout << endl;

    bubbleSort(v);

    for (int x: v) {
        cout << x << "  ";
    }
    cout << endl;
    return 0;
}
