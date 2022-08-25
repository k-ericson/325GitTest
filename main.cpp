
#include <iostream>

using namespace std;
int sum(int n);
int product(int n);

int main() {
  cout << "Give me number: ";
  int n;
  cin >> n;
  cout << "sum: " << sum(n) << endl;
  cout << "product: " << product(n) << endl;
  
  return 0;
}

int sum (int n) {
  int val = 0;
  for (int i = 0; i < n; i++)
    val += i;
  val += n;
  return val;
}

int product (int n) {
  int val = 1;
  for (int i = 2; i <= n; i++)
    val *= i;
  return val;
}
