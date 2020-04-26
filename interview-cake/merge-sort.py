def mergeSort(listToSort):

  if len(listToSort) < 2:
    return listToSort

  midIndex = len(listToSort) // 2
  left = listToSort[:midIndex]
  right = listToSort[midIndex:]

  sortedList = []
  sortedLeft = mergeSort(left)
  sortedRight = mergeSort(right)

  currentLeftIndex = 0
  currentRightIndex = 0

  while currentLeftIndex < len(left) and currentRightIndex < len(right):
    if sortedLeft[currentLeftIndex] < sortedRight[currentRightIndex]:
      sortedList.append(sortedLeft[currentLeftIndex])
      currentLeftIndex += 1
    else:
      sortedList.append(sortedRight[currentRightIndex])
      currentRightIndex += 1

  while currentLeftIndex < len(left):
    sortedList.append(sortedLeft[currentLeftIndex])
    currentLeftIndex += 1
  while currentRightIndex < len(right):
    sortedList.append(sortedRight[currentRightIndex])
    currentRightIndex += 1

  return sortedList

listToSort = list(map(int, input().split()))
print(mergeSort(listToSort))
