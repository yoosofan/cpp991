
.. code:: sh

  cpp991$ g++ myArray.cpp 
  myArray.cpp: In function ‘void f1()’:
  myArray.cpp:134:39: error: no matching function for call to ‘operator<<(std::ostream&, <unresolved overloaded function type>)’
    134 |   operator<<(operator<<(cout, d), endl);
        |                                       ^
  myArray.cpp:101:10: note: candidate: ‘std::ostream& operator<<(std::ostream&, const myArray&)’
    101 | ostream& operator<<(ostream& out1, const myArray& b){
        |          ^~~~~~~~
  myArray.cpp:101:51: note:   no known conversion for argument 2 from ‘<unresolved overloaded function type>’ to ‘const myArray&’
    101 | ostream& operator<<(ostream& out1, const myArray& b){
        |                                    ~~~~~~~~~~~~~~~^
  In file included from /usr/include/c++/9/string:55,
                   from /usr/include/c++/9/bits/locale_classes.h:40,
                   from /usr/include/c++/9/bits/ios_base.h:41,
                   from /usr/include/c++/9/ios:42,
                   from /usr/include/c++/9/ostream:38,
                   from /usr/include/c++/9/iostream:39,
                   from myArray.cpp:1:
  /usr/include/c++/9/bits/basic_string.h:6416:5: note: candidate: ‘template<class _CharT, class _Traits, class _Alloc> std::basic_ostream<_CharT, _Traits>& std::operator<<(std::basic_ostream<_CharT, _Traits>&, const std::__cxx11::basic_string<_CharT, _Traits, _Alloc>&)’
   6416 |     operator<<(basic_ostream<_CharT, _Traits>& __os,
        |     ^~~~~~~~
  /usr/include/c++/9/bits/basic_string.h:6416:5: note:   template argument deduction/substitution failed:
  myArray.cpp:134:39: note:   couldn’t deduce template parameter ‘_Alloc’
    134 |   operator<<(operator<<(cout, d), endl);
        |                                       ^
  In file included from /usr/include/c++/9/bits/ios_base.h:46,
                   from /usr/include/c++/9/ios:42,
                   from /usr/include/c++/9/ostream:38,
                   from /usr/include/c++/9/iostream:39,
                   from myArray.cpp:1:
  /usr/include/c++/9/system_error:217:5: note: candidate: ‘template<class _CharT, class _Traits> std::basic_ostream<_CharT, _Traits>& std::operator<<(std::basic_ostream<_CharT, _Traits>&, const std::error_code&)’
    217 |     operator<<(basic_ostream<_CharT, _Traits>& __os, const error_code& __e)
        |     ^~~~~~~~
  /usr/include/c++/9/system_error:217:5: note:   template argument deduction/substitution failed:
  myArray.cpp:134:39: note:   cannot convert ‘std::endl’ (type ‘<unresolved overloaded function type>’) to type ‘const std::error_code&’
    134 |   operator<<(operator<<(cout, d), endl);
        |                                       ^
  In file included from /usr/include/c++/9/iostream:39,
                   from myArray.cpp:1:
  /usr/include/c++/9/ostream:506:5: note: candidate: ‘std::basic_ostream<_CharT, _Traits>& std::operator<<(std::basic_ostream<_CharT, _Traits>&, _CharT) [with _CharT = char; _Traits = std::char_traits<char>]’
    506 |     operator<<(basic_ostream<_CharT, _Traits>& __out, _CharT __c)
        |     ^~~~~~~~
  /usr/include/c++/9/ostream:506:62: note:   no known conversion for argument 2 from ‘<unresolved overloaded function type>’ to ‘char’
    506 |     operator<<(basic_ostream<_CharT, _Traits>& __out, _CharT __c)
        |                                                       ~~~~~~~^~~
  /usr/include/c++/9/ostream:511:5: note: candidate: ‘template<class _CharT, class _Traits> std::basic_ostream<_CharT, _Traits>& std::operator<<(std::basic_ostream<_CharT, _Traits>&, char)’
    511 |     operator<<(basic_ostream<_CharT, _Traits>& __out, char __c)
        |     ^~~~~~~~
  /usr/include/c++/9/ostream:511:5: note:   template argument deduction/substitution failed:
  myArray.cpp:134:39: note:   cannot convert ‘std::endl’ (type ‘<unresolved overloaded function type>’) to type ‘char’
    134 |   operator<<(operator<<(cout, d), endl);
        |                                       ^
  In file included from /usr/include/c++/9/iostream:39,
                   from myArray.cpp:1:
  /usr/include/c++/9/ostream:517:5: note: candidate: ‘template<class _Traits> std::basic_ostream<char, _Traits>& std::operator<<(std::basic_ostream<char, _Traits>&, char)’
    517 |     operator<<(basic_ostream<char, _Traits>& __out, char __c)
        |     ^~~~~~~~
  /usr/include/c++/9/ostream:517:5: note:   template argument deduction/substitution failed:
  myArray.cpp:134:39: note:   cannot convert ‘std::endl’ (type ‘<unresolved overloaded function type>’) to type ‘char’
    134 |   operator<<(operator<<(cout, d), endl);
        |                                       ^
  In file included from /usr/include/c++/9/iostream:39,
                   from myArray.cpp:1:
  /usr/include/c++/9/ostream:523:5: note: candidate: ‘template<class _Traits> std::basic_ostream<char, _Traits>& std::operator<<(std::basic_ostream<char, _Traits>&, signed char)’
    523 |     operator<<(basic_ostream<char, _Traits>& __out, signed char __c)
        |     ^~~~~~~~
  /usr/include/c++/9/ostream:523:5: note:   template argument deduction/substitution failed:
  myArray.cpp:134:39: note:   cannot convert ‘std::endl’ (type ‘<unresolved overloaded function type>’) to type ‘signed char’
    134 |   operator<<(operator<<(cout, d), endl);
        |                                       ^
  In file included from /usr/include/c++/9/iostream:39,
                   from myArray.cpp:1:
  /usr/include/c++/9/ostream:528:5: note: candidate: ‘template<class _Traits> std::basic_ostream<char, _Traits>& std::operator<<(std::basic_ostream<char, _Traits>&, unsigned char)’
    528 |     operator<<(basic_ostream<char, _Traits>& __out, unsigned char __c)
        |     ^~~~~~~~
  /usr/include/c++/9/ostream:528:5: note:   template argument deduction/substitution failed:
  myArray.cpp:134:39: note:   cannot convert ‘std::endl’ (type ‘<unresolved overloaded function type>’) to type ‘unsigned char’
    134 |   operator<<(operator<<(cout, d), endl);
        |                                       ^
  In file included from /usr/include/c++/9/iostream:39,
                   from myArray.cpp:1:
  /usr/include/c++/9/ostream:548:5: note: candidate: ‘std::basic_ostream<_CharT, _Traits>& std::operator<<(std::basic_ostream<_CharT, _Traits>&, const _CharT*) [with _CharT = char; _Traits = std::char_traits<char>]’
    548 |     operator<<(basic_ostream<_CharT, _Traits>& __out, const _CharT* __s)
        |     ^~~~~~~~
  /usr/include/c++/9/ostream:548:69: note:   no known conversion for argument 2 from ‘<unresolved overloaded function type>’ to ‘const char*’
    548 |     operator<<(basic_ostream<_CharT, _Traits>& __out, const _CharT* __s)
        |                                                       ~~~~~~~~~~~~~~^~~
  In file included from /usr/include/c++/9/ostream:702,
                   from /usr/include/c++/9/iostream:39,
                   from myArray.cpp:1:
  /usr/include/c++/9/bits/ostream.tcc:321:5: note: candidate: ‘template<class _CharT, class _Traits> std::basic_ostream<_CharT, _Traits>& std::operator<<(std::basic_ostream<_CharT, _Traits>&, const char*)’
    321 |     operator<<(basic_ostream<_CharT, _Traits>& __out, const char* __s)
        |     ^~~~~~~~
  /usr/include/c++/9/bits/ostream.tcc:321:5: note:   template argument deduction/substitution failed:
  myArray.cpp:134:39: note:   cannot convert ‘std::endl’ (type ‘<unresolved overloaded function type>’) to type ‘const char*’
    134 |   operator<<(operator<<(cout, d), endl);
        |                                       ^
  In file included from /usr/include/c++/9/iostream:39,
                   from myArray.cpp:1:
  /usr/include/c++/9/ostream:565:5: note: candidate: ‘template<class _Traits> std::basic_ostream<char, _Traits>& std::operator<<(std::basic_ostream<char, _Traits>&, const char*)’
    565 |     operator<<(basic_ostream<char, _Traits>& __out, const char* __s)
        |     ^~~~~~~~
  /usr/include/c++/9/ostream:565:5: note:   template argument deduction/substitution failed:
  myArray.cpp:134:39: note:   cannot convert ‘std::endl’ (type ‘<unresolved overloaded function type>’) to type ‘const char*’
    134 |   operator<<(operator<<(cout, d), endl);
        |                                       ^
  In file included from /usr/include/c++/9/iostream:39,
                   from myArray.cpp:1:
  /usr/include/c++/9/ostream:578:5: note: candidate: ‘template<class _Traits> std::basic_ostream<char, _Traits>& std::operator<<(std::basic_ostream<char, _Traits>&, const signed char*)’
    578 |     operator<<(basic_ostream<char, _Traits>& __out, const signed char* __s)
        |     ^~~~~~~~
  /usr/include/c++/9/ostream:578:5: note:   template argument deduction/substitution failed:
  myArray.cpp:134:39: note:   cannot convert ‘std::endl’ (type ‘<unresolved overloaded function type>’) to type ‘const signed char*’
    134 |   operator<<(operator<<(cout, d), endl);
        |                                       ^
  In file included from /usr/include/c++/9/iostream:39,
                   from myArray.cpp:1:
  /usr/include/c++/9/ostream:583:5: note: candidate: ‘template<class _Traits> std::basic_ostream<char, _Traits>& std::operator<<(std::basic_ostream<char, _Traits>&, const unsigned char*)’
    583 |     operator<<(basic_ostream<char, _Traits>& __out, const unsigned char* __s)
        |     ^~~~~~~~
  /usr/include/c++/9/ostream:583:5: note:   template argument deduction/substitution failed:
  myArray.cpp:134:39: note:   cannot convert ‘std::endl’ (type ‘<unresolved overloaded function type>’) to type ‘const unsigned char*’
    134 |   operator<<(operator<<(cout, d), endl);
        |                                       ^
  In file included from /usr/include/c++/9/iostream:39,
                   from myArray.cpp:1:
  /usr/include/c++/9/ostream:691:5: note: candidate: ‘template<class _Ostream, class _Tp> typename std::enable_if<std::__and_<std::__not_<std::is_lvalue_reference<_Tp> >, std::__is_convertible_to_basic_ostream<_Ostream>, std::__is_insertable<typename std::__is_convertible_to_basic_ostream<_Tp>::__ostream_type, const _Tp&, void> >::value, typename std::__is_convertible_to_basic_ostream<_Tp>::__ostream_type>::type std::operator<<(_Ostream&&, const _Tp&)’
    691 |     operator<<(_Ostream&& __os, const _Tp& __x)
        |     ^~~~~~~~
  /usr/include/c++/9/ostream:691:5: note:   template argument deduction/substitution failed:
  myArray.cpp:134:39: note:   couldn’t deduce template parameter ‘_Tp’
    134 |   operator<<(operator<<(cout, d), endl);
        |                                       ^
  cpp991$ 




2020/11/23 10:17:55

https://en.cppreference.com/w/cpp/language/operator_precedence

