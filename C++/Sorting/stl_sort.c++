#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    cout << "Array Sort" << endl;
    int arr[] = {5, 3, 78, 64};
    int n = sizeof(arr) / sizeof(arr[0]);
    sort(arr, arr + n);
    for (int x: arr) {
        cout << x << " ";
    }
    cout << endl;
    sort(arr, arr + n, greater<int>());
    for (int x: arr) {
        cout << x << " ";
    }
    cout << endl;
    
    cout << "Vector Sort" << endl;
    vector<int> v = {9, 63, 74, 24};
    sort(v.begin(), v.end());
    for (int x: v) {
        cout << x << " ";
    }
    cout << endl;
    sort(v.begin(), v.end(), greater<int>());
    for(int x: v) {
        cout << x << " ";
    } 
    cout << endl;
    return 0;
}
