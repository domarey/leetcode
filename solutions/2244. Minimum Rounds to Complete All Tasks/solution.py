class Solution(object):
    def minimumRounds(self, tasks):
        """
        :type tasks: List[int]
        :rtype: int
        """
        minRounds = 0
        roundCosts = [-1,-1,1,1]
        tasks = sorted(tasks)
        countTasks = {
            tasks[0]: 0,
        }
        for i in range(len(tasks)):
            countTasks[tasks[i]] += 1
            if i < len(tasks)-1 and tasks[i] != tasks[i+1]:
                countTasks[tasks[i+1]] = 0
            if i == len(tasks)-1 or tasks[i] != tasks[i+1]:
                if countTasks[tasks[i]] >= len(roundCosts):
                    for j in range(len(roundCosts),countTasks[tasks[i]]+1):
                        if roundCosts[j-2] < roundCosts[j-3]:
                            roundCosts.append(roundCosts[j-2]+1)
                        elif roundCosts[j-3] > 0:
                            roundCosts.append(roundCosts[j-3]+1)
                        else:
                            roundCosts.append(roundCosts[j-2]+1)
                if roundCosts[countTasks[tasks[i]]] == -1:
                    return -1
                else:
                    minRounds += roundCosts[countTasks[tasks[i]]]
        return minRounds
