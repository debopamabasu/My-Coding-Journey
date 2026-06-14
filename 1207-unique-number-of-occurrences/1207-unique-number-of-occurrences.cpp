class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int> freq;

        for(int x : arr){
            freq[x]++;
        }

        unordered_set<int> seen;

        for (auto p: freq){
            if( seen.find(p.second)!=seen.end() ){
                return false;
            }
            seen.insert(p.second);
        }
        return true;
    }
};