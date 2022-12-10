/*********************************************
  Вычисление суммы квадратов введённых чисел. 
  Пользователь вводит количество чисел,
  затем последовательно сами числа
**********************************************/


#include <iostream>

using namespace std;


int main() {
  int sum = 0, count;
  cout << "Введите кол-во чисел: ";
  cin >> count;
  
  for (int buf; count > 0 ; count--) {
    cin >> buf;
    if ( buf == 5 ) continue;
    sum += buf * buf; // sum = sum + buf * buf;
  }

  cout << "Ответ: " << sum;
  
}
