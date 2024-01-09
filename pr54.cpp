#include <iostream>
#include <string>
#include <vector>
using namespace std;

class conversion {
public:
    double INR_USD(double amount){
        return amount * 0.012;
    }
    double INR_PND(double amount){
        return amount * 0.0095;
    }
    double INR_JYN(double amount){
        return amount * 1.75;
    }
    double INR_EUR(double amount){
        return amount * 0.011;
    }
    double INR_DNR(double amount){
        return amount * 0.0037;
    }
    double INR_DRM(double amount){
        return amount * 0.044;
    }
};

int main() {  
    conversion convert;
    double amount; 
    int choice;
    string flag;

    do {
        cout << "Enter the amount in INR: ";
        cin >> amount;

        cout << endl<< "Select the currency from the menu below in which you want to convert INR : ";
        cout << endl << "1. US Dollar";
        cout << endl << "2. Pound Sterling";
        cout << endl << "3. Japan Yen";
        cout << endl << "4. Euro";
        cout << endl << "5. Kuwaiti Dinar";
        cout << endl << "6. Dirham";
        cout << endl;
        cin >>  choice; 

        if (choice == 1) {
            cout << endl << amount << " INR is equal to "<< convert.INR_USD(amount) << " US DOLLAR";
        } else if (choice == 2) {
            cout << endl << amount << " INR is equal to "<< convert.INR_PND(amount) << " Pound Sterling";
        } else if (choice == 3) {
            cout << endl << amount << " INR is equal to "<< convert.INR_JYN(amount) << " Japan Yen";
        } else if (choice == 4) {
            cout << endl << amount << " INR is equal to "<< convert.INR_EUR(amount) << " EURO";
        } else if (choice == 5) {
            cout << endl << amount << " INR is equal to "<< convert.INR_DNR(amount) << " Kuwaiti Dinar";
        } else if (choice == 6) {
            cout << endl << amount << " INR is equal to "<< convert.INR_DRM(amount) << " Dirham";
        } else {
            cout << "Please select appropriate currency from the menu list. ";
        }

        cout << endl << "Do you want to convert another amount? (y/n): ";
        cin >> flag;
    } while (flag == "y");

    return 0;
}

