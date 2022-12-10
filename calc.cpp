#include <iostream>

using namespace std;

int main() {
  int a, b;
  char op;
  cin >> a >> op >> b;

  if (op == '+') {
    cout << a << " " << op << " " << b << " = " << a + b;
  }
  else if (op == '-') {
    cout << a << " " << op << " " << b << " = " << a - b;
  }
  else if (op == '*') {
    cout << a << " " << op << " " << b << " = " << a * b;
  }
  else if (op == '/') {
    if (b == 0) {
      cout << "Ошибка, деление на 0!";
    }
    else {
      cout <<a<< " " <<op<< " " <<b<< " = " <<a / b; 
    }
  }
  else if (op == '%') {
    if (b == 0) {
      cout << "Ошибка, деление на 0!";
    }
    else {
      cout <<a<< " " <<op<< " " <<b<< " = " <<a % b; 
    }
  }
  else {
    cout << "Ошибка ввода!";
  }
}
