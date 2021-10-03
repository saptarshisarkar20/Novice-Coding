

class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
   
     uint32_t ans = 0;
        
        for(int i=0;i<32;i++){
           ans<<=1;      //left shifting to add more numbers
            if(n&1==1) ans++;
            n>>=1;    //right shifting
        }
        
        return ans;
        
    }
};
/*100% faster */
