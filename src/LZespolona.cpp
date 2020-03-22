#include "LZespolona.hh"

/*!
 * Realizuje dodanie dwoch liczb zespolonych.
 * Argumenty:
 *    Skl1 - pierwszy skladnik dodawania,
 *    Skl2 - drugi skladnik dodawania.
 * Zwraca:
 *    Sume dwoch skladnikow przekazanych jako parametry.
 */
 
LZespolona  operator + (LZespolona  Skl1,  LZespolona  Skl2)
{ LZespolona  Wynik;
  Wynik.re = Skl1.re + Skl2.re;
  Wynik.im = Skl1.im + Skl2.im;
  return Wynik;
}

LZespolona  operator - (LZespolona  Skl1,  LZespolona  Skl2)
{ LZespolona  Wynik;
  Wynik.re = Skl1.re - Skl2.re;
  Wynik.im = Skl1.im - Skl2.im;
  return Wynik;
}

LZespolona  operator * (LZespolona  Skl1,  LZespolona  Skl2)
{ LZespolona  Wynik;
  Wynik.re = (Skl1.re * Skl2.re - Skl1.im * Skl2.im);
  Wynik.im = (Skl1.re * Skl2.im + Skl1.im * Skl2.re);
  return Wynik;
}

LZespolona  operator / (LZespolona  Skl1,  LZespolona  Skl2)
{ LZespolona  Wynik;
  Wynik.re = (Skl1.re * Skl2.re + Skl1.im * Skl2.im) / pow(modul(Skl2), 2);
  Wynik.im = (Skl1.im * Skl2.re - Skl1.re * Skl2.im) / pow(modul(Skl2), 2);
  return Wynik;
}

LZespolona operator / (LZespolona Skl1, float Skl2)
{ LZespolona  Wynik;
  Wynik.re = Skl1.re / Skl2;
  Wynik.im = Skl1.im / Skl2;
  return Wynik;
}

LZespolona sprzezenie(LZespolona Skl1)
{ LZespolona Wynik;
  Wynik.re = Skl1.re;
  Wynik.im = Skl1.im * (-1);
  return Wynik;
}

float modul(LZespolona Skl1)
{ float Wynik;
  Wynik=sqrt((Skl1.re*Skl1.re)+(Skl1.im*Skl1.im));
  return Wynik;
}

bool operator == (LZespolona Skl1, LZespolona Skl2)
{ if (Skl1.re == Skl2.re && Skl1.im == Skl2.im)
    return true;
  return false;
}

bool operator != (LZespolona Skl1, LZespolona Skl2)
{ if (Skl1.re != Skl2.re && Skl1.im != Skl2.im)
    return true;
  return false;
}

bool WczytajL (LZespolona &L)
{ char znak;
  std::cin >> znak;
  if (znak != '(')
    return false;
  std::cin >> L.re >> L.im >> znak;
  if (znak != 'i')
    return false;
  std::cin >> znak;
  if (znak != ')')
    return false;
  return true;
}

bool WyswietlL (LZespolona  &L)
{ std::cout << '(' << L.re << std::showpos << L.im << std::noshowpos << "i)";
  return true;
}

LZespolona UtworzL (float Re, float Im)
{ LZespolona L;
  L.re=Re;
  L.im=Im;
  return L;
}
