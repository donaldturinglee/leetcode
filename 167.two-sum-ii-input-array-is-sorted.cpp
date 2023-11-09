/**
* 双指针
* Link: https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/
*/

vector<int> twoSum(vector<int>& numbers, int target) {
    int left = 0;
    int right = numbers.size() - 1;
    int result = 0;
    while (left < right) {
        result = numbers[left] + numbers[right];
        if (result == target) break;
        if (result < target) ++left;
        else --right;
    }
    return vector<int> {left + 1, right + 1};
}
