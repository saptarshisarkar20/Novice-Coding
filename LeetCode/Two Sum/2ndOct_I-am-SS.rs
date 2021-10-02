use std::collections::HashMap;
impl Solution {
    pub fn two_sum(nums: Vec<i32>, target: i32) -> Vec<i32> {
        let num_map:HashMap<i32, usize> = nums.iter().enumerate().map(|(index, value)| {(*value, index)}).collect();
        
        for (index, value) in nums.iter().enumerate(){
            let temp_result = target - value;
            match num_map.get(&temp_result){
                Some(ind) => {
                    if index as i32 != *ind as i32{
                        return vec![index as i32, *ind as i32]
                    }
                    
                },
                None => (),
            }
        }
        
        vec![0, 0]
    }
}
