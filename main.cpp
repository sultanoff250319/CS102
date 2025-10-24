#include <iostream>
#include <cmath>
using namespace std;

//Problem 1
// int power(int x, int y) {
//     if (y==0)
//         return 1;
//     else
//         return x * power(x, y-1);
// }
// int main() {
//     int x, y;
//     cin >> x >> y;
//     cout << power(x, y);
//     return 0;
// }

//Problem 2
// int reverse(int x, int rev = 0) {
//     if (x == 0) {
//         return rev;
//     }
//     else
//         return reverse(x / 10, rev * 10 + x % 10);
// }
// int main() {
//     int x;
//     cin >> x;
//     cout << reverse(x) << endl;
//     return 0;
// }

//Problem 3
// int reverseNum(int n, int rev = 0) {
//     if (n == 0)
//         return rev;
//     return reverseNum(n / 10, rev * 10 + n % 10);
// }
//
// bool isPalindrome(int n) {
//     return n == reverseNum(n);
// }
//
// int main() {
//     int n;
//     cin >> n;
//     cout << (isPalindrome(n));
//     return 0;
// }

//Problem 4
// bool isPrimeHelper(int n, int i) {
//     if (i > sqrt(n))
//         return true;
//     if (n % i == 0)
//         return false;
//     return isPrimeHelper(n, i + 1);
// }
//
// bool isPrime(int n) {
//     if (n <= 1)
//         return false;
//     return isPrimeHelper(n, 2);
// }
//
// int main() {
//     int n;
//     cin >> n;
//     cout << (isPrime(n));
//     return 0;
// }

//Problem 6
// int countEvenDigits(int n) {
//     if (n == 0)
//         return 0;
//     int digit = n % 10;
//     if (digit%2 == 0) {
//         return 1 + countEvenDigits(n/10);
//     }
//     else {
//         return 0 + countEvenDigits(n/10);
//     }
// }
//
// int main() {
//     int n;
//     cin >> n;
//     cout << countEvenDigits(n) << endl;
//     return 0;
// }

//Problem 7
// bool isPowerOfTwo(int n) {
//     if (n == 1)
//         return true;
//     if (n % 2 != 0 || n == 0)
//         return false;
//     return isPowerOfTwo(n / 2);
// }
// int main() {
//     int n;
//     cin >> n;
//     cout << isPowerOfTwo(n) << endl;
//     return 0;
// }

//Problem 8
// bool isIncreasing(int n) {
//     if(n < 10)
//         return true;
//     else {
//         int last = n % 10;
//         int secondLast = (n/10) % 10;
//         if(last > secondLast)
//             return true;
//         else
//             return false;
//         return isIncreasing(n/10);
//     }
// }
// int main() {
//     int n;
//     cin >> n;
//     cout << isIncreasing(n) << endl;
// }

//Problem 9
// int countzeros(int n) {
//     if (n == 0)
//         return 0;
//     int digit = n % 10;
//     return (digit == 0 ? 1 : 0) + countzeros(n / 10);
// }
//
// int main() {
//     int n;
//     cin >> n;
//     cout << countzeros(n) << endl;
//     return 0;
// }

//Problem 10
int power(int x, int y) {
    if (y == 0)
        return 1;
    if (y%2 == 0) {
        int half = power(x, y/2);
        return half*half;
    }
    return x * power(x, y/2);
}

int main() {
    int x, y;
    cin >> x >> y;
    cout << power(x, y);
    return 0;
}