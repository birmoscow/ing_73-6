#include <iostream>

using namespace std;

void foo(int arr[], int size) {
  for(int i = 0; i < size; i++) {
    arr[i] = i;
  }
}


int main() {
  int array[5];
  foo(array, 5);

  for(int i = 0; i < 5; i++) {
    cout << array[i] << " ";
  }
}
