class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        int i;
        int sum=0;
        sort(nums.begin(),nums.end());
        for(i=0;i<nums.size();i=i+2)
        {
            sum+=nums[i];
        }
        return sum;
    }
};