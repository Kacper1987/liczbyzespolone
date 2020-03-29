#ifndef LZESPOLONA_HH
#define LZESPOLONA_HH

#include <iostream>
#include <cmath>
/*!
 *  Plik zawiera definicje struktury LZesplona oraz zapowiedzi
 *  przeciazen operatorow arytmetycznych dzialajacych na tej
 *  strukturze.
 */


/*!
 * Modeluje pojecie liczby zespolonej
 */
struct  LZespolona {
  double   re;    /*! Pole repezentuje czesc rzeczywista. */
  double   im;    /*! Pole repezentuje czesc urojona. */
};


/*
 * Dalej powinny pojawic sie zapowiedzi definicji przeciazen operatorow
 */

LZespolona  operator + (LZespolona  Skl1,  LZespolona  Skl2);
LZespolona  operator - (LZespolona  Skl1,  LZespolona  Skl2);
LZespolona  operator * (LZespolona  Skl1,  LZespolona  Skl2);
LZespolona  operator / (LZespolona  Skl1,  LZespolona  Skl2);
LZespolona operator / (LZespolona Skl1, float Skl2);
LZespolona sprzezenie (LZespolona Skl1);
float modul (LZespolona Skl1);
bool operator == (LZespolona Skl1, LZespolona Skl2);
bool operator != (LZespolona Skl1, LZespolona Skl2);
std::istream & operator >> (std::istream &strm, LZespolona &L);
std::ostream & operator << (std::ostream &strm, const LZespolona &L);
LZespolona UtworzL (float Re, float Im);

#endif


