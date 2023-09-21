#include <iostream>
#include <vector>

class removeelement {
public:
    int removeElement(std::vector<int>& nums, int val) {
        // Initialize two pointers: one for iterating through the array
        // and one for updating the array in-place
        int i = 0;
        
        // Iterate through the vector
        for (int j = 0; j < nums.size(); ++j) {
            // If the current element is not equal to the value to be removed
            if (nums[j] != val) {
                // Copy the current element to the position pointed by the first pointer
                nums[i] = nums[j];
                // Move the first pointer one step forward
                ++i;
            }
        }
        
        // The first pointer now points to the position where the new length of the array
        // with the specified elements removed
        return i;
    }
};