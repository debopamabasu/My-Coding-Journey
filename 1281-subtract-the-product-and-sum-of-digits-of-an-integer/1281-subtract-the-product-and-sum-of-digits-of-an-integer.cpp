class Solution {
public:
    int subtractProductAndSum(int n) {

        int prod = 1;
        int sum = 0;
        int digits = 0;

        while (n>0){
            digits = n%10;
            prod *= digits;
            sum += digits;
            n = n/10;
        }

        return (prod - sum);
        
    }
};