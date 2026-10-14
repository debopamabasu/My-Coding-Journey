class Solution {
public:
    int findNumbers(vector<int>& nums) {
        vector<int> ans;
        for(int i = 0; i<nums.size();i++){
            int count = 0;
            while(nums[i]){
                int digits = nums[i]%10;
                count ++;
                nums[i] = nums[i]/10;
            }
            if(count % 2 == 0) ans.push_back(nums[i]);
        }
        return ans.size();
    }
};