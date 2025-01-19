#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <map>
#include <stack>
#include <queue>
#include <climits>
#define ll long long
using namespace std;

vector<int> mergePiles(vector<vector<int>> &piles)
{
    vector<int> ans;

    while (1)
    {
        // stores the minimum value of the stack top
        int mini = INT_MAX;

        int index = -1;
        for (int i = 0; i < piles.size(); i++)
        {
            if (mini > piles[i][piles[i].size() - 1])
            {
                mini = piles[i][piles[i].size() - 1];
                index = i;
            }
        }

        ans.push_back(mini);

        // removing the top element from the current pile
        piles[index].pop_back();

        if (piles[index].empty())
        {
            piles.erase(piles.begin() + index);
        }

        if (piles.size() == 0)
            break;
    }

    return ans;
}

vector<int> patienceSort(vector<int> &arr)
{
    // collection of piles
    vector<vector<int>> piles;

    for (int i = 0; i < arr.size(); i++)
    {
        if (piles.empty())
        {

            // intialize a new pile

            piles.push_back({arr[i]});
        }
        else
        {
            int flag = 1;

            for (int j = 0; j < piles.size(); j++)
            {
                if (arr[i] < piles[j][piles[j].size() - 1])
                {
                    piles[j].push_back(arr[i]);
                    flag = 0;
                    break;
                }
            }

            // if element is not greater than any of the piles top element
            // then creating a new pile
            if (flag)
            {
                // creating a new pile
                piles.push_back({arr[i]});
            }
        }
    }

    // store the sorted sequence of the given array
    vector<int> ans;
    ans = mergePiles(piles);

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    return ans;
}

int main()
{

    vector<int> arr = {6, 12, 2, 8, 3, 7};
    vector<int> ans;
    patienceSort(arr);
}
