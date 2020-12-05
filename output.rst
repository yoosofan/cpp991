
.. code:: sh

  cpp991$ g++ myArray.cpp 
  myArray.cpp: In function ‘std::istream& operator>>(std::istream&, const myArray&)’:
  myArray.cpp:116:7: error: assignment of member ‘myArray::n’ in read-only object
    116 |   b.n = 0;
        |   ~~~~^~~
  cpp991$ bash upload.sh


2020/11/23 10:17:55

https://en.cppreference.com/w/cpp/language/operator_precedence

