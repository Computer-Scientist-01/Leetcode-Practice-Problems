class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0)
            return false;
        long long tmp = 0;
        int original = x;
        while (x != 0) {
            int t = x % 10;
            tmp = tmp * 10 + t;
            x /= 10;
        }

        return (tmp == original);
    }
};