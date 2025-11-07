#include <iostream>
# include <vector>
using namespace std;

//Problem 5
// int main() {
//     int rows, cols;
//     cout << "Enter number of rows: ";
//     cin >> rows >> cols;
//     int matrix[100][100];
//
//     for(int i = 0; i < rows; i++)
//         for(int j = 0; j < cols; j++)
//             cin >> matrix[i][j];
//
//     for(int k = 0; k < cols; k++) {
//         int sum = 0;
//         for(int l = 0; l < rows; l++)
//             sum += matrix[l][k];
//         cout << sum << " ";
//     }
//     return 0;
// }

//Problem 6
// int main() {
//     int n;
//     cin >> n;
//     int matrix[100][100];
//     int sum = 0;
//
//     for(int i = 0; i < n; i++)
//         for(int j = 0; j < n; j++) {
//             cin >> matrix[i][j];
//             if(i == j) sum += matrix[i][j];
//         }
//
//     cout << sum;
//     return 0;
// }

//Problem 7
// int main() {
//     int rows, cols;
//     cin >> rows >> cols;
//     int matrix[100][100];
//
//     for(int i = 0; i < rows; i++)
//         for(int j = 0; j < cols; j++)
//             cin >> matrix[i][j];
//
//     for(int j = 0; j < cols; j++) {
//         for(int i = 0; i < rows; i++)
//             cout << matrix[i][j] << " ";
//         cout << endl;
//     }
//     return 0;
// }

//Problem 8
// int main() {
//     int rows, cols;
//     cin >> rows >> cols;
//     int a[100][100], b[100][100];
//
//     for(int i = 0; i < rows; i++)
//         for(int j = 0; j < cols; j++)
//             cin >> a[i][j];
//
//     for(int i = 0; i < rows; i++)
//         for(int j = 0; j < cols; j++)
//             cin >> b[i][j];
//
//     for(int i = 0; i < rows; i++) {
//         for(int j = 0; j < cols; j++)
//             cout << a[i][j] + b[i][j] << " ";
//         cout << endl;
//     }
//     return 0;
// }

//Problem 9
// int main() {
//     int n1, m1, n2, m2;
//     cin >> n1 >> m1;
//     int a[100][100];
//     for(int i = 0; i < n1; i++)
//         for(int j = 0; j < m1; j++)
//             cin >> a[i][j];
//
//     cin >> n2 >> m2;
//     int b[100][100];
//     for(int i = 0; i < n2; i++)
//         for(int j = 0; j < m2; j++)
//             cin >> b[i][j];
//
//     int c[100][100] = {0};
//     for(int i = 0; i < n1; i++)
//         for(int j = 0; j < m2; j++)
//             for(int k = 0; k < m1; k++)
//                 c[i][j] += a[i][k] * b[k][j];
//
//     for(int i = 0; i < n1; i++) {
//         for(int j = 0; j < m2; j++)
//             cout << c[i][j] << " ";
//         cout << endl;
//     }
//     return 0;
// }

// Problem 10
// int main()
// {
//     int n;
//     cout << "Enter the size of the square matrix: ";
//     cin >> n;

//     int matrix[100][100];

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             cout << "Enter element at position (" << i + 1 << ", " << j + 1 << "): ";
//             cin >> matrix[i][j];
//         }
//     }

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i + 1; j < n; j++)
//         {
//             int temp = matrix[i][j];
//             matrix[i][j] = matrix[j][i];
//             matrix[j][i] = temp;
//         }
//     }

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n / 2; j++)
//         {
//             int temp = matrix[i][j];
//             matrix[i][j] = matrix[i][n - j - 1];
//             matrix[i][n - j - 1] = temp;
//         }
//     }

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             cout << matrix[i][j] << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }

//Problem 15
// int main() {
//     int n, x;
//     cin >> n;
//     vector<int> v(n);
//     for(int i = 0; i < n; i++)
//         cin >> v[i];
//     cin >> x;
//
//     for(int i = 0; i < n; i++)
//         if(v[i] != x)
//             cout << v[i] << " ";
//     return 0;
// }

//Problem 16
// int main() {
//     int n;
//     cin >> n;
//     vector<int> v(n);
//     for(int i = 0; i < n; i++)
//         cin >> v[i];
//
//     for(int i = n - 1; i >= 0; i--)
//         cout << v[i] << " ";
//
//     return 0;
// }

//Problem 17
// int main() {
//     int n, x, k;
//     cin >> n;
//     vector<int> v(n);
//     for(int i = 0; i < n; i++)
//         cin >> v[i];
//     cin >> x >> k;
//
//     vector<int> result;
//     for(int i = 0; i < n; i++) {
//         if(i == k)
//             result.push_back(x);
//         result.push_back(v[i]);
//     }
//
//     if(k >= n) result.push_back(x);
//
//     for(int i = 0; i < result.size(); i++)
//         cout << result[i] << " ";
//
//     return 0;
// }

//Problem 18
// int main() {
//     int n;
//     cin >> n;
//     vector<int> v(n);
//     for(int i = 0; i < n; i++)
//         cin >> v[i];
//
//     cout << v[0] << " ";
//     for(int i = 1; i < n; i++) {
//         if(v[i] != v[i - 1])
//             cout << v[i] << " ";
//     }
//     return 0;
// }

//Problem 19
// int main() {
//     int n;
//     cin >> n;
//     vector<int> v(n);
//     for(int i = 0; i < n; i++)
//         cin >> v[i];
//
//     for(int i = 0; i < n - 1; i++) {
//         for(int j = 0; j < n - i - 1; j++) {
//             if(v[j] > v[j + 1]) {
//                 int temp = v[j];
//                 v[j] = v[j + 1];
//                 v[j + 1] = temp;
//             }
//         }
//     }
//
//     for(int i = 0; i < n; i++)
//         cout << v[i] << " ";
//
//     return 0;
// }

//Problem 20
int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++)
        cin >> v[i];

    int largest = v[0];
    int second = v[0];

    for(int i = 1; i < n; i++) {
        if(v[i] > largest) {
            second = largest;
            largest = v[i];
        }
        else if(v[i] < largest && v[i] > second) {
            second = v[i];
        }
    }

    if(largest == second)
        cout << largest;
    else
        cout << second;

    return 0;
}



