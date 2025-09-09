#include <iostream>
#include <vector>
using namespace std;

class NQueens {
private:
    int n;
    vector<vector<int>> board;

    bool isSafe(int row, int col) {
        for (int i = 0; i < row; i++) {
            if (board[i][col] == 1) return false;
        }
        for (int i = row - 1, j = col - 1; i >= 0 && j >= 0; i--, j--) {
            if (board[i][j] == 1) return false;
        }
        for (int i = row - 1, j = col + 1; i >= 0 && j < n; i--, j++) {
            if (board[i][j] == 1) return false;
        }
        return true;
    }

    bool solve(int row) {
        if (row == n) return true;

        for (int col = 0; col < n; col++) {
            if (isSafe(row, col)) {
                board[row][col] = 1;
                // Debugging output (optional)
                // cout << "Placing queen at row " << row << ", col " << col << endl;

                if (solve(row + 1)) return true;

                // Backtrack
                board[row][col] = 0;

                // Debugging output (optional)
                // cout << "Backtracking from row " << row << ", col " << col << endl;
            }
        }
        return false;
    }

public:
    NQueens(int size) : n(size), board(size, vector<int>(size, 0)) {}

    void solveAndDisplay() {
        if (solve(0)) {
            displayBoard();
        } else {
            cout << "No solution exists for N = " << n << endl;
        }
    }

    void displayBoard() {
        cout << "Solution for " << n << "-Queens:\n";
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cout << (board[i][j] ? "Q " : ". ");
            }
            cout << endl;
        }
    }
};

int main() {
    int n;
    cout << "Enter the value of N for N-Queens: ";
    cin >> n;

    NQueens nq(n);
    nq.solveAndDisplay();

    return 0;
}
