#include <iostream>
#include <cmath>
using namespace std;

//Problem 12
// int main()
// {
//     int angle1, angle2, angle3;
//     cin >> angle1 >> angle2 >> angle3;
//     if (angle1 + angle2 + angle3 == 180)
//         cout<<"the triangle is valid!"<<endl;
//     else
//         cout<<"the triangle is not valid!"<<endl;
//     return 0;
// }

//Problem 13
// int main()
// {
//     double a, b, c;
//     cin >> a >> b >> c;
//
//     double discriminant = (b * b) - (4 * a * c);
//
//     if (discriminant > 0) {
//         double root1 = (-b + sqrt(discriminant)) / (2 * a);
//         double root2 = (-b - sqrt(discriminant)) / (2 * a);
//         cout << "x1 = " << root1 << endl;
//         cout << "x2 = " << root2 << endl;
//     }
//     else if (discriminant == 0) {
//         double root = -b / (2 * a);
//         cout << "Two equal roots : x1, x2 = " << root << endl;
//     }
//     else {
//         cout << "No real roots." << endl;
//     }
//     return 0;
// }

//Problem 14
// int main() {
//     char char1;
//     cin >> char1;
//
//     if (char1 >= 'a' && char1 <= 'z') {
//         cout << "Lowercase alphabet";
//     }
//     else if (char1 >= 'A' && char1 <= 'Z') {
//         cout << "Uppercase alphabet";
//     }
//     else {
//         cout << "It is not an alphabet";
//     }
//     return 0;
// }

//Problem 15
// int main()
// {
//     double weight1, price1, weight2, price2;
//     cout << "Enter weight and price for package1: ";
//     cin >> weight1 >> price1;
//     cout << "Enter weight and price for package2: ";
//     cin >> weight2 >> price2;
//
//     double cost1 = price1 / weight1;
//     double cost2 = price2 / weight2;
//
//     if (cost1 < cost2)
//         cout << "Package 1 has a better price";
//     else if (cost2 < cost1)
//         cout << "Package 2 has a better price";
//     else
//         cout << "Two packages have the same price";
//     return 0;
// }

//Problem 16
// int main()
// {
//     int number;
//     cin >> number;
//
//     int first = number / 100;       // first digit
//     int last = number % 10;         // last digit
//
//     if (first == last)
//         cout << number << " is a palindrome number";
//     else
//         cout << number << " is not a palindrome number";
//     return 0;
// }

//Problem 17
// int main()
// {
//     char command;
//     cin >> command;
//     if (command == 'u')
//         cout << "Assalomu Aleykum!" << endl;
//     else if (command == 'e')
//         cout << "Hello!" << endl;
//     else if (command == 'r')
//         cout << "Привет!" << endl;
//     else if (command == 'g')
//         cout << "Hallo" << endl;
//     else
//         cout << "I do not know this language!" << endl;
//     return 0;
// }

// Problem No Number
// int main()
// {
//     double gpa;
//     cin >> gpa;
//
//     int range = (int)(gpa * 10);
//
//     switch (range) {
//     case 40 ... 45:
//         cout << " You got 80% scholarship!";
//         break;
//     case 35 ... 39:
//         cout << "You got 60% scholarship!";
//         break;
//     case 30 ... 34:
//         cout << "You got 50% scholarship!";
//         break;
//     default:
//         if (gpa >= 0 && gpa < 3.0)
//             cout << "You got No scholarship";
//         else
//             cout << "Invalid GPA";
//     }
//     return 0;
// }

//Problem 18
// int main()
// {
//     double x, y;
//     cin >> x >> y;
//
//     double distance = sqrt(x * x + y * y);
//
//     if (distance <= 10)
//         cout << "Point (" << x << ", " << y << ") is inside the circle";
//     else
//         cout << "Point (" << x << ", " << y << ") is outside the circle";
//
//     return 0;
// }

//Problem 19
// int main() {
//     int today, elapsedDays;
//     cout << "Enter today's day: ";
//     cin >> today;
//     cout << "Enter the number of days elapsed since today: ";
//     cin >> elapsedDays;
//
//     int futureDay = (today + elapsedDays) % 7;
//
//     cout << "Today is ";
//     switch (today) {
//     case 0: cout << "Sunday"; break;
//     case 1: cout << "Monday"; break;
//     case 2: cout << "Tuesday"; break;
//     case 3: cout << "Wednesday"; break;
//     case 4: cout << "Thursday"; break;
//     case 5: cout << "Friday"; break;
//     case 6: cout << "Saturday"; break;
//     }
//
//     cout << " and the future day is ";
//     switch (futureDay) {
//     case 0: cout << "Sunday"; break;
//     case 1: cout << "Monday"; break;
//     case 2: cout << "Tuesday"; break;
//     case 3: cout << "Wednesday"; break;
//     case 4: cout << "Thursday"; break;
//     case 5: cout << "Friday"; break;
//     case 6: cout << "Saturday"; break;
//     }
//
//     return 0;
// }

//Problem 20
// int main()
// {
//     double weight;
//     cin >> weight;
//
//     if (weight <= 0)
//         cout << "Invalid input";
//     else if (weight <= 1)
//         cout << 3500;
//     else if (weight <= 3)
//         cout << 5500;
//     else if (weight <= 10)
//         cout << 8500;
//     else if (weight <= 20)
//         cout << 10500;
//     else
//         cout << "The package cannot be shipped";
//     return 0;
// }

//Problem 21
int main()
{
    int month;
    cout << "Enter month number (1-12): ";
    cin >> month;

    switch(month) {
    case 1:
        cout << "In March there is: " << endl;
        cout << "- New Year, 1 January." << endl;
        break;
    case 2:
        cout << "In February, April,June, July, August, November there is no holidays. There are Ramadan Hayit and Kurban Hayit but their dates change." << endl;
        break;
    case 3:
        cout << "In March there is:\n";
        cout << "- International Women’s Day, 8 March\n";
        cout << "- Navruz, 21 March\n";
        break;
    case 4:
        cout << "In February, April, June, July, August, November there is no holidays. There are Ramadan Hayit and Kurban Hayit but their dates change." << endl;
        break;
    case 5:
        cout << "In May there is:\n";
        cout << "- Memorial Day, 9 May\n";
        break;
    case 6:
        cout << "In February, April,June, July, August, November there is no holidays. There are Ramadan Hayit and Kurban Hayit but their dates change." << endl;
        break;
    case 7:
        cout << "In February, April,June, July, August, November there is no holidays. There are Ramadan Hayit and Kurban Hayit but their dates change." << endl;
        break;
    case 8:
        cout << "In February, April,June, July, August, November there is no holidays. There are Ramadan Hayit and Kurban Hayit but their dates change." << endl;
        break;
    case 9:
        cout << "In September there is:\n";
        cout << "- Independence Day, 1 September\n";
        break;
    case 10:
        cout << "In October there is:\n";
        cout << "- Teachers and Mentors Day, 1 October\n";
        break;
    case 11:
        cout << "In February, April,June, July, August, November there is no holidays. There are Ramadan Hayit and Kurban Hayit but their dates change." << endl;
        break;
    case 12:
        cout << "In December there is:\n";
        cout << "- Constitution Day, 8 December\n";
        break;
    default:
        cout << "Invalid month number!" << endl;
    }
    return 0;
}
