TOC

CHAPTER 1

- Introduction
- Submitting Soln, Task Types, Ad Hoc [7 Items]
- Complete Search [6 Items]
  Problem Types

---

- Dynamic Programming
- Greedy
- Complete Search
- Flood Fill
- Shortest Path
- Recursive Search Techniques
- Minimum Spanning Tree
- Knapsack
- Computational Geometry
- Network Flow
- Eulerian Path
- Two-Dimensional Convex Hull
- BigNums
- Heuristic Search
- Approximate Search
- Ad Hoc Problems

Ad Hoc Problems

- 代表該演算法無法被標準化分類
- 通常代表更困難, 不存在標準化或一般化的解法
- 也代表是一個有挑戰性的樂趣所在
- 通常需要仔細地閱讀問題描述, 來尋求突破點
- 需要一定程度的最佳化, 來避免過於糟糕的效能
- 當你無法快速的把問題分類成一般類型要預期到可能遇到了 Ad Hoc problem

---

Complete Search

- 依據 KISS 原則, 不管是否有更快速的演算法, 而是先完成
- 使用的是 brute-force, straight-forward, try-them-all
- 應該是所有問題的第一個解法
  - 如果這種做法可以符合題目要求的 time constraint 和 space constraint 的話, 應該優先執行
  - 通常容易撰寫和除錯
- How to evaluate 'number of possibilities'
  - 使用 big-O 粗略估計所需要的次數
- 如果是 recursive 解法時, 需要特別注意 space constraint, 因為每個 function call 的 local variable space 都會成長一倍
