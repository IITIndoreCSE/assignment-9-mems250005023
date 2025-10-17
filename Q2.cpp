#include <iostream>
using namespace std;

struct Color {
    int red;
    int green;
    int blue;
};

int main() {
    Color colors[5] = {
        {10, 15, 20},
        {5, 7, 12},
        {90, 80, 5000},
        {25, 55, 22},
        {23, 34, 4}
    };

    for (int i = 0; i < 3; ++i) {
        colors[i].red = 255 - colors[i].red;
        colors[i].green = 255 - colors[i].green;
        colors[i].blue = 255 - colors[i].blue;
    }
      for (int i = 0; i < 3; ++i) {
          cout << "Color " << i + 1 << ": "
             << "Red = " << colors[i].red << ", "
             << "Green = " << colors[i].green <<", "
             << "Blue = "<< colors[i].blue << endl;
    }
    return 0;
}



