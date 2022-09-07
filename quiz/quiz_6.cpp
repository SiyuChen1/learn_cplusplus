//question: https://cppquiz.org/quiz/question/6
//answer: https://cppquiz.org/quiz/question/6?result=OK&answer=012012&did_answer=Answer

#include <iostream>

int main() {
  for (int i = 0; i < 3; i++)
    std::cout << i;
  for (int i = 0; i < 3; ++i)
    std::cout << i;
}

// Whether you post-increment or pre-increment i, its value does not change until after the loop body has executed.