class Solution:
    def containsDuplicate(self, nums: List[int]) -> bool:
        for i in range(len(nums)):
            for j in range(0, i):
                if nums[i] == nums[j]:
                    return True
        return False
