#include <iostream>
#include <iomanip> // For std::setw and std::setprecision

using namespace std;

class Product {
private:
    string name;
    int quantity;
    double price;

public:
    // Constructor to initialize product details
    Product(string n, int q, double p) : name(n), quantity(q), price(p) {}

    // Getter functions to access private members
    string getName() const { return name; }
    int getQuantity() const { return quantity; }
    double getPrice() const { return price; }

    // Function to calculate the total price for this product
    double getTotal() const { return quantity * price; }
};

class Invoice {
private:
    Product products[5];
    int size;

public:
    // Constructor to initialize products and size
    Invoice(const Product p[], int s) : size(s) {
        for (int i = 0; i < size; ++i) {
            products[i] = p[i];
        }
    }

    // Function to print the invoice
    void print() const {
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
            double productTotal = products[i].getTotal();
            cout << left << setw(20) << products[i].getName()
                 << setw(10) << products[i].getQuantity()
                 << setw(10) << products[i].getPrice()
                 << setw(12) << productTotal << endl;
            total += productTotal;
        }
        
        cout << "------------------------------\n";
        cout << left << setw(40) << "Total Amount"
             << setw(12) << total << endl;
        cout << "------------------------------\n";
    }
};

int main() {
    // Define 5 products
    Product products[5] = {
        Product("Product A", 10, 2.99),
        Product("Product B", 5, 3.99),
        Product("Product C", 20, 1.49),
        Product("Product D", 7, 5.99),
        Product("Product E", 15, 0.99)
    };
    
    // Create an invoice with the products
    Invoice invoice(products, 5);
    
    // Print the invoice
    invoice.print();
    
    return 0;
}

