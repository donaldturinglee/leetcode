 int removeElement(vector<int>& nums, int val) {
    
    int k = 0; // [0...k)区间元素都为非val元素
    
    // 遍历到第i个元素后，保证[0...i]中所有非val元素都按照顺序排列在[0...k)中，同时，[k...i]区间中都为val。
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] != val) {
            // 处理特殊值
            if (i != k) 
                swap(nums[k++], nums[i]);
            else 
                k++;
        }
    }

    return k;
}