/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number[]}
 */
var twoSum = function(nums, target) {
    let map = {};
    
    for(let i in nums){
        let ans = target - nums[i];
        
        if(map[ans] !== undefined){
            return [map[ans],i];
        }
        else{
            map[nums[i]] = i;
        }
    }
    
    return false;
};
