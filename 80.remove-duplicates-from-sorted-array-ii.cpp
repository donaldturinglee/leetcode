int removeDuplicates(vector<int>& nums) {
    int k = 0; // [0...k)区间元素都为最多重复两次的元素

    for (int i = 0; i < nums.size(); i++) {
        // 当新数组元素小于2时，无论什么元素添加进新数组都不会违反题目规定
        // 当前元素nums[i]不等于新数组中的倒数第二个元素
        if (k < 2 || nums[i] != nums[k - 2]) {
            nums[k++] = nums[i];
        }
    }

    return k;
}