class job:
    def __init__(self, id, deadline, profit):
        self.id = id
        self.deadline = deadline
        self.profit = profit

def printJobs(jobs):
    for job in jobs:
        print(job.id,job.deadline,job.profit)

def jobScheduling( jobs):

    jobs.sort(key=lambda x: x.profit, reverse=True)

    maxDeadLine = jobs[0].deadline
    for job in jobs:
        maxDeadLine = max( maxDeadLine, job.deadline)
    
    deadLineArr = [-1]*(maxDeadLine+1)
    totalJobs = 0
    totalProfit = 0

    for job in jobs:
        deadLine = job.deadline
        for j in range (deadLine,0,-1):
            if deadLineArr[j] == -1:
                totalJobs += 1
                totalProfit += job.profit
                deadLineArr[j] = job.id
                break

    return totalJobs,totalProfit

if __name__ == "__main__":
    jobs = [job(1, 4, 20), job(2, 1, 10), job(3, 2, 40), job(4, 2, 30)]
    count, profit = jobScheduling(jobs)
    print(count, profit)