#include <iostream>
#include <algorithm>
using namespace std;

void findIntersection(int* a, int* b, int n, int m) {
    int i = 0, j = 0;

    while (i < n && j < m) {
        if (i > 0 && a[i] == a[i - 1]) {
            i++;
            continue;
        }
        if (a[i] < b[j]) i++;
        else if (a[i] > b[j]) j++;
        else {
            cout << a[i] << " ";
            i++;
            j++;
        }
    }
    cout << endl;
    return;
}

int main() {
    int n = 7, m = 5;
    int a[] = {1, 5, 5, 7, 8, 9, 9};
    int b[] = {5, 6, 7, 9, 11};

    cout << "Array 1: " << endl;
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    } 
    cout << endl;

    cout << "Array 2: " << endl;
    for (int i = 0; i < m; i++) {
        cout << b[i] << " ";
    } 
    cout << endl;

    cout << "Intersection: " << endl;
    findIntersection(a, b, n, m);
    
    return 0;
}
