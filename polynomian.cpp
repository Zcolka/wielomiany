#include <iostream>

using namespace std;

int dodawanie() {

  double st1, st2, w;

  cout << "Podaj najwiekszy stopien pierwszego wielomianu \n";
  cin >> st1;
  cout << "Podaj najwiekszy stopien drugiego wielomianu \n";
  cin >> st2;

  double tab1[100], tab2[100];

  // Czystka tabów
  for (int Z = 100; Z >= 0; Z--) {
    tab1[Z] = 0;
    tab2[Z] = 0;
  }
  // ===============

  cout << "Wpisz kolejno wspolczynniki pierwszego wielomianu";
  for (int x = st1; x >= 0; x--) {
    cin >> tab1[x];
    if (tab1[x] != 0) {
      cout << tab1[x];
      if (x > 1)
        cout << "x^" << x << "  +  ";
      else {
        cout << "x^" << x;
        break;
      }
    }
  }
  cout << endl;
  cout << "Wpisz kolejno wspolczynniki drugeigo wielomianu";
  for (int y = st2; y >= 0; y--) {
    cin >> tab2[y];
    if (tab2[y] != 0) {
      cout << tab2[y];
      if (y > 1)
        cout << "x^" << y << "  +  ";
      else {
        cout << "x^" << y;
        break;
      }
    }
  }
  cout << endl;
  // DODAWANIE WIELOMIANOW
  cout << "Suma dwoch wielomianow to" << endl << endl;
  int G;
  if (st1 >= st2) {
    for (int G = 1; G <= st1; G++) {
      cout << tab1[G] + tab2[G];
      cout << "x^" << G << "  +  ";
    }
  } else {
    for (int G = 1; G <= st2; G++) {
      cout << tab1[G] + tab2[G];
      cout << "x^" << G << "  +  ";
    }
  }
}

int odejmowanie() {
  // input
  double st1, st2, w;

  cout << "Podaj stopien pierwszego wielomianu \n";
  cin >> st1;
  cout << "Podaj stopien drugiego wielomianu \n";
  cin >> st2;

  double tab1[100], tab2[100];

  // Czystka tabów
  for (int Z = 100; Z >= 0; Z--) {
    tab1[Z] = 0;
    tab2[Z] = 0;
  }
  // ===============

  cout << "Wpisz kolejno wspolczynniki pierwszego wielomianu";
  for (int x = st1; x >= 0; x--) {
    cin >> tab1[x];
    if (tab1[x] != 0) {
      cout << tab1[x];
      if (x > 1)
        cout << "x^" << x << "  +  ";
      else {
        cout << "x^" << x;
        break;
      }
    }
  }
  cout << endl;
  cout << "Wpisz kolejno wspolczynniki drugiego wielomianu";
  for (int y = st2; y >= 0; y--) {
    cin >> tab2[y];
    if (tab2[y] != 0) {
      cout << tab2[y];
      if (y > 1)
        cout << "x^" << y << "  +  ";
      else {
        cout << "x^" << y;
        break;
      }
    }
  }
  cout << endl;
  // odejmowanie

  cout << endl << "Roznica dwoch wielomianow to" << endl << endl;
  ;
  int G;
  if (st1 >= st2) {
    for (int G = 1; G <= st1; G++) {
      cout << tab1[G] - tab2[G];
      cout << "x^" << G << "  +  ";
    }
  } else {
    for (int G = 1; G <= st1; G++) {
      cout << tab1[G] - tab2[G];
      cout << "x^" << G << "  +  ";
    }
  }
}

int mnozenie() {

  double st1, st2, w;

  cout << "Podaj najwiekszy stopien pierwszego wielomianu \n";
  cin >> st1;
  cout << "Podaj najwiekszy stopien drugeigo wielomianu \n";
  cin >> st1;

  double tab1[100], tab2[100];

  // Czystka tabów
  for (int Z = 100; Z >= 0; Z--) {
    tab1[Z] = 0;
    tab2[Z] = 0;
  }
  // ===============

  cout << "Wpisz kolejno wspolczynniki pierwszego wielomianu";
  for (int x = st1; x >= 0; x--) {
    cin >> tab1[x];
    if (tab1[x] != 0) {
      cout << tab1[x];
      if (x > 1)
        cout << "x^" << x << "  +  ";
      else {
        cout << "x^" << x;
        break;
      }
    }
  }
  cout << endl;
  cout << "Wpisz kolejno wspolczynniki drugiego wielomianu";
  for (int y = st2; y >= 0; y--) {
    cin >> tab2[y];
    if (tab2[y] != 0) {
      cout << tab2[y];
      if (y > 1)
        cout << "x^" << y << "  +  ";
      else {
        cout << "x^" << y;
        break;
      }
    }
  }
  cout << endl;
  // Mnozenie

  cout << "iloczyn dwoch wielomianów to" << endl;

  int i = 0;
  int c[100];

  for (int r = st1; r >= 0; r--) {
    for (int t = st2; t >= 0; t--) {
      c[i] = tab1[r] * tab2[t];

      if (c[i] != 0) {
        cout << c[i];
        if (r + t > 0)
          cout << "x^" << r + t << "  +  ";
      }
      i++;
    }
  }

  return 0;
}
