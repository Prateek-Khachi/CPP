class Solution
{
public:
    string minWindow(string s, string t)
    {
        if (t.size() > s.size())
        {
            return "";
        }

        map<char, int> mapT; // Frequency map for string t
        map<char, int> mapS; // Frequency map for current window in s

        // Initialize the frequency map for t
        for (char c : t)
        {
            mapT[c]++;
        }

        int required = mapT.size(); // Number of unique characters in t
        int formed = 0;             // Number of unique characters in the current window that match t's frequency

        int l = 0;            // Left pointer of the window
        int minLen = INT_MAX; // Length of the minimum window
        int minLeft = 0;      // Starting index of the minimum window

        for (int r = 0; r < s.size(); r++)
        {
            char currentChar = s[r];

            // If the current character is in t, update its count in mapS
            if (mapT.find(currentChar) != mapT.end())
            {
                mapS[currentChar]++;

                // If the count of the current character in the window matches its count in t, increment formed
                if (mapS[currentChar] == mapT[currentChar])
                {
                    formed++;
                }
            }

            // When the current window contains all characters of t with the required frequencies
            while (formed == required && l <= r)
            {
                // Update the minimum window
                if (r - l + 1 < minLen)
                {
                    minLen = r - l + 1;
                    minLeft = l;
                }

                // Move the left pointer to try to find a smaller window
                char leftChar = s[l];
                if (mapT.find(leftChar) != mapT.end())
                {
                    mapS[leftChar]--;

                    // If the count of the left character falls below its count in t, decrement formed
                    if (mapS[leftChar] < mapT[leftChar])
                    {
                        formed--;
                    }
                }

                l++;
            }
        }

        // If a valid window was found, return the substring
        if (minLen != INT_MAX)
        {
            return s.substr(minLeft, minLen);
        }
        else
        {
            return "";
        }
    }
};