#include <iostream>

using namespace std;

int main() {
  string s, reversed_s = "";
  cin >> s;

  for(int i = s.size() - 1; i >= 0; i--) {
    reversed_s += s[i];
  }

  if (s == reversed_s) cout << "Палиндром";
  else cout << "Не палиндром";
}
