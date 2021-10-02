/*Question: Reverse bits of a given 32 bits unsigned integer.*/

public class Solution {
    // We need treat n as an unsigned value
    public int reverseBits(int n) {
        int ans = 0;
        for(int i=0;i<32;i++)
        {
            ans = (ans<<1)|(n&1);
            n = n>>1;
        }
        return ans;
    }
}
