class Solution {
public:
    int sq_sum(int n){
        int sum = 0;

        while(n>0){
            int digits = n % 10;
            sum += digits*digits;
            n = n/10;
        }
        return sum;
    }

    bool isHappy(int n) {
        unordered_set<int> seen;
        while(n!=1 && seen.find(n)==seen.end()){
            seen.insert(n);
            n = sq_sum(n);
        }    
        return n==1;
    }
};