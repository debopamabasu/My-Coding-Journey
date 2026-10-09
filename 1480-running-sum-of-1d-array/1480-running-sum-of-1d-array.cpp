class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int n = nums.size();
        vector<int> rs(n);
        rs[0] = nums[0];
        for(int i = 1; i<n; i++){
            rs[i] = nums[i] + rs[i-1];    
        } 
        return rs;
    }
};