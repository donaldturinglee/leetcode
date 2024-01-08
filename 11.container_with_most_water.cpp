int maxArea(vector<int>& height) {
    int length = height.size() - 1;
    int left = 0;
    int right = length - 1;
    int max_area = 0;

    while (left <= right)
    {
        int area;
        if (height.at(left) < height.at(right))
        {
            area = height.at(left) * (right - left);
            ++left;
        }
        else
        {
            area = height.at(right) * (right - left);
            --right;
        }
        if (area > max_area)
        {
            max_area = area;
        }
    }
    return max_area;
}