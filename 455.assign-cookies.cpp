/**
* 分配问题（贪心算法）
*/


int findContentChildren(vector<int> &children, vector<int> &cookies) {
    // 对孩子进行升序排序
    sort(children.begin(), children.end());
    // 对饼干进行升序排序
    sort(cookies.begin(), cookies.end());
    int child = 0;
    int cookie = 0;

    while (child < children.size() && cookie < cookies.size()) {
        // 给当前孩子分配最小能饱腹的饼干
        if (children[child] <= cookies[cookie]) ++child;
        ++cookie; 
    }
    return child;
}