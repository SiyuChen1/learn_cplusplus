//question: https://cppquiz.org/quiz/question/30
//answer: https://cppquiz.org/quiz/question/30?result=OK&answer=&did_answer=Answer

#include <iostream>
struct X {
  X() { std::cout << "X"; }
};

int main() { X x(); }

// This program has no output.

// X x(); is a function prototype, not a variable definition. Remove the parentheses (or since C++11, replace them with {}), and the program will output X.


