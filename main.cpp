#include <iostream>
using namespace std;

//Problem 5
// double balance = 500.0;
//
// void deposit(double amount) {
//     balance += amount;
//     cout << "Deposited: $" << amount << endl;
// }
//
// void withdraw(double amount) {
//     if (amount > balance)
//         cout << "Insufficient Funds!" << endl;
//     else {
//         balance -= amount;
//         cout << "Withdrawn: $" << amount << endl;
//     }
// }
//
// void checkBalance() {
//     cout << "Current Balance: $" << balance << endl;
// }
//
// int main() {
//     char choice;
//     double amount;
//     do {
//         cout << "\n___ Banking System ___\n";
//         cout << "1. Deposit\n2. Withdraw\n3. Check Balance\n4. Exit\n";
//         cout << "Enter your choice: ";
//         cin >> choice;
//
//         switch (choice) {
//             case '1':
//                 cout << "Enter amount to deposit: ";
//                 cin >> amount;
//                 deposit(amount);
//                 break;
//             case '2':
//                 cout << "Enter amount to withdraw: ";
//                 cin >> amount;
//                 withdraw(amount);
//                 break;
//             case '3':
//                 checkBalance();
//                 break;
//             case '4':
//                 cout << "Thank you for banking with us!\n";
//                 break;
//             default:
//                 cout << "Please input correctly!\n";
//         }
//     } while (choice != '4');
//     return 0;
// }

//Problem 6
// double calculateTotal(int tickets, double pricePerTicket) {
//     return tickets * pricePerTicket;
// }
//
// int main() {
//     int  tickets;
//     char choice, secondChoice;
//     double total;
//     do {
//         cout << " ___ Movie Ticket Booking System ___  " << endl;
//         cout << " List of movies:  " << endl;
//         cout << " 1. The Shawshank Redemption -- $30." << endl;
//         cout << " 2. The Godfather -- $25." << endl;
//         cout << " 3. The Dark Knight -- $20." << endl;
//         cout << " 4. Exit." << endl;
//         cout << " Select your favourite movie to watch:  ";
//         cin >> choice;
//         switch (choice) {
//             case '1':
//                 cout << " Great choice!" << endl;
//                 cout << " Enter the number of tickets: ";
//                 cin >> tickets;
//                 cout << "Total Price: $" << calculateTotal(tickets, 30) << endl;
//                 cout << "Are you sure to continue (y for YES): ";
//                 cin >> secondChoice;
//                 if (secondChoice == 'y') {
//                     cout << "Movie booked successfully!" << endl;
//                 }
//                 else if (secondChoice == 'n') {
//                     cout << "Movie booking failed!" << endl;
//                 }
//                 else {}
//                 break;
//             case '2':
//                 cout << " Great choice!" << endl;
//                 cout << " Enter the number of tickets: ";
//                 cin >> tickets;
//                 cout << "Total Price: $" << calculateTotal(tickets, 25) << endl;
//                 cout << "Are you sure to continue (y for YES): ";
//                 cin >> secondChoice;
//                 if (secondChoice == 'y') {
//                     cout << "Movie booked successfully!" << endl;
//                 }
//                 else if (secondChoice == 'n') {
//                     cout << "Movie booking failed!" << endl;
//                 }
//                 else {}
//                 break;
//             case '3':
//                 cout << " Great choice!" << endl;
//                 cout << " Enter the number of tickets: ";
//                 cin >> tickets;
//                 cout << "Total Price: $" << calculateTotal(tickets, 20) << endl;
//                 cout << "Are you sure to continue (y for YES): ";
//                 cin >> secondChoice;
//                 if (secondChoice == 'y') {
//                     cout << "Movie booked successfully!" << endl;
//                 }
//                 else {
//                     cout << "Movie booking failed!" << endl;
//                 }
//                 break;
//             case '4':
//                 cout << " Thank you for booking! ";
//                 break;
//             default:
//                 cout << " Please try again! ";
//         }
//     }
//     while (choice != '4');
//     return 0;
// }

//Problem 7
// int calculateFee(int hours) {
//     if (hours <= 2)
//         return 0;
//     else if (hours <= 5)
//         return (hours - 2) * 2;
//     else
//         return (3 * 2) + ((hours - 5) * 5);
// }
//
// int main() {
//     int hours;
//     char again;
//     do {
//         cout << "\nEnter number of hours parked: ";
//         cin >> hours;
//         cout << "Fee: $" << calculateFee(hours) << endl;
//
//         cout << "Another customer? (y for adding another user): ";
//         cin >> again;
//     } while (again == 'y' || again == 'Y');
//     return 0;
// }

//Problem 8
double calculateBill(int quantity, double price) {
    return quantity * price;
}

int main() {
    int choice, quantity;
    double total = 0;
    char again;

    do {
        cout << "\n___ Restaurant Menu ___\n";
        cout << "1. Pizza ($10)\n2. Pepsi ($2)\n3. Souce ($1)\n4. Exit\n";
        cout << "Select item: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter quantity: ";
                cin >> quantity;
                total += calculateBill(quantity, 10);
                cout << quantity << "xPizza" << " = $" << (quantity * 10) << endl;
                break;
            case 2:
                cout << "Enter quantity: ";
                cin >> quantity;
                total += calculateBill(quantity, 2);
                cout << quantity << "xPepsi" << " = $" << (quantity * 2) << endl;
                break;
            case 3:
                cout << "Enter quantity: ";
                cin >> quantity;
                total += calculateBill(quantity, 1);
                cout << quantity << "xSouce" << " = $" << (quantity * 1) << endl;
                break;
            case 4:
                cout << "Final Total Bill: $" << total << endl;
                break;
            default:
                cout << "Please try again!\n";
        }

        if (choice != 4) {
            cout << "Do you want to order more? (y for Yes): ";
            cin >> again;
        } else break;

    } while (again == 'y' || again == 'Y');

    cout << "\nThank you! Your total bill is $" << total << endl;
    return 0;
}


