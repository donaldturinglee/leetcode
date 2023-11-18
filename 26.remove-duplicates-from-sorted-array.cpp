int removeDuplicates(vector<int>& nums) {
    int k = 0;

    for (int i = 1; i < nums.size(); ++i) {
        if (nums[i - 1] != nums[i]) {
            nums[++k] = nums[i];
        }
    }

    return k + 1;
}