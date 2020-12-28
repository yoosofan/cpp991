/*
#include "820_myArray.h"

template<typename K> bool operator==(const myArray<K>& a, const myArray<K>& b){ // < > <= >= !=
  bool retVal = false;
  int i = 0;
  if(a.n == b.n)
    for(i = 0; i < a.n; i++)
      if(a.a[i] != b.a[i])
        break;
  if(i == a.n)
    retVal = true;
  return retVal;
}
template<typename Y> istream& operator>>(istream& in1, myArray<Y>& b){
  // delete[] b.a;  b.a = nullptr;
  b.n = 0;
  cout << "Enter n ";
  in1 >> b.n;
  while( b.n < 0 || b.n > myArray<Y>::MAX ){
    cout << "number of element must be greater than 0 and less than  " 
      << myArray<Y>::MAX << endl;
    in1 >> b.n;
  }
  // b.a = new double[b.n];
  if( b.n )
    for(int i = 0; i < b.n; i++){
      cout << "Enter a["<< i << "]: ";
      in1 >> b.a[i];
    }
  // else b.a = nullptr;
  return in1;
}
template<typename T> ostream& operator<<(ostream& out1, const myArray<T>& b){
  out1 << "n = " << b.n << endl;
  for(int i = 0; i < b.n ; i++)
    out1 << "a[" << i << "]= " << b.a[i] << endl;
  return out1;
}
*/
