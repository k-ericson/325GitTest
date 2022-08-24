
#include <iostream>

using namespace std;
int sum(int n);

int main() {
  cout << "Give me number: ";
  int n;
  cin >> n;
  cout << "sum: " << sum(n) << endl;
  
  return 0;
}

int sum (int n) {
  int val = 0;
  for (int i = 0; i < n; i++)
    val += i;
  val += n;
  return val;
}
