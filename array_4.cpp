/*
  Циклический сдвиг вправо элемента массива.
  Пользователь вводит количество элементов массива, далее   сами элементы, после чего он вводит индекс элемента (k), который надо сдвинуть и на сколько элементов вправо (n).
  Если элемент оказался в конце массива, то он переносится в начало, остальный сдвигаются вправо

  В конце программы вывести итоговый массив.
*/

#include <iostream>

using namespace std;

int main() {
  int size, k, n;
  cin >> size;

  int arr[size];
  for(int i = 0; i < size; i++) cin >> arr[i];
  cin >> k >> n;

  while(n > 0) {
    if(k == size - 1) {
      int buf = arr[k];
      for(int i = size - 1; i > 0; i--) {
        arr[i] = arr[i-1];
      }
      arr[0] = buf;
      k = 0;
    }
    else {
      swap(arr[k], arr[k+1]);
      k++;
    }
    n--;
  }

  cout << "вывод" << endl;
  for(int i = 0; i < size; i++) cout << arr[i] << endl;
}
