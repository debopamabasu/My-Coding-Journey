class Solution {
public:
    bool check_digits(int n){
        int original = n;

        while (n>0){
            int digits = n % 10;
            if(digits == 0) return false;  //no need to check the counts just see if remainder not equal to 0 then false
            if ( original % digits != 0 ) return false;
            n = n / 10;
        }
        return true;
    }

    vector<int> selfDividingNumbers(int left, int right) {
        vector <int> ans;
        for ( int i = left; i <= right; i++ ){
            if (check_digits(i)){
                ans.push_back(i);
            }
        }   
        return ans;
    } 
        
};