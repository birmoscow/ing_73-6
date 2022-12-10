/******************************

  Проверка числа на палиндром

*******************************/

#include <iostream>

using namespace std;

int main() {
  unsigned int num;
  cout << "Введите число: ";
  cin >> num;

  unsigned int num_cpy = num, num_rev = 0;

  while(num_cpy > 0) {
    num_rev = num_rev * 10 + num_cpy % 10;
    num_cpy /= 10;
  }

  if (num_rev == num) cout << "Палиндром";
  else cout << "Не палиндром";
  
}
