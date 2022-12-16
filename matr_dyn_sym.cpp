#include <iostream>

using namespace std;

int main() {
  int row, col;
  cin >> row >> col;

  //Создание матрицы в динамической памяти
  int **matrix = new int * [row];
  for(int i = 0; i < row; i++) {
    matrix[i] = new int[col];
  }
  
  //Ввод матрицы
  for(int i = 0; i < row; i++) {
    for(int j = 0; j < col; j++) {
      matrix[i][j] = i * j * 3;
    }
  }
  cout << "******************" << endl;
  //Вывод матрицы
  for(int i = 0; i < row; i++) {
    for(int j = 0; j < col; j++) {
      cout << matrix[i][j] << " ";
    }
    cout << endl;
  }

  // Подсчёт суммы эл-тов на главной диагонали
  int summ = 0;
  for(int i = 0; i < row; i++) {
    for(int j = 0; j < col; j++) {
      if(i == j) summ += matrix[i][j];
    }
  }
  // Вариант 2
  for(int i = 0; i < row; i++) {
      if(i == j) summ += matrix[i][i];
  }

  cout << endl << "Ответ: " << summ;
  
//  Ошибка
//  cout << matrix[10][10];
  
  //Освобождение матрицы в дин. памяти
  for(int i = 0; i < row; i++) {
    delete[] matrix[i];
  }
  delete[] matrix;
  
}
