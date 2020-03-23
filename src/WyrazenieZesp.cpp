#include "WyrazenieZesp.hh"

/*
 * Tu nalezy zdefiniowac funkcje, ktorych zapowiedzi znajduja sie
 * w pliku naglowkowym.
 */

bool WczytajW (WyrazenieZesp &W)
{ char znak;
  WczytajL (W.Arg1);
  cin >> znak;
  WczytajL (W.Arg2);
  switch(znak) {
    case '+':
    W.Op = Op_Dodaj;
    break;

    case '-':
    W.Op = Op_Odejmij;
    break;

    case '*':
    W.Op = Op_Mnoz;
    break;

    case '/':
    W.Op = Op_Dziel;
    break;

    default:
    std::cout << "nie ma takiej opcji" <<std::endl;
    break;
  }
  return true;
}

LZespolona Oblicz (WyrazenieZesp  W)
{ LZespolona Wynik;
  switch(W.Op) {
    case Op_Dodaj:
    Wynik = W.Arg1 + W.Arg2;
    break;

    case Op_Odejmij:
    Wynik = W.Arg1 - W.Arg2;
    break;

    case Op_Mnoz:
    Wynik = W.Arg1 * W.Arg2;
    break;

    case Op_Dziel:
    Wynik = W.Arg1 / W.Arg2;
    break;
  }
  return Wynik;
}

void WyswietlW (WyrazenieZesp  &W)
{ WyswietlL(W.Arg1);

  switch(W.Op) {
    case Op_Dodaj:
    std::cout << '+';
    break;

    case Op_Odejmij:
    std::cout << '-';
    break;

    case Op_Mnoz:
    std::cout << '*';
    break;

    case Op_Dziel:
    std::cout << '/';
    break;

    default:
    std::cout << "nie ma takiej opcji" <<std::endl;
    break;
  }
  WyswietlZespolona(W.Arg2);
}

