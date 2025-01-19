//move zeroes present in the array to the right while maintaining the relative order of the array
void moveZeroes(vector<int>& nums) {
        int nonZero=0;
        for(int j=0;j<nums.size();j++){
            if (nums[j]!=0){
                swap(nums[nonZero],nums[j]);
                nonZero++;

            }
        }
    }
