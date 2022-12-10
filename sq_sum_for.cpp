#include <iostream>

using namespace std;


int main() {
  int sum = 0, count;
  cout << "Введите кол-во чисел: ";
  cin >> count;
  
  for (int buf; count > 0 ; count--) {
    cin >> buf;
    sum += buf * buf;
  }

  cout << "Ответ: " << sum;
  
}
