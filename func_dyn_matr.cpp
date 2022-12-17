#include <iostream>

using namespace std;

void print(int ** arr, int row, int col) {
  //Вывод матрицы
  for(int i = 0; i < row; i++) {
    for(int j = 0; j < col; j++) {
      cout << arr[i][j] << " ";
    }
    cout << endl;
  }
}


void input(int ** arr, int row, int col)  {
  //Ввод матрицы
  for(int i = 0; i < row; i++) {
    for(int j = 0; j < col; j++) {
      arr[i][j] = i * j;
    }
  }
}


int ** createMatrix(int row, int col) { 
  //Создание матрицы в динамической памяти
  int **matrix = new int * [row];
  for(int i = 0; i < row; i++) {
    matrix[i] = new int[col];
  }
  return matrix;
}


int ** deleteMatrix(int ** matrix, int row, int col) { 
  //Освобождение матрицы в дин. памяти
  for(int i = 0; i < row; i++) {
    delete[] matrix[i];
  }
  delete[] matrix;
  return NULL;
}

int main() {
  int row, col;
  cin >> row >> col;

  int ** matrix = createMatrix(row, col);
  input(matrix, row, col);
  print(matrix, row, col);
  matrix = deleteMatrix(matrix, row, col);
  
}
