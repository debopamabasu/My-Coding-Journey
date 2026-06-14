class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = floor(nums.size()/2);
        unordered_map < int, int> freq;

        for ( int x : nums ){
            freq[x]++;
        }
        for ( int x : nums ){
            if ( freq[x] > n) return x;
        }

        return -1;
    }
};