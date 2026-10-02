#include <iostream>
#include <vector>
using namespace std;
class Item {
public:
    string name;
    int quantity;
    double price;
};
Item findMostExpensiveItem(const vector<Item>& cart) {
    Item maxItem = cart[0];

    for (auto item : cart) {
        if (item.price > maxItem.price) {
            maxItem = item;
        }
    }

    return maxItem;
}
int main() {
    vector<Item> cart = {
        {"Laptop", 1, 50000},
        {"Mouse", 2, 800},
        {"Keyboard", 1, 1500}
    };

    Item item = findMostExpensiveItem(cart);

    cout << "Most Expensive Item: " << item.name << endl;
    cout << "Price: Rs. " << item.price;

    return 0;
}