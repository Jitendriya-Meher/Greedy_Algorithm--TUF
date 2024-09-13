def jump(nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        jump = 0
        l=0
        r=0
        n = len(nums)-1

        while r<n:
            maxJump = 0

            for i in range( l, r+1):
                maxJump = max( maxJump, i + nums[i])
            
            jump += 1
            l = r+1
            r = maxJump
        
        return jump

if __name__ == "__main__":
    nums = [2,3,1,1,4]
    print("max Jump: ", jump(nums))
    nums = [2,3,0,1,4]
    print("max Jump: ", jump(nums))