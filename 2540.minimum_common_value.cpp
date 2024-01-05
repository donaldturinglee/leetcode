/**
 * Link: https://leetcode.com/problems/minimum-common-value/
 */

int getCommon(vector<int>& nums1, vector<int>& nums2) {
    int i = 0;
    int j = 0;

    while (i < nums1.size() && j < nums2.size())
    {
        if (nums1.at(i) == nums2.at(j))
        {
            return nums1.at(i);
        }

        if (nums1.at(i) <= nums2.at(j))
        {
            ++i;
        }
        else if (nums2.at(j) <= nums1.at(i))
        {
            ++j;
        }
    }

    return -1;
}