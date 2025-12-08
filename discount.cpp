#include <iostream>
using namespace std;

int main()
{
    double purchase_amount;
    double discount_percent = 0;
    double discount_amount;
    double final_price;

    cout << "Purchase Discount Calculator" << endl;
    cout << "============================" << endl;
    cout << "enter purchase amount: ";
    cin >> purchase_amount;

    if (purchase_amount > 1000)
    {
        discount_percent = 5;
    }
    else if (purchase_amount > 500)
    {
        discount_percent = 3;
    }
    else
    {
        discount_percent = 0;
    }

    discount_amount = purchase_amount * discount_percent / 100;
    final_price = purchase_amount - discount_amount;

    cout << "\n--- Purchase Details ---" << endl;
    cout << "original amount: " << purchase_amount << " UAH" << endl;

    if (discount_percent > 0)
    {
        cout << "discount: " << discount_percent << "%" << endl;
        cout << "discount amount: " << discount_amount << " UAH" << endl;
        cout << "final price: " << final_price << " UAH" << endl;
        cout << "saved: " << discount_amount << " UAH" << endl;
    }
    else
    {
        cout << "no discount applied" << endl;
        cout << "final price: " << final_price << " UAH" << endl;
    }

    return 0;
}