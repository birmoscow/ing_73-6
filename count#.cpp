/*
  2. Посчитать количество символов '#' в строке, созданной в старом стиле.

Пользователь вводит количество символов в строке, далее саму строку.
Ваша задача посчитать количество '#' в введённой строке.

Не забывайте про специальный символ '\0' в конце строки!
*/

#include <iostream>

using namespace std;

int main() {
  int size, count = 0;
  cin >> size;
  
  char str[size + 1];
  cin >> str;
  str[size] = 0;

  for(int i = 0; i < size; i++) {
    if(str[i] == '#') count++;
  }
  
/*
  char *ptr = str;

  while(*ptr != '\0') {
    if(*ptr == '#') count++;
    ptr++;
  }
*/
  cout << count;
  
}
