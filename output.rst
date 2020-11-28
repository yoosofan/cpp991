2020/11/28 09:59:16

.. code:: sh

  g++ myArray.cpp 
  myArray.cpp: In member function ‘myArray myArray::operator+(const myArray&)’:
  myArray.cpp:46:13: error: no matching function for call to ‘myArray::myArray()’
     46 |     myArray c;
        |             ^
  myArray.cpp:28:3: note: candidate: ‘myArray::myArray(const myArray&)’
     28 |   myArray(const myArray& b){
        |   ^~~~~~~
  myArray.cpp:28:3: note:   candidate expects 1 argument, 0 provided
  myArray.cpp:22:3: note: candidate: ‘myArray::myArray(const double*, int)’
     22 |   myArray(const double *a, int n){
        |   ^~~~~~~
  myArray.cpp:22:3: note:   candidate expects 2 arguments, 0 provided
  myArray.cpp: In member function ‘myArray myArray::operator-(const myArray&)’:
  myArray.cpp:54:13: error: no matching function for call to ‘myArray::myArray()’
     54 |     myArray c;
        |             ^
  myArray.cpp:28:3: note: candidate: ‘myArray::myArray(const myArray&)’
     28 |   myArray(const myArray& b){
        |   ^~~~~~~
  myArray.cpp:28:3: note:   candidate expects 1 argument, 0 provided
  myArray.cpp:22:3: note: candidate: ‘myArray::myArray(const double*, int)’
     22 |   myArray(const double *a, int n){
        |   ^~~~~~~
  myArray.cpp:22:3: note:   candidate expects 2 arguments, 0 provided
  myArray.cpp: In function ‘void f1()’:
  myArray.cpp:71:11: error: no matching function for call to ‘myArray::myArray()’
     71 |   myArray p, q;
        |           ^
  myArray.cpp:28:3: note: candidate: ‘myArray::myArray(const myArray&)’
     28 |   myArray(const myArray& b){
        |   ^~~~~~~
  myArray.cpp:28:3: note:   candidate expects 1 argument, 0 provided
  myArray.cpp:22:3: note: candidate: ‘myArray::myArray(const double*, int)’
     22 |   myArray(const double *a, int n){
        |   ^~~~~~~
  myArray.cpp:22:3: note:   candidate expects 2 arguments, 0 provided
  myArray.cpp:71:14: error: no matching function for call to ‘myArray::myArray()’
     71 |   myArray p, q;
        |              ^
  myArray.cpp:28:3: note: candidate: ‘myArray::myArray(const myArray&)’
     28 |   myArray(const myArray& b){
        |   ^~~~~~~
  myArray.cpp:28:3: note:   candidate expects 1 argument, 0 provided
  myArray.cpp:22:3: note: candidate: ‘myArray::myArray(const double*, int)’
     22 |   myArray(const double *a, int n){
        |   ^~~~~~~
  myArray.cpp:22:3: note:   candidate expects 2 arguments, 0 provided
  cpp991$ 



2020/11/23 10:17:55

https://en.cppreference.com/w/cpp/language/operator_precedence

