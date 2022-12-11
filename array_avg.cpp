#include <iostream>

using namespace std;

int main() {
  int size;
  cout << "Введите кол-во элементов массива: ";
  cin >> size;

  int array[size];

  for(int i = 0; i < size; i++) {
    cout << "Введите элемент с индексом " << i << ": ";
    cin >> array[i];
  }

  int sum = 0;
  for(int i = 0; i < size; i++) {
    sum += array[i];
  }

  cout << "Среднее арифметическое: " << (float)sum / size;
}
