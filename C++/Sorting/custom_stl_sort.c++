#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

struct Point {
    int x;
    int y;
};

bool x_cord_comp(Point p1, Point p2) {
    return p1.x < p2.x;
}

int main() {
    vector<Point> v = {{3, 5}, {2, 6}, {7, 1}};
    sort(v.begin(), v.end(), x_cord_comp);
    for (Point p: v) {
        cout << "x: " << p.x << " " << "y: " << p.y << endl;
    }
    cout << endl;
    return 0;
}
