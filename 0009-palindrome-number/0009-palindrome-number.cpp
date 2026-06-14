class Solution {
public:
    bool isPalindrome(int x) {
        long long original = x;  //x getting destroyed
        if (x<0) return false;
        long long rev = 0;
        while(x>0){
            rev = (rev*10) + (x%10);
            x/=10;
        }

        return (rev == original);
    }
};