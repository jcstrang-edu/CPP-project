#ifndef SUDOKUBOARD_HPP
#define SUDOKUBOARD_HPP

class SudokuBoard
{
  private:
    int** playspace;
    int numberSpace;
  public:
    SudokuBoard(int = 9);
    ~SudokuBoard();
    int*** getPlayspace();
    void setPlayspace(int***);
};

#endif //SUDOKUBOARD_HPP