#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

class Item {
public:
    string name;
    int quantity;
    double price;
};

void displayCart(const vector<Item>& cart) {
    cout << left << setw(15) << "Name"
         << setw(10) << "Quantity"
         << setw(10) << "Price" << endl;

    for (auto item : cart) {
        cout << left << setw(15) << item.name
             << setw(10) << item.quantity
             << setw(10) << item.price << endl;
    }
}
int main() {
    vector<Item> cart = {
        {"Laptop", 1, 50000},
        {"Mouse", 2, 800},
        {"Keyboard", 1, 1500}
    };

    displayCart(cart);

    return 0;
}