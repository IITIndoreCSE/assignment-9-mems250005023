#include <iostream>
using namespace std;

struct Color {
    int red;
    int green;
    int blue;
};

int main() {
    // Initialize array of 5 Color structures with sample RGB values
    Color colors[5] = {
        {100, 150, 200},
        {50, 75, 125},
        {0, 0, 0},
        {255, 255, 255},
        {123, 234, 45}
    };

    // Invert colors for the first 3 elements
    for (int i = 0; i < 3; ++i) {
        colors[i].red = 255 - colors[i].red;
        colors[i].green = 255 - colors[i].green;
        colors[i].blue = 255 - colors[i].blue;
    }

    // Display the RGB values of all 5 colors
    for (int i = 0; i < 5; ++i) {
        cout << "Color " << i + 1 << ": "
             << "Red = " << colors[i].red << ", "
             << "Green = " << colors[i].green << ", "
             << "Blue = " << colors[i].blue << endl;
    }

    return 0;
}
