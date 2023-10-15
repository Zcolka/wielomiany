#include "polynomian.cpp"
#include <iostream>

int main() {
  cout << "Wybierz dzialanie ktore chcesz wykonac na wielomianach";
  cout << "1 - Dodawanie , 2 - Odejmowanie , 3 - Mnozenie" << endl;

  int n;
  cin >> n;
  if (n == 1)
    dodawanie();
  else if (n == 2)
    odejmowanie();
  else if (n == 3)
    mnozenie();
  else
    cout << "Zla odpowiedz wybierz ponownie";
}
