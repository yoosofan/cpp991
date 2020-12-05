
.. code:: sh

  cpp991$ g++ myArray.cpp 
  myArray.cpp: In function ‘std::istream& operator>>(std::istream&, const myArray&)’:
  myArray.cpp:115:14: warning: deleting array ‘b.myArray::a’
    115 |   delete[] b.a;
        |              ^
  myArray.cpp:116:7: error: assignment of member ‘myArray::a’ in read-only object
    116 |   b.a = nullptr;
        |   ~~~~^~~~~~~~~
  myArray.cpp:117:7: error: assignment of member ‘myArray::n’ in read-only object
    117 |   b.n = 0;
        |   ~~~~^~~
  myArray.cpp:120:7: error: assignment of member ‘myArray::a’ in read-only object
    120 |   b.a = new double[b.n];
        |   ~~~~^~~~~~~~~~~~~~~~~
  cpp991$ 



2020/11/23 10:17:55

https://en.cppreference.com/w/cpp/language/operator_precedence

