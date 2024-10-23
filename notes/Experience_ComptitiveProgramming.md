Strategies

- Brute force
- Greedy
- Two pointer / Three pointers
- Filtering vs. Generating
- Divide and conquer
  - 通常會自動形成 recursive 演算法
- Recursive
  - 思考三步驟 TRUST the function, find green box, find base case

Data Structure and Operations

- String
- Array
- Stack

Practice Resources:

- USACO TRAINING
- codeforces problem set

C++

- STL
  - `vector`
  - `set`
  - `tuple`
  - `sort()`

---

My Game Plan

- 先看一輪所有的題目
- 解題應該由負擔最輕的開始, 做到最困難的
- 先思考所有可能的演算法, 選擇最笨的那種
  - 演算法思考順序: Filtering (brute force) -> Generating
- 實際用數字計算, 時間複雜度, 空間複雜度, 特殊案例,
- 開始使用特殊案例建立演算法
- 開始撰寫, 同一時間只嘗試解決一題
  - 決定要使用的演算法
  - 建立 test case 案例
    - 一次只需要一個測試案例, 並且必須包含手動計算輸出值
  - 撰寫要使用的資料結構
  - 撰寫 input 的邏輯並且測試
  - 撰寫 output 的邏輯並且測試
  - Stepwise refinement, 先用註解, 撰寫出演算法邏輯的框架
  - 一次撰寫填入一個演算法區塊並且測試過
  - 使用 trivial test case 驗證整體的正確性
  - 嘗試破壞程式碼, 使用特殊案例來驗證正確性
  - 嘗試最佳化, 只有在需要的時候最佳化, 並且只最佳化到需要的程度, 並且必須保留之前所有可以運行的各種版本, 使用最極端的測試案例檢測實際的 runtime
- 草圖: 演算法, 複雜度, 相關的數字, 資料結構, tricky details

---
