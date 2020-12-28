#pragma once
#include <iostream>
#include <cstdlib>
#include "840_complexcls.h"
#include "840_complexcls.h"
using namespace std;

template<typename T> class myArray;
template<typename T> bool operator== (const myArray<T>& a, const myArray<T>& b);

template<typename T> class myArray{
  static const int MAX = 100;
  T a[MAX];
  int n;
  void copy(const  myArray& b){
    this -> n = b.n;
    for(int i = 0; i < n; i++)
    this -> a[i] = b.a[i];
  }
  public:
  // myArray() = delete ;
  T get(const int index = 0 ) const{
    if(index >= n) {
      cout << "Error in getting an element of myArray" << endl;
      exit(0);
    }
    return a[index];
  }
  void set(const int index, const T value){
    if( index < n ) a[index] = value;
    cout << "Error accessing myArray " << endl;
  }
  myArray(const T *a = nullptr, int n = 0){
    if( n > MAX )
      n = MAX ;
    for(this -> n = n--; n >= 0; n--)
      this -> a[n] = a[n];
  }
  explicit myArray(T x){
    n = 1;
    a[0] = x;
    cout << "construcotr myArray: " << a[0] << endl;
  }
  myArray(const myArray& b){
    cout << "copy construcotr" << endl;
    copy(b);
  }
  ~myArray(){
    cout << "Destructor" << endl;
  }
  void print(void) const{
    cout << " n = " << n << endl;
    for(int i = 0; i < n; i++)
      cout << "a[" << i << "] = " << a[i] << endl;
  }
  myArray operator=(const myArray& b){
    cout << "Assignment myArray" << endl;
    copy(b);
    return *this;
  }
  T& operator[](int index){
    if(index >= n){
      cout << "index out of range: " << index << endl;
      index = 0;
      exit(0);
    }
    return a[index];
  }

  // https://en.cppreference.com/w/cpp/language/friend
  //~ template<typename K>  friend bool operator== (const myArray<K>& a, const myArray<K>& b);
  friend bool operator== <T>(const myArray<T>& a, const myArray<T>& b);

  friend istream& operator>> (istream& in1, myArray& b){
    // delete[] b.a;  b.a = nullptr;
    b.n = 0;
    cout << "Enter n ";
    in1 >> b.n;
    while( b.n < 0 || b.n > myArray::MAX ){
      cout << "number of element must be greater than 0 and less than  "
        << myArray::MAX << endl;
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
  friend ostream& operator<< (ostream& out1, const myArray& b){
    out1 << "n = " << b.n << endl;
    for(int i = 0; i < b.n ; i++)
      out1 << "a[" << i << "]= " << b.a[i] << endl;
    return out1;
  }

};
