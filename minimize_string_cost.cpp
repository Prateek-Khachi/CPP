#include <iostream>
#include <string>
#include <set>

using namespace std;

string minimizeValueString(string s) {
    set<char> usedChars; // To track used characters

    for(int i = 0; i < s.size(); i++) {
            usedChars.insert(s[i]); // Track already present letters
    }

    
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '?') {
            // Try to place the smallest unused character
            for (char c = 'a'; c <= 'z'; c++) {
                if (usedChars.find(c) == usedChars.end()) {
                    s[i] = c;
                    usedChars.insert(c);
                    break;
                }
            }
        }
    }
    
    return s;
}

int main() {
    string s = "ab?cd";
    cout << minimizeValueString(s) << endl; // Expected Output: "abc"
    return 0;
}
