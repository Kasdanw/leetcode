#include <iostream>

using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {

        if (x < 0) {
            return false;
        }

        if (x == 0) {
            return true;
        }

        if (x % 10 == 0) {
            return false;
        }

        int digits = 1;

        for (int num = x; num != 0; num = num / 10) {
            digits = digits + 1;
        }

        int divisor = 1;

        for (int i = 0; i < digits - 1; i = i + 1) {
            divisor = divisor * 10;
        }

        while (x != 0) {
            int first = x / divisor;
            int last = x % 10;
            if (first != last) {
                return false;
            }
            x = x % divisor;
            x = x / 10;
            divisor = divisor / 100;
        }

        return true;
    }
};

int main() {
    
    Solution().isPalindrome(121);

    return 0;
}
