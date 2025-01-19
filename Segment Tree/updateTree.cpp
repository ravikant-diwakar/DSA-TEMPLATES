#include <bits/stdc++.h>
using namespace std;
#define ll long long

void buildTree(vector<int> &nums, vector<int> &segmentTree, int i, int l, int r)
{
    if (l == r)
    {
        segmentTree[i] = nums[l];
        return;
    }
    int mid = (l + r) / 2;
    buildTree(nums, segmentTree, 2 * i + 1, l, mid);
    buildTree(nums, segmentTree, 2 * i + 2, mid + 1, r);
    segmentTree[i] = segmentTree[2 * i + 1] + segmentTree[2 * i + 2];
}

void updateSegTree(vector<int> &segmentTree, vector<int> &nums, int idx, int val, int i, int l, int r)
{
    if (l == r)
    {
        segmentTree[i] = val;
        return;
    }
    int mid = (l + r) / 2;
    if (idx <= mid)
    {
        updateSegTree(segmentTree, nums, idx, val, 2 * i + 1, l, mid);
    }
    else
    {
        updateSegTree(segmentTree, nums, idx, val, 2 * i + 2, mid + 1, r);
    }
    segmentTree[i] = segmentTree[2 * i + 1] + segmentTree[2 * i + 2];
}

void printTree(vector<int> &segmentTree)
{
    for (auto it : segmentTree)
    {
        cout << it << " ";
    }
    cout << endl;
}

int main()
{
    int n;
    cin >> n;
    vector<int> nums(n);
    vector<int> segmentTree(2 * n);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    buildTree(nums, segmentTree, 0, 0, n - 1);
    printTree(segmentTree);
    updateSegTree(segmentTree, nums, 2, 2, 0, 0, n - 1);
    printTree(segmentTree);

    return 0;
}
