import sys
import math
import heapq
from collections import Counter, defaultdict
input = sys.stdin.readline
def inp():
    return int(input())
def inlt():
    return list(map(int, input().split()))
def insr():
    s = input()
    return list(s[:len(s) - 1])
def invr():
    return map(int, input().split())
 
 
t = inp()
 
output = []
for _ in range(t):
    n = inp()
    A = inlt()
    q = inp()
 
    lu = {}
 
    for i in range(len(A)):
        for j in range(i, len(A)):
            agg = A[i]
            for m in range(i+1, j+1):
                agg &= A[m]
            lu[i, j] = agg
 
    #print('*', n, A, q, lu)
 
    ans = []
    for _ in range(q):
        l, k = inlt()
        for i in range(len(A) - 1, l - 2, -1):
            if lu[l-1, i] >= k:
                ans.append(i+1)
                break
        else:
            ans.append(-1)
 
        #print(l, k, ans[-1])
 
    output.append(' '.join(map(str, ans)))
 
for o in output:
    print(o)
