
vector<int> sortedSquares(vector<int>& nums)
{
    int length = nums.size();
    if (length < 1) return nums;

    vector<int> res(length);
    int left = 0;
    int right = length - 1;

    for (int i = length - 1; i >= 0; --i)
    {
        int square{};
        if (abs(nums.at(left)) < abs(nums.at(right)))
        {
            square = nums.at(right);
            --right;
        }
        else
        {
            square = nums.at(left);
            ++left;
        }
        res.at(i) = square * square;
    }

    return res;
}