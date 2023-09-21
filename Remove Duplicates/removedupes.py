def removedupes(nums):
    # Handle the case of an empty array
    if not nums:
        return 0

    # Initialize a pointer for iterating through the array
    i = 0

    # Iterate through the array starting from the second element
    for j in range(1, len(nums)):
        # If the current element is different from the previous one
        if nums[j] != nums[i]:
            # Increment the pointer and update the element at that position
            i += 1
            nums[i] = nums[j]

    # The new length of the array with duplicates removed is (i + 1)
    return i + 1
