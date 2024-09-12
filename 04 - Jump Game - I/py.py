def canJump(nums):
        """
        :type nums: List[int]
        :rtype: bool
        """
        maxJump = 0

        for i in range (len(nums)):
            if( i > maxJump):
                return False
            if( maxJump < ( i+nums[i])):
                maxJump = i+nums[i]
        
        return True

if __name__ == "__main__":
    nums = [2,3,1,1,4]
    print("can jump :", canJump(nums))
    nums = [3,2,1,0,4]
    print("can jump :", canJump(nums))