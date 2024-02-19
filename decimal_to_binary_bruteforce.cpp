#include <iostream>
#include <math.h>
using namespace std;

int main()
{

    int n;
    int b[50];
    int i = 0;
    int count = 0;
    int r;
    cin >> n;

    if (n == 0)
    {
        cout << 0 << endl;
        return 0;
    }

    else if (n == 1)
    {
        cout << "1" << endl;
        return 0;
    }

    else
    {
        do
        {
            r = n % 2;
            n = n / 2;
            b[i] = r;
            i++;
            count++;
        } while (n >= 1);

        b[i] = 1;

        int bi[count];

        for (int q = 0; q < count; q++)
        {
            bi[q] = b[count - q - 1];
        }

        for (int q = 0; q < count; q++)
        {
            cout << bi[q];
        }


        return 0;
    }
}