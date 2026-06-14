class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int, int> freq; //order of n complexity
        int count = 0;

        for (int x: nums){
            count = count + freq[x];
            freq[x]++;
        }
        return count;
    }
};



/* 
    int count = 0;  // brute force with n^2 time complexity
        for ( int i = 0 ; i < nums.size(); i++ ){
            for( int j = i+1; j < nums.size(); j++ ){
                if ( nums[i]==nums[j]){
                    count++;
                }
            }
        }
        return count;
*/