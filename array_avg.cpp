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

/*

#include <iostream>

using namespace std;

void createArray(int arr[], int size) {
  for(int i = 0; i < size; i++) {
    arr[i] = i;
  }
}


float averageArray(int arr[], int size) {
  float sum = 0;
  for(int i = 0; i < size; i++) {
    sum += arr[i];
  }
  return sum / size;
}


int main() {
  int *array = new int[5];
  createArray(array, 5);

  cout << averageArray(array, 5);
}

*/
