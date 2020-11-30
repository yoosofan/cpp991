
.. code:: sh

  cpp991$ g++ myArray.cpp 
  myArray.cpp: In function ‘myArray operator+(const myArray&, const myArray&)’:
  myArray.cpp:105:7: error: ‘int myArray::n’ is private within this context
    105 |     c.n = b.n;
        |       ^
  myArray.cpp:7:7: note: declared private here
      7 |   int n;
        |       ^
  myArray.cpp:105:13: error: ‘int myArray::n’ is private within this context
    105 |     c.n = b.n;
        |             ^
  myArray.cpp:7:7: note: declared private here
      7 |   int n;
        |       ^
  myArray.cpp:106:24: error: invalid use of ‘this’ in non-member function
    106 |     for(int i = 0; i < this -> n; i++ )
        |                        ^~~~
  myArray.cpp:107:9: error: ‘double myArray::a [100]’ is private within this context
    107 |       c.a[i] = a.a[i] + b.a[i];
        |         ^
  myArray.cpp:6:10: note: declared private here
      6 |   double a[MAX];
        |          ^
  myArray.cpp:107:18: error: ‘double myArray::a [100]’ is private within this context
    107 |       c.a[i] = a.a[i] + b.a[i];
        |                  ^
  myArray.cpp:6:10: note: declared private here
      6 |   double a[MAX];
        |          ^
  myArray.cpp:107:27: error: ‘double myArray::a [100]’ is private within this context
    107 |       c.a[i] = a.a[i] + b.a[i];
        |                           ^
  myArray.cpp:6:10: note: declared private here
      6 |   double a[MAX];
        |          ^
  myArray.cpp: In function ‘void f1()’:
  myArray.cpp:118:25: error: ‘class myArray’ has no member named ‘operator+’; did you mean ‘operator=’?
    118 |   d.operator=(d.operator+(5));
        |                         ^
        |                         operator=
  cpp991$ 


2020/11/23 10:17:55

https://en.cppreference.com/w/cpp/language/operator_precedence

