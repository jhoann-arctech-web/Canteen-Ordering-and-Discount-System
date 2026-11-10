#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
    int choice, quantity;
    string food;
    double price = 0, subtotal, discount = 0, total;

    cout << "========== SCHOOL CANTEEN ==========\n";
    cout << "1. Burger        - PHP 50\n";
    cout << "2. Sandwich      - PHP 40\n";
    cout << "3. Fried Rice    - PHP 65\n";
    cout << "4. Spaghetti     - PHP 55\n";
    cout << "====================================\n\n";

    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice) {
        case 1:
            food = "Burger";
            price = 50;
            break;
        case 2:
            food = "Sandwich";
            price = 40;
            break;
        case 3:
            food = "Fried Rice";
            price = 65;
            break;
        case 4:
            food = "Spaghetti";
            price = 55;
            break;
        default:
            cout << "Invalid menu selection.\n";
            return 0;
    }

    cout << "Enter quantity: ";
    cin >> quantity;

    if (quantity > 0) {
        subtotal = price * quantity;

        if (subtotal >= 300) {
            discount = subtotal * 0.10;
        } else {
            discount = 0;
        }

        total = subtotal - discount;

        cout << fixed << setprecision(2);

        cout << "\n========== ORDER SUMMARY ==========\n";
        cout << "Food: " << food << "\n";
        cout << "Price: PHP " << price << "\n";
        cout << "Quantity: " << quantity << "\n";
        cout << "Subtotal: PHP " << subtotal << "\n";
        cout << "Discount: PHP " << discount << "\n";
        cout << "Total Amount: PHP " << total << "\n";
        cout << "====================================\n";

    } else {
        cout << "Invalid quantity. Quantity must be greater than zero.\n";
    }

    return 0;
}
