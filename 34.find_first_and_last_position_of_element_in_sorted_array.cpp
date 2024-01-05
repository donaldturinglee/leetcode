/**
 * Link: https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/
 */

int find_low_index(vector<int>& nums, int target)
{
    int left = 0;
    int right = nums.size() - 1;

    if (left > right)
    {
        return - 1;
    }

    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        if (nums.at(mid) >= target)
        {
            right = mid - 1;
        }
        else if (nums.at(mid) < target)
        {
            left = mid + 1;
        }
    }
    if (left < nums.size() && nums.at(left) == target)
    {
        return left;
    }
    return - 1;
}

int find_high_index(vector<int>& nums, int target)
{
    int left = 0;
    int right = nums.size() - 1;

    if (left > right)
    {
        return - 1;
    }

    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        if (nums.at(mid) <= target)
        {
            left = mid + 1;
        }
        else if (nums.at(mid) > target)
        {
            right = mid - 1;
        }
    }
    if (right < nums.size() && nums.at(right) == target)
    {
        return right;
    }
    return - 1;
}

vector<int> searchRange(vector<int>& nums, int target)
{
    return {find_low_index(nums, target), find_high_index(nums, target)};
}