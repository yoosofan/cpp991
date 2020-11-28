2020/11/28 10:07:29

.. code:: sh

  g++ myArray.cpp 
  myArray.cpp: In member function ‘myArray myArray::operator+(const myArray&)’:
  myArray.cpp:47:13: error: use of deleted function ‘myArray::myArray()’
     47 |     myArray c;
        |             ^
  myArray.cpp:13:3: note: declared here
     13 |   myArray() = delete ;
        |   ^~~~~~~
  myArray.cpp: In member function ‘myArray myArray::operator-(const myArray&)’:
  myArray.cpp:55:13: error: use of deleted function ‘myArray::myArray()’
     55 |     myArray c;
        |             ^
  myArray.cpp:13:3: note: declared here
     13 |   myArray() = delete ;
        |   ^~~~~~~
  myArray.cpp: In function ‘void f1()’:
  myArray.cpp:72:11: error: use of deleted function ‘myArray::myArray()’
     72 |   myArray p, q;
        |           ^
  myArray.cpp:13:3: note: declared here
     13 |   myArray() = delete ;
        |   ^~~~~~~
  myArray.cpp:72:14: error: use of deleted function ‘myArray::myArray()’
     72 |   myArray p, q;
        |              ^
  myArray.cpp:13:3: note: declared here
     13 |   myArray() = delete ;
        |   ^~~~~~~



2020/11/23 10:17:55

https://en.cppreference.com/w/cpp/language/operator_precedence

