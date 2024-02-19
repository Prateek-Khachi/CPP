#include <iostream>
#include <math.h>
#include <array>
#include <sstream>
using namespace std;

int main()
{
    int num;
    cin >> num;
    int digits = 0;
    int temp = num;

   
    while (temp != 0)
    {
        digits++;
        temp /= 10;
    }

   
    int arr[digits];

   
    for (int i = digits - 1; i >= 0; i--)
    {
        arr[i] = num % 10;
        num /= 10;
    }

    int n;
    for (int q = 0; q < digits; q++)
    {
        n += pow(2, q) * arr[q];
    }
    cout << n << endl;
}