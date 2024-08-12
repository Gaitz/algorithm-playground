TOC

CHAPTER 1

- Introduction
- Submitting Soln, Task Types, Ad Hoc [7 Items]
- Complete Search [6 Items]
  Problem Types
- Greedy, Crafting Solutions [8 Items]

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
  - **先試算時間與空間複雜度是否符合條件** 才進行實作
  - 如果這種做法可以符合題目要求的 time constraint 和 space constraint 的話, 應該優先執行
  - 通常容易撰寫和除錯
- How to evaluate 'number of possibilities'
  - 使用 big-O 粗略估計所需要的次數
- 如果是 recursive 解法時, 需要特別注意 space constraint, 因為每個 function call 的 local variable space 都會成長一倍

---

Greedy Algorithm

- 每次子問題的最佳解會**固定**, 並且會持續推進成全域最佳解
  - 反之 DP 用來推展的子問題最佳解是不固定的
- Greedy Algorithm 如果能適用的時候, 通常是最佳解, 有最好的效能, 花少數的空間, 實作簡單
- 如果 Greedy Algorithm 不保證正確性時, 通常也會是好用的近似演算法 (approximation algorithm)

---

Note

- 在題目有提供, 某些參數的上下界時, 可能可以用完全走訪某個參數的可能值, 產生性能優化的演算法
  - 範例: Mixing Milk 的 O(n) 解法
- 已知的限制, 是提供演算法優化的提示
