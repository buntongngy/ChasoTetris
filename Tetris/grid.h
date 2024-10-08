#pragma once
#include <vector>
#include <raylib.h>


class Grid {

public:
    Grid();
    void Initialize();
    void Print();
    void Draw();
    bool isOutOfBound(int row, int cols);
    bool isCellEmpty(int row, int cols);
    int ClearFullRow();
    int grid[40][20];
    int cellSize;

private:
   
    int numRows;
    int numCols;
   
    std::vector<Color> colors;
    bool isRowFull(int row);
    void clearRow(int row);
    void MoveRowDown(int row, int numRow);
};


