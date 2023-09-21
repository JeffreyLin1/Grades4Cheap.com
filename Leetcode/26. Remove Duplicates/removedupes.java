import java.util.*;

class removedupes{
    public int removeDuplicates(int[] nums) {
        //initialize hashset to store unfamiliar numbers
        Set<Integer>fin = new HashSet<>();

        //initialize counter
        int k =0;

        //iterate through nums
        for(int i = 0; i<nums.length;i++){
            //detect if the number is not already in the hashset
            if(!fin.contains(nums[i])){
                //if not, make the earliest possible index that number
                nums[k] = nums[i]; 
                //increase counter for next number
                k++;
            }

            //add the number to set 
            fin.add(nums[i]);
        }
        return k;
    }
}