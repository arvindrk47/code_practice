class Solution:
    def runningSum(self, nums: List[int]) -> List[int]:
        result = [nums[0]]
        for i in range(1,len(nums)):
            nums[i]+=nums[i-1]
            result.append(nums[i])
        return result