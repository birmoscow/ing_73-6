#include <iostream>

using namespace std;


int main() {
  int sum = 0, count;
  cout << "Введите кол-во чисел: ";
  cin >> count;

  while (count > 0) {
    int buf;
    cin >> buf;
    sum += buf * buf;
    count--;
  }

  cout << "Ответ: " << sum;
}