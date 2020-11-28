2020/11/28 10:36:02

.. code:: sh

  cpp991$ g++ myArray.cpp 
  myArray.cpp: In function ‘void f1()’:
  myArray.cpp:96:25: error: expected ‘;’ before ‘q’
     96 |   cout << "q.print() : "
        |                         ^
        |                         ;
     97 |   q.print();
        |   ~                      
  myArray.cpp:98:25: error: expected ‘;’ before ‘cout’
     98 |   cout << "p.print() : "
        |                         ^
        |                         ;
     99 |   cout << "before call f2" << endl;
        |   ~~~~                   
  cpp991$ 


2020/11/23 10:17:55

https://en.cppreference.com/w/cpp/language/operator_precedence

