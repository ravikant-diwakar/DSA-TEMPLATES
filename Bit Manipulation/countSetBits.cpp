#include <bits/stdc++.h>

using namespace std;

// Brian Kernighan's algorithm to count set bits
// The idea is to consider only the set bits of an integer by turning off its rightmost set bit (after counting it),
//  so the next iteration of the loop considers the Next Rightmost bit.
int main()
{
    int n;
    cin >> n;
    int count = 0;
    while (n)
    {
        n = n & (n - 1);
        count++;
    }
    cout << count;
}

// count set bits of all numbers upto n

int countSetBits(int n)
{
    int count = 0;
    while (n > 0)
    {
        int x = std::bit_width(n) - 1;
        count += x << (x - 1);
        n -= 1 << x;
        count += n + 1;
    }
    return count;
}
