// ***********  MY BRUTEFORCE ************* on line no. 36

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int num;
    cout << "Enter an integer: ";
    cin >> num;

    // Handle negative numbers
    if (num < 0) {
        cout << "Please enter a non-negative integer." << endl;
        return 1;
    }

    // Convert number to binary representation
    vector<int> arr;
    
    while (num != 0) {
        arr.push_back(num % 10); // Store the last digit
        num /= 10;               // Remove last digit
    }

    // Calculate the decimal value from binary representation
    int n = 0;
    for (int q = 0; q < arr.size(); q++) {
        n += (arr[q] * (1 << q)); // Use bitwise shift instead of pow(2, q)
    }

    cout << "Decimal value: " << n << endl;
    return 0;
}

// ***********  MY BRUTEFORCE *************

// #include <iostream>
// #include <math.h>
// #include <array>
// #include <sstream>
// using namespace std;

// int main()
// {
//     int num;
//     cin >> num;
//     int digits = 0;
//     int temp = num;

   
//     while (temp != 0)
//     {
//         digits++;
//         temp /= 10;
//     }

   
//     int arr[digits];

   
//     for (int i = digits - 1; i >= 0; i--)
//     {
//         arr[i] = num % 10;
//         num /= 10;
//     }

//     int n;
//     for (int q = 0; q < digits; q++)
//     {
//         n += pow(2, q) * arr[q];
//     }
//     cout << n << endl;
// }