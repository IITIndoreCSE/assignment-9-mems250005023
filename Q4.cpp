#include <iostream>
#include <string>
using namespace std;

struct SalesRecord {
    string month;
    float amount;
};

int main() {
    SalesRecord sales[12];
    for (int i = 0; i < 12; ++i) {
        cout << "Enter month name for record " << i + 1 << ": ";
        cin >> sales[i].month;
        cout << "Enter sales amount for " << sales[i].month << ": ";
        cin >> sales[i].amount;
    }
    int maxIndex = 0, minIndex = 0;
    for (int i = 1; i < 12; ++i) {
        if (sales[i].amount > sales[maxIndex].amount) {
            maxIndex = i;
        }
        if (sales[i].amount < sales[minIndex].amount) {
            minIndex = i;
        }
    }
    cout << "\nMonth with maximum sales: " << sales[maxIndex].month 
         << " (Amount: " << sales[maxIndex].amount << ")\n";
    cout << "Month with minimum sales: " << sales[minIndex].month 
         << " (Amount: " << sales[minIndex].amount << ")\n";

    return 0;
}


