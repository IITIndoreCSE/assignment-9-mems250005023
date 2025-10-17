#include <iostream>
using namespace std;

struct Item {
    int id;
    float cost;
};

int main() {
    Item items[6] = {
        {1, 98.50},
        {2, 13.00},
        {3, 50.25},
        {4, 3.00},
	    {5, 86.70},
	    {6, 48.97}
    };

    cout << "Items with cost greater than 50.00:" << endl;
    for (int i = 0; i < 6; i++) {
        if (items[i].cost > 50.00) {
            cout << "Item ID: " << items[i].id << ", Cost: " << items[i].cost << endl;
        }
    }

    return 0;
}

	



