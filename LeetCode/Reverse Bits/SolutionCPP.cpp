class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        int res = 0;
        for(int i = 0 ; i < 32 ; ++i)
        {
            res = (res << 1) + (n & 1); // inserting 0 or 1 in res on the basis of last bit of n
            n = n >> 1; // righshifting n
        }
        return res;
    }
};
