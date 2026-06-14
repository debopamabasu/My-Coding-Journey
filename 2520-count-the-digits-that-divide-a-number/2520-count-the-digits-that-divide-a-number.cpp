class Solution {
public:
    int countDigits(int num) {
        int original = num;
        int rev = 0;
        int count = 0;

        while (num > 0){
            rev = num%10;
            if(original % rev == 0) count ++;
            num = num/10;
        }

        return count;
        
    }
};