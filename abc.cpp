/***********************************************
  Считаем количество вхождений строки "abc"
  в введённой пользователем строке
************************************************/

#include <iostream>

using namespace std;

int main() {
  string s;
  int count = 0;
  cin >> s;

  for(int i = 0; i < s.size() - 2; i++) {
    if(s[i] == 'a' && s[i + 1] == 'b' && s[i + 2] == 'c') {
      count += 1;
    }
  }

  cout << count;
}
