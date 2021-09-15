#include <iostream>
using namespace std;

int main()
{
  setlocale(LC_CTYPE, "rus");
  double a, b, c, d, e; // переменные исходов
  double a2, c2, c3; // это тоже
  cout << "Число первого благоприятного исхода:" << endl;
  cin >> a;
  cout << "Число второго благоприятного исхода:" << endl;
  cin >> a2;
  cout << "Число всех исходов:" << endl;
  cin >> b;
  if (a2 > 0) {
    c = (a + a2) / b;
    cout << "Вероятность события: " << c << "%" << endl;
    c2 = a / b;
    c3 = a2 / b;
    e = c3 * c2;
    cout << "Одновременное событие: " << a2 << "%" << endl;
  }
  else {
    c = a / b;
    cout << "Вероятность события: " << c << "%" << endl;
  }
  d = 1 - c;
  cout << "Невероятность: " << d << "%" << endl;
}
