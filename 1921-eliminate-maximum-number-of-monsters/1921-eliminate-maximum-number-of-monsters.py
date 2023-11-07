from collections import deque

class Solution:
    def eliminateMaximum(self, dist: List[int], speed: List[int]) -> int:
        greedy = []
        result = 0
        
        for d, s in zip(dist, speed):
            greedy.append(d/s)
            
        greedy.sort()
        
        for day in range(len(greedy)):
            if greedy[day] > day:
                result += 1
            else:
                break
                
        return result