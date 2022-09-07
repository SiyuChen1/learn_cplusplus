//question: https://cppquiz.org/quiz/question/16
//answer: https://cppquiz.org/quiz/question/16?result=OK&answer=abBA&did_answer=Answer

#include <iostream>

class A {
public:
  A() { std::cout << 'a'; }
  ~A() { std::cout << 'A'; }
};

class B {
public:
  B() { std::cout << 'b'; }
  ~B() { std::cout << 'B'; }
  A a;
};

int main() { B b; }

// Member variables are initialized before the constructor is called. The destructor is called before member variables are destroyed.

