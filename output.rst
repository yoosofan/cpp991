
.. code:: sh

  cpp991$ g++ myArray.cpp 
  myArray.cpp: In function ‘std::istream& operator>>(std::istream&, myArray&)’:
  myArray.cpp:116:5: error: ‘int myArray::n’ is private within this context
    116 |   b.n = 0;
        |     ^
  myArray.cpp:7:7: note: declared private here
      7 |   int n;
        |       ^
  myArray.cpp:118:12: error: ‘int myArray::n’ is private within this context
    118 |   in1 >> b.n;
        |            ^
  myArray.cpp:7:7: note: declared private here
      7 |   int n;
        |       ^
  myArray.cpp:120:24: error: ‘int myArray::n’ is private within this context
    120 |   for(int i = 0; i < b.n; i++){
        |                        ^
  myArray.cpp:7:7: note: declared private here
      7 |   int n;
        |       ^
  myArray.cpp:122:14: error: ‘double myArray::a [100]’ is private within this context
    122 |     in1 >> b.a[i];
        |              ^
  myArray.cpp:6:10: note: declared private here
      6 |   double a[MAX];
        |          ^
  cpp991$ 



2020/11/23 10:17:55

https://en.cppreference.com/w/cpp/language/operator_precedence

