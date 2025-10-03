#include <iostream>
#include <cmath>
using namespace std;

//Problem 1
// double product(double a, double b) {
//     return a * b;
// }
//
// int main() {
//     double x, y;
//     cin >> x >> y;
//     cout << product(x, y) << endl;
//     return 0;
// }

//Problem 2
// double acc(double x, double y, double z)
// {
//     return (x-y)/z;
// }
//
// int main()
// {
//     double v2, v1, t;
//     cin >> v1 >> v2 >> t;
//     cout << acc(v1, v2, t) << endl;
//     return 0;
// }

//Problem 3
// void fun(double r) {
//     double circumference = 2 * 3.1415 * r;
//     double area = 3.1415 * r * r;
//     cout << "Circumference: " << circumference << endl;
//     cout << "Area: " << area << endl;
// }
//
// int main() {
//     double radius;
//     cin >> radius;
//     fun(radius);
//     return 0;
// }

//Problem 4
// void fun(double r) {
//     double circumference = 2 * 3.14 * r;
//     double area = 3.14 * r * r;
//     cout << "Circumference: " << circumference << endl;
//     cout << "Area: " << area << endl;
// }
//
// void fun(double a, double b) {
//     double perimeter = 2 * (a + b);
//     double area = a * b;
//     cout << "Perimeter: " << perimeter << endl;
//     cout << "Area: " << area << endl;
// }
//
// int main() {
//     double a, b;
//     cin >> a >> b;
//     fun(a, b);
//     return 0;
// }

//Problem 5
// void swapNums(int &x, int &y) {
//     x = x + y;
//     y = x - y;
//     x = x - y;
// }
//
// int main() {
//     int a, b;
//     cin >> a >> b;
//     swapNums(a, b);
//     cout << a << " " << b << endl;
//     return 0;
// }

//Problem 6
// int Factorial(int n = 1) {
//     int result = 1;
//     for(int i = 1; i <= n; i++) result *= i;
//     return result;
// }
// int main() {
//     int n;
//     cin >> n;
//     cout << Factorial(n) << endl;
//     cout << Factorial() << endl;
//     return 0;
// }

//Problem 7
// int gcd(int num1, int num2) {
//     while(num2 != 0) {
//         int temp = num2;
//         num2 = num1 % num2;
//         num1 = temp;
//     }
//     return num1;
// }
// int main() {
//     int a, b;
//     cin >> a >> b;
//     cout << gcd(a, b) << endl;
//     return 0;
// }

//Problem 8
// int maximum(int a, int b, int c) {
//     return (a > b && a > c) ? a : (b > c ? b : c);
// }
//
// int minimum(int a, int b, int c) {
//     return (a < b && a < c) ? a : (b < c ? b : c);
// }
//
// int main() {
//     int a, b, c;
//     cin >> a >> b >> c;
//     cout << "Maximum: " << maximum(a, b, c) << endl;
//     cout << "Minimum: " << minimum(a, b, c) << endl;
//     return 0;
// }

//Problem 9
// double sum(double a, double b) { return a + b; }
// double subtract(double a, double b) { return a - b; }
// double product(double a, double b) { return a * b; }
// double division(double a, double b) { return a / b; }
//
// int main() {
//     double x, y;
//     cin >> x >> y;
//     cout << sum(x, y) << endl;
//     cout << subtract(x, y) << endl;
//     cout << product(x, y) << endl;
//     cout << division(x, y) << endl;
//     return 0;
// }

//Problem 10
// int getTriangularNumber(int n) {
//     return n * (n + 1) / 2;
// }
//
// int main() {
//     for(int i = 1; i <= 75; i++) {
//         cout << getTriangularNumber(i) << "\t";
//         if(i % 5 == 0)
//             cout << endl;
//     }
//     return 0;
// }

//Problem 11
// void displayEven(int number) {
//     while (number > 0)
//     {
//         int last = number % 10;
//         number = number / 10;
//         if (last % 2 == 0)
//             cout << last << endl;
//     }
// }
//
// int main() {
//     int n;
//     cin >> n;
//     displayEven(n);
//     return 0;
// }

//Problem 12
// int cubeOfDigits(int number) {
//     int sum = 0;
//     while(number > 0) {
//         int d = number % 10;
//         sum += d * d * d;
//         number /= 10;
//     }
//     return sum;
// }
//
// void isArmstrong(int sum, int number) {
//     if(sum == number) cout << number << " is an Armstrong number" << endl;
//     else cout << number << " is not an Armstrong number" << endl;
// }
//
// int main() {
//     int n;
//     cin >> n;
//     int s = cubeOfDigits(n);
//     isArmstrong(s, n);
//     return 0;
// }

//Problem 13
// int numberOfDaysInFebruary(int year) {
//     if((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) return 29;
//     return 28;
// }
//
// int main() {
//     for(int y = 1985; y <= 1993; y++) {
//         cout << y << ": " << numberOfDaysInFebruary(y) << " days" << endl;
//     }
//     return 0;
// }

//Problem 14
// double futureInvestmentValue(double investmentAmount, double monthlyInterestRate, int years) {
//     return investmentAmount * pow(1 + monthlyInterestRate, years * 12);
// }
//
// int main() {
//     double amount, annualRate;
//     cin >> amount >> annualRate;
//     double monthlyRate = annualRate / 12.0;
//     for(int y = 1; y <= 30; y++) {
//         cout << y << " year(s): " << futureInvestmentValue(amount, monthlyRate, y) << endl;
//     }
//     return 0;
// }

//Problem 15
void printASCII(char ch1, char ch2, int numberPerLine) {
    int count = 0;
    for(char c = ch1; c <= ch2; c++) {
        cout << c << ":" << (int)c << "\t";
        count++;
        if(count % numberPerLine == 0)
            cout << endl;
    }
}

int main() {
    printASCII('a', 'm', 6);
    return 0;
}