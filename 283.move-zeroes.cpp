/**
* 操作数组
* Link: https://leetcode.com/problems/move-zeroes/
*/

void moveZeroes(vector<int>& nums) {
    
    int k = 0; // nums中，[0...k)区间的元素均为非0元素

    // 遍历到第i个元素后，保证[0...i]中所有非0元素都按照顺序排列在[0...k)中，同时，[k...i]区间中都为0。
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i])
            // 针对特殊的测试用例
            if (i != k)
                swap(nums[k++], nums[i]);
            else 
                k++;
    }
}