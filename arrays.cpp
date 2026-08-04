// #include <iostream>
// #include <climits>   // for INT_MAX and INT_MIN
// using namespace std;

// int getMin(int num[], int n) {
//     int min = INT_MAX;
//     for (int i = 0; i < n; i++) {
//         if (min > num[i]) {
//             min = num[i];
//         }
//     }
//     return min;
// }

// int getMax(int num[], int n) {
//     int max = INT_MIN;
//     for (int i = 0; i < n; i++) {
//         if (max < num[i]) {
//             max = num[i];
//         }
//     }
//     return max;
// }

// int main() {
//     int size;
//     cin >> size;

//     int num[100];
//     for (int i = 0; i < size; i++) {
//         cin >> num[i];
//     }

//     cout << "Max element: " << getMax(num, size) << endl;
//     cout << "Min element: " << getMin(num, size) << endl;

//     return 0;
// }