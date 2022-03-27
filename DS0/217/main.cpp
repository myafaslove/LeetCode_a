#include<iostream>
#include<vector>
#include <algorithm>

using namespace std;

bool containsDuplicate(vector<int> &nums) {
    sort(nums.begin(), nums.end());
    int n = nums.size();
    for (int i = 0; i < n - 1; i++) {
        if (nums[i] == nums[i + 1]) {
            return true;
        }
    }
    return false;
}
//给你一个整数数组 nums 。如果任一值在数组中出现 至少两次 ，返回 true ；如果数组中每个元素互不相同，返回 false 。


//作者：LeetCode-Solution
//链接：https://leetcode-cn.com/problems/contains-duplicate/solution/cun-zai-zhong-fu-yuan-su-by-leetcode-sol-iedd/


int main() {
    cout << "hello world!!" << endl;

    vector<int> obj;//创建一个向量存储容器 int
    obj.push_back(1);
    obj.push_back(2);
    obj.push_back(1);
    obj.push_back(3);
    obj.push_back(4);
    // push_back(elem)在数组最后添加数据
    cout << containsDuplicate(obj) << endl;


    return 0;
}