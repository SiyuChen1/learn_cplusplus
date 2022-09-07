//question: https://cppquiz.org/quiz/question/2
//answer: https://cppquiz.org/quiz/question/2?result=OK&answer=22&did_answer=Answer

#include <iostream>
#include <string>

void f(const std::string &) { std::cout << 1; }

void f(const void *) { std::cout << 2; }

int main() {
  f("foo");
  const char *bar = "bar";
  f(bar);

  printf("%ld", sizeof("hello") );
  return 0;
}

// The null character ('\0', L'\0', char16_t(), etc) is always appended to the string literal: 
// thus, a string literal "Hello" is a const char[6] holding the characters 'H', 'e', 'l', 'l', 'o', and '\0'.

// A string literal is not a std::string, but a const char[] . 
// If the compiler was to choose f(const std::string&), it would have to go through a user defined 
// conversion and create a temporary std::string. 
// Instead, it prefers f(const void*), which requires no user defined conversion