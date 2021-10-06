class Solution:
    def reverseBits(self, n: int) -> int:
		# convert the number into 32 bit binary 
        bin_num = '{:032b}'.format(n)
		# reverse the string and convert into integer using inbuilt method
        return int(bin_num[::-1], 2)