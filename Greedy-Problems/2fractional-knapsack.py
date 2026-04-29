def fractionalKnapsack(W, arr, n):
    arr.sort(key = lambda x: x.value/x.weight, reverse=True)
    curWeight = 0
    finalValue = 0
    for i in range(n):
        if curWeight + arr[i].weight <= W:
            curWeight += arr[i].weight
            finalValue += arr[i].value
        else:
            remain = W - curWeight
            finalValue += arr[i].value/arr[i].weight * remain
            break
    return finalValue
 