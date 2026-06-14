class Solution {
public:
    long long reverse(int x) {
        long long num = x;
        if ( x < 0 ) num = -num;
        long long rev = 0;
        while ( num > 0){
            rev = (rev*10) + (num%10);
            num = num/10; 
        }
        if (x<0) rev = -rev;
        if (rev > INT_MAX || rev < INT_MIN) return 0;
        return rev;
    }
};