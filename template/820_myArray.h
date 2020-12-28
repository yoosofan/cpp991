#pragma once
#include <iostream>
#include <cstdlib>
#include "840_complexcls.h"
#include "840_complexcls.h"
using namespace std;

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
  template<typename K> friend ostream& operator<<(ostream& out1, const myArray<K>& b);
  template<typename K> friend bool operator==(const myArray<K>& a, const myArray<K>& b);
  template<typename K> friend istream& operator>>(istream& in1, myArray<K>& b);
};
template<typename K> bool operator==(const myArray<K>& a, const myArray<K>& b);
template<typename Y> istream& operator>>(istream& in1, myArray<Y>& b);
template<typename T> ostream& operator<<(ostream& out1, const myArray<T>& b);
