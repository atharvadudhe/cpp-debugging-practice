# C++ Debugging Practice – N Queens Problem

## Project Overview
This repository demonstrates **problem-solving and debugging skills** in C++  
through the classic **N-Queens backtracking problem**.

The N-Queens problem is a famous puzzle where the task is to place `N` queens on an `N x N` chessboard such that no two queens attack each other.  
It highlights **recursion, backtracking, and debugging skills**.

---

## Key Concepts
- **Backtracking Algorithm** – Try, fail, backtrack, and retry.  
- **Recursion** – Solving smaller subproblems step by step.  
- **Debugging Mindset** – Checking safety constraints before placing queens.  
- **Problem-Solving** – Breaking down a complex problem into simple steps.  

---


## Debugging Approach
- Checked each row, column, and diagonal before placing a queen (safety check).  
- Used **backtracking**: if a placement fails, revert and try next possibility.  
- Added optional debug prints to trace algorithm execution.  
- Tested with multiple N values to ensure correctness.

---

## Example Run
```bash
Enter the value of N for N-Queens: 4
Solution for 4-Queens:
. Q . .
. . . Q
Q . . .
. . Q .
```

## 🚀 How to Run
1. Clone the repository:
   ```bash
   git clone https://github.com/atharvadudhe/cpp-debugging-practice.git
   cd cpp-debugging-practice
   ```
2. Compile:
    ```bash
    g++ nqueens.cpp -o nqueens
    ```
3. Run:
    ```bash
    ./nqueens
    ```

## Why This Project?
- Showcases **debugging and problem-solving** (key JD requirement).  
- Demonstrates **recursion + backtracking in C++**.  
- Strengthens understanding of **algorithmic thinking**.  

---

## Future Enhancements
- Display **all possible solutions** instead of just one.  
- Add visualization for better understanding.  
- Extend to other backtracking problems (Sudoku, Knight’s Tour).  
