#include <iostream>
#include <vector>

class removedupes {
public:
    int removeDuplicates(std::vector<int>& nums) {
        // Handle the case of an empty vector
        if (nums.empty()) {
            return 0;
        }

        // Initialize a pointer for iterating through the vector
        int i = 0;

        // Iterate through the vector starting from the second element
        for (int j = 1; j < nums.size(); ++j) {
            // If the current element is different from the previous one
            if (nums[j] != nums[i]) {
                // Increment the pointer and update the element at that position
                ++i;
                nums[i] = nums[j];
            }
        }

        // The new length of the vector with duplicates removed is (i + 1)
        return i + 1;
    }
};
