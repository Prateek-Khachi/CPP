#include <bits/stdc++.h>

using namespace std;
struct RetrieveKey
{
    template <typename T>
    typename T::first_type operator()(T keyValuePair) const
    {
        return keyValuePair.first;
    }
};

int main()
{

//     map<vector<int>, int> m;
//     vector<int> keys;

//     m[{1, 2, 3, 4}] = 2;

//     m[{2, 4, 5, 6}] = 1;

//     m[{1, 2, 3, 8}] = 3;
//     // Trying to update an existing key

//     // Retrieve all keys
//     transform(m.begin(), m.end(), back_inserter(keys), RetrieveKey());

//     // Dump all keys
//     copy(keys.begin(), keys.end(), ostream_iterator<int>(cout, "\n"));
// }


    cout<<log10(128)<<endl;
    
    cout<<floor(pow(10,2.10))<<endl;
}