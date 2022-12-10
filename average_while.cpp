#include <iostream>

using namespace std;


int main() {
  int sum = 0, count = 0;

  while (true) {
    int buf;
    cin >> buf;
    if (buf == 0) break;

    sum += buf;
    count++;
  }

  if (count == 0) {
    cout << "Чисел не было";
  }
  else { 
    cout << "Average: " << (float)sum / count;
  }
  
}
