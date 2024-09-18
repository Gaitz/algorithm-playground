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

Crafting Winning Solutions

- 預先先思考好比賽策略
  - 在心理預期上做好準備, 設想可能面對的情況, 以及心理反應

Game Plan

- 先看一輪所有的題目
- 草圖: 演算法, 複雜度, 相關的數字, 資料結構, tricky details
- 先思考所有可能的演算法, 選擇最笨的那種
- 實際用數字計算, 時間複雜度, 空間複雜度, 特殊案例,
- 開始使用特殊案例建立演算法
- 解題應該由負擔最輕的開始, 做到最困難的
- 開始撰寫, 同一時間只嘗試解決一題
  - 決定要使用的演算法
  - 建立 test case 案例
  - 撰寫要使用的資料結構
  - 撰寫 input 的邏輯並且測試
  - 撰寫 output 的邏輯並且測試
  - Stepwise refinement, 先用註解, 撰寫出演算法邏輯的框架
  - 一次撰寫填入一個演算法區塊並且測試過
  - 使用 trivial test case 驗證整體的正確性
  - 嘗試破壞程式碼, 使用特殊案例來驗證正確性
  - 嘗試最佳化, 只有在需要的時候最佳化, 並且只最佳化到需要的程度, 並且必須保留之前所有可以運行的各種版本, 使用最極端的測試案例檢測實際的 runtime

時間管理策略 (time management strategy) 與止損方案 (damage control)

- 你現在已經 debug 多久了？
- 你認為是哪種類型的 bug 存在
- 演算法本身正確嗎
- 資料結構是否需要換
- 有沒有任何證據哪裡出問題了
- 短時間的 (20 mins) debug 是比直接切換問題更適合, 通常解一題新的需要花 45 分鐘
- 什麼時候返回之前放棄的問題
- 什麼時候你花時間進行優化, 勝過切換到下一題
- 思考從現在開始的報酬, 從現在開始下一個小時, 如何才能獲得最多 (停止思考先前的付出 (忽視沈默成本), 專注在未來的報酬)
- 比賽結束的前五分鐘停止寫程式, 檢查每題的答案, 關閉所有的 assert 和 debugging output

Tips and Tricks

- Brute force it when you can
- KISS 原則, Simple is smart
- Hint: 專注在 limits, (來自題目的描述中, 特殊的限制, 通常是優化的關鍵)
- Waste memory when it makes your life easier
- 不要刪除你的除錯程式碼, 只要註解他來關閉
- 漸進式地進行優化, 只要優化到剛好即可
- 保留所有可運作的版本
- Code to debug
  - whitespace is good
  - 使用有意義的變數名稱
  - 不要重用變數
  - stepwise refinement (一步一步進行實作和測試)
  - comment before code (先用註解描述)
- 如果可以避免使用 pointer
- 如果可以避免使用 dynamic memory, statically allocate everything
- 避免使用 float point, 如果要使用要時刻留意 tolerance, 永遠不要進行 float point equality
- Comments on comments
  - 不要太長的論述, 只要簡短的重點條列
  - 解釋高階的演算法功能, 不要描述程式碼細節
  - 描述 trickery code
  - 區隔和描述 functional section
  - 任何你需要思考的
  - 任何疑問的地方
  - 註解 array index order 代表的意義
- 紀錄比賽中的一切, 成功的地方, 犯錯的地方, 哪裡可以進行得更好, 用此來調整和增進 game plan

Solution Paradigms

- Generating vs. Filtering
  - Filtering, 產生很多個可能的答案, 再來篩選正確的, 通常演算法更容易撰寫但是運行較慢
  - Generating, 直接生成出正確的答案, 演算法通常較困難, 但是運行速度較快
  - 先計算複雜度再來選擇要使用哪種策略
- Precomputation
  - 先把資料調整成其他資料結構, 加速某些操作
  - 或者先生成資料, 再來計算, 加速資料讀取時間
- Decomposition
  - 困難的問題通常會混合數種演算法
  - 抽象化和分割, 讓每個演算法可以獨立撰寫
- Symmetries
  - 注意對稱性, 很多時候可以只解決部分就很快的推導出其他具有對稱性的部分
- Forward vs. Backward
  - 很多時候從 backward 進行解題, 會比 forward 解題更有效
  - 時時注意, 各種不同的順序 (forward, backward, 特殊的順序) 的可能性
- Simplification
  - 有些問題可以以其他方式重現, 就可以用已知的解法進行解答

---

Note

- 在題目有提供, 某些參數的上下界時, 可能可以用完全走訪某個參數的可能值, 產生性能優化的演算法
  - 範例: Mixing Milk 的 O(n) 解法
- 明確的思考選用 Generating 或是 Filtering 的演算法
  - Filtering 應該優先 (brute force)
- 已知的限制, 是提供演算法優化的提示
- 題目沒有提供的資訊, 不要假設
  - 例如: 題目沒有說 input 會是 sorted 時, 儘管 input example 是 sorted 也不能自動當作是

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
