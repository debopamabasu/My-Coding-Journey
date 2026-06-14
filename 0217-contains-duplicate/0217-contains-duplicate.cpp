class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, int> freq;
        int count = 0;

        for ( int x : nums ){
            count = count + freq[x];
            freq[x]++;
        }

        return (count >= 1);
    }
};