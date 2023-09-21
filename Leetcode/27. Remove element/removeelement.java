class removeelement {
    public int removeElement(int[] nums, int val) {
        //initialize counter
        int b = 0;

        //iterate through nums
        for(int i = 0; i<nums.length;i++){
            //see if a number in the array is NOT equal to the value
            if(nums[i] != val){
                //if it is not equal, make the next earliest index in the array that number.
                 nums[b]=nums[i];
                b++;
            }
        }
        return b;
    }
}