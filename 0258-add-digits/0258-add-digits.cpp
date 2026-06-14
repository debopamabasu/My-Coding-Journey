class Solution {
public:
    int add_num(int num) {
        int digits = 0;
        int sum = 0;
        while ( num > 0 ){
            digits = num % 10;
            sum += digits;
            num = num / 10;
        }
        return sum; 
    }

    int addDigits(int num) {
        int result = 0;
        result = add_num(num);
        while (result > 9) {
            result = add_num(result);
        }
        return result;
    }
};