#include<bits//stdc++.h>

using namespace std;

string encode(vector<string>& strs) {
    string new_str = "";
    for(string s: strs) {
        new_str += "\n" + s;
    }
    return new_str;
}

vector<string> decode(string s) {
    string delimiter = "\n";
    vector<string> strs;

    int pos = 0;
    while (s.find(delimiter) != s.end()) {
        strs.push_back(s.substr(0, s.find(delimiter)));  // Extract token
        s.erase(0, s.find(delimeter) + delimiter.length());  // Remove extracted token from the string
    }
    strs.push_back(s);  // Push the last remaining part
    strs.erase(strs.begin());
    return strs;
}

int main()
{

    vector<string> strs = {"neet", "code", "love", "you"};

    string str = encode(strs);


    cout<<decode(str)<<endl;


}