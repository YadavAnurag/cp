def binSearch(target, nums):
  floorIndex = -1
  ceilingIndex = len(nums)

  while floorIndex + 1 < ceilingIndex:
    distance = ceilingIndex - floorIndex
    halfDistance = distance // 2
    guessIndex = floorIndex + halfDistance

    guessValue = nums[guessIndex]
    if guessValue == target:
      return guessIndex

    if guessValue > target:
      ceilingIndex = guessIndex
    else:
      floorIndex = guessIndex

  return False

nums = list(map(int, input().split()))
target = int(input())
print(binSearch(target, nums))
