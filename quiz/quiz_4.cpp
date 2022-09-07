//question: https://cppquiz.org/quiz/question/4
//answer: https://cppquiz.org/quiz/question/4?result=OK&answer=21&did_answer=Answer

#include <iostream>

void f(float) { std::cout << 1; }
void f(double) { std::cout << 2; }

int main() {
  f(2.5);
  f(2.5f);
}

// The type of a floating point literal is double.
