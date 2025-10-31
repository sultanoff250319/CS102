#include <iostream>
using namespace std;

//Problem 6
// int main()
// {
//     int freq[26] = {0};
//     char ch;
//
//     cout << "Enter characters (end with '0'):" << endl;
//     while (cin >> ch && ch != '0')
//     {
//         if (ch >= 'a' && ch <= 'z')
//             freq[ch - 'a']++;
//     }
//
//     cout << "\nFrequency of lowercase letters:" << endl;
//     for (int i = 0; i < 26; i++)
//     {
//         if (freq[i])
//             cout << char('a' + i) << " : " << freq[i] << endl;
//     }
// }

//Problem 7
// int main() {
//     int n;
//
//     cout << "Enter number of elements: ";
//     cin >> n;
//
//     if (n <= 0) {
//         cout << "Invalid array size." << endl;
//         return 0;
//     }
//
//     int arr[n];
//
//     cout << "Enter " << n << " integers: ";
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }
//     for (int i = 0; i < n - 1; i++) {
//         for (int j = 0; j < n - i - 1; j++) {
//             if (arr[j] > arr[j + 1]) {
//                 int temp = arr[j];
//                 arr[j] = arr[j + 1];
//                 arr[j + 1] = temp;
//             }
//         }
//     }
//
//     cout << "Sorted array: ";
//     for (int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
//
//     return 0;
// }

//Problem 8
// int main() {
//     const int rolls = 10000;
//     int counts[6] = {0};
//
//     srand(time(0));
//
//     for (int i = 0; i < rolls; i++) {
//         int die = rand() % 6 + 1;
//         counts[die - 1]++;
//     }
//
//     for (int i = 0; i < 6; i++) {
//         cout << "Face " << (i + 1) << ": " << counts[i] << endl;
//     }
//     return 0;
// }

//Problem 9
// void reverseArray(int arr[], int start, int end) {
//     while (start < end) {
//         int temp = arr[start];
//         arr[start] = arr[end];
//         arr[end] = temp;
//         start++;
//         end--;
//     }
// }
//
// int main() {
//     int n;
//     cout << "Enter number of elements: ";
//     cin >> n;
//     int arr[n];
//     cout << "Enter " << n << " elements: ";
//     for (int i = 0; i < n; i++)
//         cin >> arr[i];
//     reverseArray(arr, 0, n - 1);
//     cout << "Reversed array: ";
//     for (int i = 0; i < n; i++)
//         cout << arr[i] << " ";
//     cout << endl;
//     return 0;
// }

//Problem 10
int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    int arr[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    bool sorted = true;

    for (int i = 1; i < n; i++) {
        if (arr[i] < arr[i - 1]) {
            sorted = false;
            break;
        }
    }
    if (sorted)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}