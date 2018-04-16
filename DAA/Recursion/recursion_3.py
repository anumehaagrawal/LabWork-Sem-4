def subsets(nums):
    res = []
    backtrack(res, [], nums, 0)
    return res

def backtrack(res, temp, nums, start):
    res.append(temp[:])
    for i in range(start, len(nums)):
        temp.append(nums[i])
        backtrack(res, temp, nums, i + 1)
        temp.pop() # Backtrack

print(subsets([1, 2, 3,4]))