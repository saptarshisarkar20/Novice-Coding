class Solution {
    public int[] twoSum(int[] nums, int target) { 
        Map<Integer, Integer> map = new HashMap<>(); //Creating a hashmap(Stores data in Key:Value pair format)
        for (int i = 0; i < nums.length; i++)  
        {
                map.put(nums[i], i);  //Taking the numbers in nums and putting it into the hashmap. Key-> number, value-> index
        }
        
        for(int i=0;i<nums.length;i++)
        {
            int num = nums[i];  //considering for nums[i]
            int rem = target - num;  //To equal the target, we have to check if the difference between nums[i] and target is their in the map
            if(map.containsKey(rem)) //condition to check if rem is in the hashmap
            { 
                int index = map.get(rem);  //the index containing rem is obtained
                if(index == i) continue; //Say target is 2*nums[i], then rem will also hold nums[i] and hence it shouldn't be considered.
                return new int[]{i, index}; //If all the conditions are met, then an array containing i and index is returned
            }
        }
        return new int[]{}; //An empty array is returned if no matches are found
    }
}
