
#include <iostream>
#include <iomanip> 

using namespace std;

struct Product {
    string name;
    int quantity;
    double price;
};

void printInvoice(const Product products[], int size) {
    double total = 0.0;
    
    cout << fixed << setprecision(2); // Set decimal precision for currency formatting
    
    // Print Invoice Header
    cout << "------------------------------\n";
    cout << "          INVOICE\n";
    cout << "------------------------------\n";
    cout << left << setw(20) << "Product Name" << setw(10) << "Quantity" << setw(10) << "Price" << setw(12) << "Total" << endl;
    cout << "------------------------------\n";
    
    // Print Product Details
    for (int i = 0; i < size; ++i) {
        double productTotal = products[i].quantity * products[i].price;
        cout << left << setw(20) << products[i].name
             << setw(10) << products[i].quantity
             << setw(10) << products[i].price
             << setw(12) << productTotal << endl;
        total += productTotal;
    }
    
    cout << "------------------------------\n";
    cout << left << setw(40) << "Total Amount"
         << setw(12) << total << endl;
    cout << "------------------------------\n";
}

int main() {
    // Define 5 products
    Product products[5] = {
        {"Product A", 10, 2.99},
        {"Product B", 5, 3.99},
        {"Product C", 20, 1.49},
        {"Product D", 7, 5.99},
        {"Product E", 15, 0.99}
    };
    
    // Print the invoice
    printInvoice(products, 5);
    
    return 0;
}
