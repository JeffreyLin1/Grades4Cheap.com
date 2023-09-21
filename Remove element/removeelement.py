def remove_element(nums, val):
    # Initialize two pointers: one for iterating through the array and one for updating the array in-place
    i = 0
    
    # Iterate through the array
    for j in range(len(nums)):
        # If the current element is not equal to the value to be removed
        if nums[j] != val:
            # Copy the current element to the position pointed by the first pointer
            nums[i] = nums[j]
            # Move the first pointer one step forward
            i += 1
    
    # The first pointer now points to the position where the new length of the array
    # with the specified elements removed
    return i