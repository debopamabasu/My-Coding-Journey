class Solution {
public:
    bool checkIfPangram(string sentence) {
        vector<bool> seen(26,false);
        int count = 0;
        for(char c : sentence){
            int index = c - 'a';
            if(!seen[index]){
                seen[index] = true;
                count++;
            }
        }
        return count==26;        
    }
};