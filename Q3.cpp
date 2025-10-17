#include <iostream>
using namespace std;

struct Point {
    float x;
    float y;
};

int main() {
    Point points[7];

    for (int i = 0; i < 7; ++i) {
        cout << "Enter x and y for point " << i + 1 << ": ";
        cin >> points[i].x >> points[i].y;
    }
    int c= 0;
    for (int i = 0; i < 7; ++i) {
        if (points[i].x > 0 && points[i].y > 0) {
            ++c;
        }
    }
    cout << "Number of points in the first quadrant: " << c << endl;

    return 0;
}


