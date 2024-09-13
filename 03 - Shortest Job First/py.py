def solve( bt):
        # Code here
        bt.sort()
        time = 0
        waitTime = 0
        
        for job in bt:
            waitTime += time
            time += job
            
        return int(waitTime/len(bt))

if __name__=="__main__":
    arr = [4,3,7,1,2]
    print("Average wait time :", solve(arr))
    arr = [1,2,3,4]
    print("Average wait time :", solve(arr))