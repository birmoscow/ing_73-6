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


/*

#include <iostream>

using namespace std;

int main() {
  string s;
  bool flag = true;
  cin >> s;

  for(int i = 0; i < s.size(); i++) {
    if(s[i] != s[s.size() - i - 1]) {
      flag = false;
      break;
    }
  }

  if (flag) cout << "Палиндром";
  else cout << "Не палиндром";
}

*/
