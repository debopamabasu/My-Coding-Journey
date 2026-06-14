class Solution {
public:
    int findNumbers(vector<int>& nums) {
        vector <int> ans;
        for ( int i = 0; i < nums.size(); i ++ ){
            int n = nums[i];
            int count = 0;
            while ( n > 0 ){
                int digits = n%10;
                count ++;
                n/=10;
            }
            if (count % 2 == 0) ans.push_back(nums[i]);
        }
        return ans.size();
    }
};