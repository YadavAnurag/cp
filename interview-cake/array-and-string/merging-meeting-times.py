def mergeRanges(meetings):
  sortedMeetings = sorted(meetings)
  mergedMeetings = [sortedMeetings[0]]

  for currentStart,currentEnd in sortedMeetings[1:]:
    lastStart,lastEnd = mergedMeetings[-1]

    if currentStart <= lastEnd:
      mergedMeetings[-1] = (lastStart, max(lastEnd, currentEnd))
    else:
      mergedMeetings.append((currentStart, currentEnd)) 
  return mergedMeetings



print(mergeRanges([(1, 3), (2, 4)]))
print(mergeRanges([(5, 6), (6, 8)]))
print(mergeRanges([(1, 8), (2, 5)]))
print(mergeRanges([(1, 3), (4, 8)]))
print(mergeRanges([(1, 4), (2, 5), (5, 8)]))
print(mergeRanges([(5, 8), (1, 4), (6, 8)]))
print(mergeRanges([(1, 10), (2, 5), (6, 8), (9, 10), (10, 12)]))
print(mergeRanges([(0, 1), (3, 5), (4, 8), (10, 12), (9, 10)]))