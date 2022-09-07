//question: https://cppquiz.org/quiz/question/26
//answer: https://cppquiz.org/quiz/question/26?result=UD&answer=&did_answer=Answer

#include <iostream>

int main() {
  int i = 42;
  int j = 1;
  std::cout << i / --j;
}

// Integer division by zero is undefined behaviour. According to §[expr.mul]¶4 in the standard: "If the second operand of / or % is zero the behavior is undefined."