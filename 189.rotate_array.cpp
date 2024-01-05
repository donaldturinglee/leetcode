/**
 * Link: https://leetcode.com/problems/rotate-array/
 */

// Solution 1
void reverse(vector<int>& nums, int start, int end)
{
    while (start < end)
    {
        swap(nums.at(start), nums.at(end));
        ++start;
        --end;
    }
}

void rotate(vector<int>& nums, int k)
{
    int length = nums.size();
    int n = k % length;
    if (n < 0)
    {
        n += length;
    }
    reverse(nums, 0, length - 1);
    reverse(nums, 0, n - 1);
    reverse(nums, n, length - 1);
}

// Solution 2
void rotate(vector<int>& nums, int k)
{
    int length = nums.size();
    
    int n = k % length;

    if (n < 0)
    {
        n += length;
    }

    vector<int> temp(n);

    for (int i = 0; i < n; ++i)
    {
        temp[i] = nums[length - n + i];
    }

    for (int i = length - 1; i >= n; --i)
    {
        nums[i] = nums[i - n];
    }

    for (int i = 0; i < n; ++i)
    {
        nums[i] = temp[i];
    }
}