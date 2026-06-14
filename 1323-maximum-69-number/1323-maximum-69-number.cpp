class Solution {
public:
    int maximum69Number (int num) {
        string s = to_string(num);

        for(int i = 0; i < s.size(); i ++){  //just change the 1st occuring 6 to 9 
            if(s[i] == '6'){
                s[i] ='9';  //check the operator mistake
                break;
            }
        }
        return stoi(s); 
    }
};