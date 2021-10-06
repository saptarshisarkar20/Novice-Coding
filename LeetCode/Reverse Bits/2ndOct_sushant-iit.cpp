#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    uint32_t reverseBits(uint32_t n)
    {
        uint32_t ans = 0, curr = 1;
        for (int i = 0; i < 32; i++)
        {
            if ((curr & n) != 0)
                ans = ans ^ (1 << (31 - i));
            curr = curr << 1;
        }
        return ans;
    }
};

int main()
{
    Solution s1;
    //This is the input number, choose according to your own:
    uint32_t n = 43261596; //This  represents 00000010100101000001111010011100
    cout << s1.reverseBits(n);
    return 0;
}