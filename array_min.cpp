/*
  Найти минимальный элемент массива типа int

Пользователь вводит количество элементов массива, далее сами элементы.

Ваша задача найти минимальный элемент массива.
Обязательно искать минимальный элемент массива в отдельном цикле!!!
*/

#include <iostream>

using namespace std;

int main() {
  int size, min;
  cin >> size;

  int arr[size];
  for(int i = 0; i < size; i++) cin >> arr[i];

  min = arr[0];
  for(int i = 0; i < size; i++) {
    if(arr[i] < min) min = arr[i];
  }

  cout << min;
}
