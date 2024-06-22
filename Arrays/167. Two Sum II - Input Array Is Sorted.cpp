// problem link -> https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/

vector<int> twoSum(vector<int>& num, int target) {
        int n = num.size();
        int sum = 0;
        int i = 0;
        int j = n-1;

        while(i<j){
            sum = num[i]+num[j];
            if(sum<target){
                i++;
            }
            else if(sum>target)
            {
                j--;
            }
            else{
                return {i+1, j+1};
            }

        }
        return {};
    }
