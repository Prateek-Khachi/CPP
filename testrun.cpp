#include<bits/stdc++.h>

#define endl '\n'
using namespace std;

int main() {
    string str ; cin >> str;
    int size = str.length();

    int p1 = 0, p2 = 0;
    int s1 = size/2,  s2 = size - 1;
    bool even = false;

if (size % 2 == 0) {    
        p2 = (size / 2) - 1;
        even = true;
    }
    else p2 = size / 2;

    bool flag = false; string original;
    int iteration = 0;
    while (s1 != p1) {
        if (str.substr(p1, p2 + 1) == str.substr(s1, s2 + 1)) {
            if (even && iteration == 0) {
                iteration++;
                p2++;s1--;
                continue;
            }

            original = str.substr(p1, p2 + 1);
            flag = true;
            break;
        }

        iteration++;
        p2++;s1--;
    }

    if (flag) cout << "YES" << endl << original;
    else cout << "NO";
}