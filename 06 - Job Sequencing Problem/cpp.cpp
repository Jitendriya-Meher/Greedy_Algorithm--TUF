#include <bits/stdc++.h>
using namespace std;

struct Job
{
    int id;     // Job Id
    int dead;   // Deadline of job
    int profit; // Profit if job is over before or on deadline
};

static bool comp(Job a, Job b)
{
    return a.profit > b.profit;
}

pair<int, int> JobScheduling(Job arr[], int n)
{
    sort(arr, arr + n, comp);

    int maxDeadLine = arr[0].dead;
    for (int i = 0; i < n; i++)
    {
        maxDeadLine = max(maxDeadLine, arr[i].dead);
    }

    int deadLineArr[n + 1];
    for (int i = 0; i <= n; i++)
    {
        deadLineArr[i] = -1;
    }

    int totalJobs = 0;
    int totalProfit = 0;

    for (int i = 0; i < n; i++)
    {
        int deadLine = arr[i].dead;
        for (int j = deadLine; j >= 1; j--)
        {
            if (deadLineArr[j] == -1){
                deadLineArr[j] = arr[i].id;
                totalJobs++;
                totalProfit += arr[i].profit;
                break;
            }
        }
    }

    return {totalJobs, totalProfit};
}

int main()
{

    int n = 4;
    Job arr[n] = {{1, 4, 20}, {2, 1, 10}, {3, 2, 40}, {4, 2, 30}};

    pair<int, int> ans = JobScheduling(arr, n);
    cout << ans.first << " " << ans.second << endl;

    return 0;
}