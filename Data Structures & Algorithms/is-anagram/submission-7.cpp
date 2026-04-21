class Solution {
public:
    bool isAnagram(string s, string t) {

        int sLength = s.length();
        int tLength = t.length();
        if (s.length() != t.length())
        {
            return false;
        }

        // Brute Force
        /*
        for (int i = 0; i < sLength; i++)
        {
            int sCount = 0;
            int tCount = 0;
            for (int j = 0; j < sLength; j++)
            {
                if (s[j] == s[i])
                {
                    sCount++;
                }
            }
            for (int k = 0; k < tLength; k++)
            {
                if (t[k] == s[i])
                {
                    tCount++;
                }
            }
            if (sCount != tCount)
            {
                return false;
            }
        }
        return true;
        */

        // Using sorts
        /*
        std::sort(s.begin(), s.end());
        std::sort(t.begin(), t.end());

        if (s == t)
        {
            return true;
        }
        return false;
        */

        // Using 2 int array
        /*
        int sArray[26] = {0};
        int tArray[26] = {0};
        for (int i = 0; i < sLength; i++)
        {
            sArray[s[i] - 'a'] = sArray[s[i] - 'a'] + 1;
            tArray[t[i] - 'a'] = tArray[t[i] - 'a'] + 1;
        }
        for (int i = 0; i < 26; i++)
        {
            if (sArray[i] != tArray[i])
                return false;
        }
        return true;
        */

        // Using single int array
        /*
        int effArray[26] = {0};
        for (int i = 0; i < sLength; i++)
        {
            effArray[s[i] - 'a'] = effArray[s[i] - 'a'] + 1;
            effArray[t[i] - 'a'] = effArray[t[i] - 'a'] - 1;
        }
        for (int i = 0; i < 26; i++)
        {
            if (effArray[i] != 0)
                return false;
        }
        return true;
        */

        // Using unordered_map
        std::unordered_map<char, int> freq;
        for (int i = 0; i < sLength; i++)
        {
            freq[s[i]]++;
            freq[t[i]]--;
        }
        for (auto& item : freq)
        {
            if (item.second != 0)
            {
                return false;
            }
        }
        return true;
    }
};
