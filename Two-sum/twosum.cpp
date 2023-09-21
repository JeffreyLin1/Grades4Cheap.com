#include <vector>
#include <unordered_map>
class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target) {
        // Create an unordered_map to store the values we've seen and their indices
        std::unordered_map<int, int> num_map;
        
        // Iterate through the vector
        for (int i = 0; i < nums.size(); ++i) {
            // Calculate the complement (the number needed to reach the target)
            int complement = target - nums[i];
            
            // Check if the complement exists in the map
            if (num_map.find(complement) != num_map.end()) {
                // If found, return the indices of the two numbers
                return {num_map[complement], i};
            }
            
            // If not found, add the current number and its index to the map
            num_map[nums[i]] = i;
        }
        
        // If no solution is found, return an empty vector or handle it as needed
        return {};
    }
};