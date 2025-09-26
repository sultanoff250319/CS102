#include <iostream>
#include <cmath>
#include <unistd.h>
using namespace std;

//Problem 11
// int main() {
//     int number;
//     int positives = 0, negatives = 0, count = 0;
//     double total = 0;
//
//     cout << "Enter an integer, the input ends if it is 0: ";
//
//     while (true) {
//         cin >> number;
//
//         if (number == 0) break;
//
//         if (number > 0)
//             positives++;
//         else if (number < 0)
//             negatives++;
//
//         total += number;
//         count++;
//     }
//
//     if (count == 0) {
//         cout << "Only one 0 entered." << endl;
//     } else {
//         cout << "The number of positives is " << positives << endl;
//         cout << "The number of negatives is " << negatives << endl;
//         cout << "The total is " << total << endl;
//         cout << "The average is " << (total / count) << endl;
//     }
//
//     return 0;
// }

//Problem 12
// int main() {
//     int n;
//     cin >> n;
//
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < n; j++) {
//             cout << "*";
//         }
//         cout << endl;
//     }
//
//     return 0;
// }

//Problem 13
// int main() {
//     int n;
//     cin >> n;
//
//     for (int i = 1; i <= n; i++) {
//         for (int j = 1; j <= i; j++) {
//             cout << "*";
//         }
//         cout << endl;
//     }
//     return 0;
// }

//Problem 14
// int main() {
//     int n;
//     cin >> n;
//
//     for (int i = 1; i <= n; i++) {
//         for (int j = 1; j <= i; j++) {
//             cout << i;
//         }
//         cout << endl;
//     }
//     return 0;
// }

//Problem 15
// int main() {
//     int n;
//     cin >> n;
//     double sum = 0.0;
//     for (int i = 1; i <= n; i++) {
//         cout << "1/" << i;
//         if (i < n) cout << " + ";
//         sum += 1.0 / i;
//     }
//     cout << endl;
//     cout << "The sum is =  " << sum;
//     return 0;
// }

//Problem 16
// int main() {
//     double monthlyRent = 1000.0;
//     double yearlyRent, totalAllYears = 0.0;
//
//     for (int year = 1; year <= 5; year++) {
//         cout << "For year number " << year
//              << " rent is " << monthlyRent << endl;
//
//         yearlyRent = monthlyRent * 12;
//         cout << "The total for year " << year
//              << " is " << yearlyRent << endl;
//
//         totalAllYears += yearlyRent;
//         monthlyRent *= 1.03;
//     }
//
//     cout << "For all 5 years total rent is " << totalAllYears << endl;
//
//     return 0;
// }

//Problem 17
 // int main() {
 //     int num, sum = 0;
 //     cin >> num;
 //     if (num < 0)
 //         cout << "Negative number entered" << endl;
 //     else
 //     {
 //         while (num != 0) {
 //             sum += num % 10;
 //             num /= 10;
 //         }
 //
 //         cout << "The sum of digits is " << sum << endl;
 //     }
 //
 //     return 0;
 // }

//Problem 18
// int main() {
//     int binary;
//     cin >> binary;
//     int decimal = 0, base = 1, remainder;
//     while (binary > 0) {
//         remainder = binary % 10;
//         decimal = decimal + remainder * base;
//         base = base * 2;
//         binary = binary / 10;
//     }
//     cout << "The decimal number is " << decimal << endl;
//     return 0;
// }

//Problem 19
// int main() {
//     int n;
//     cin >> n;
//     for (int i = 2; i <= n; i++) {
//         while (n % i == 0) {
//             cout << i;
//             n = n / i;
//         }
//     }
//     cout << endl;
//     return 0;
// }

//Problem 20
// int main() {
//
//  double pi;
//  int input;
//  cin >> input;
//
//  for (int i = 1; i <= input; i++) {
//   pi += pow(-1, i+1) / (2.0 * i - 1);
//  }
//
//  pi *= 4.0;
//
//  cout << pi << endl;
// return 0;
// }

//Problem 21
// int main() {
//  int seconds;
//  cout << "Enter the number of seconds: ";
//  cin >> seconds;
//
//  for (int i = seconds - 1; i > 0; i--) {
//   cout << i << " seconds remaining" << endl;
//   sleep(1);
//  }
//
//  cout << "Stopped" << endl;
//  return 0;
// }

//Problem 22
// int main()
// {
//  cout << "Miles--Kilometres" << endl;
//  double km = 1;
//  for (int i = 1; i<=10; i++)
//  {
//   km = i * 1.609;
//   cout << i << "  --  " << km << endl;
//  }
// }

//Problem 23
// int main()
// {
//  int n = 1;
//  int num = pow(2,n);
//  while (num <= 30000)
//  {
//   n++;
//   num = pow(2,n);
//  }
//  cout << "The largest n is: " << --n << endl;
// }

//Problem 24
int main() {
 srand(time(0));

 int evenCount = 0, oddCount = 0;

 for (int i = 0; i < 100000; i++) {
  int num = rand();
  if (num % 2 == 0)
   evenCount++;
  else
   oddCount++;
 }

 cout << "Total even numbers: " << evenCount << endl;
 cout << "Total odd numbers: " << oddCount << endl;

 return 0;
}

