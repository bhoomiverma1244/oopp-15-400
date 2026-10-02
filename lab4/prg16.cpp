#include <iostream>
#include <vector>
using namespace std;
class Item {
public:
    string name;
    int quantity;
    double price;
};
void applyDiscount(vector<Item>& cart) {
    for (auto& item : cart) {
        if (item.price > 1000) {
            item.price = item.price * 0.90;
        }
    }
}
int main() {
    vector<Item> cart = {
        {"Laptop", 1, 50000},
        {"Mouse", 2, 800},
        {"Keyboard", 1, 1500}
    };
    applyDiscount(cart);

    for (auto item : cart) {
        cout << item.name << " : Rs. "
             << item.price << endl;
    }

    return 0;
}