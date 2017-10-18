class Solution {
public:
    int longestPalindrome(string s) {
        int countArray['z' - 'A' + 1] = {0};
        int pair = 0;
        bool isOddExists = false;
        for (char item : s) {
            countArray[item - 'A']++;
        }
        for (int item : countArray) {
            pair += item / 2;
            if (!isOddExists) {
                if (item % 2 == 1) {
                    isOddExists = true;
                }
            }
        }
        return pair * 2 + (isOddExists ? 1 : 0);
    }
};