class Solution {
public:
    int countBeautifulPairs(vector<int>& nums) {
        int n = nums.size();
        int count = 0;
        for(int i = 0; i < n ; i++){
            int first = nums[i];

            //first digit extract
            while(first>=10){
                first = first/10;
            }
            //last digit extract
            for (int j = i+1; j < n; j++){
                int last = nums[j]%10;
                
                //calculate gcd
                int a = first;
                int b = last;


                while(b!=0){
                    int temp = b;
                    b = a % b;
                    a = temp;
                }
                if(a==1){
                    count ++;
                }
            }
        }
        return count;
    }
};