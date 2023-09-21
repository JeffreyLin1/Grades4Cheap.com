import java.util.*;

class Solution {
    public int[] twoSum(int[] nums, int target) {
        //initalize compliment number(number needed to reach target)
        int com =0;

        //initialize hashmap, to store numbers and their compliment numbers for target
        Map<Integer, Integer> fin = new HashMap<>();

        //iterate through nums array
        for(int i =0; i<nums.length;i++){
            //initialize compliment number
            com = target-nums[i];

            //if the number is a compliment stored in hashmap, return the numbers
            if(fin.containsKey(com)){
                return new int[]{i, fin.get(com)};
            }

            //put the number and its compliment as key and value in hashmap
            fin.put(nums[i], i);
        }
        return null;
    }
}