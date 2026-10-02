#include <iostream>
#include <vector>
using namespace std;

class Item {
public:
    string name;
    int quantity;
    double price;
};

double calculateTotal(const vector<Item>& cart) {
    double total = 0;

    for (auto item : cart) {
        total += item.quantity * item.price;
    }

    return total;
}
int main() {
    vector<Item> cart = {
        {"Laptop", 1, 50000},
        {"Mouse", 2, 800},
        {"Keyboard", 1, 1500}
    };

    cout << "Total Payable = Rs. "
         << calculateTotal(cart);

    return 0;
}