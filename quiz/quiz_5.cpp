//question: https://cppquiz.org/quiz/question/5
//answer: https://cppquiz.org/quiz/question/5?result=OK&answer=BA&did_answer=Answer

#include <iostream>

struct A {
  A() { std::cout << "A"; }
};
struct B {
  B() { std::cout << "B"; }
};

class C {
public:
  C() : a(), b() {}

private:
  B b;
  A a;
};

int main()
{
    C();
}

// The initialization order of member variables is determined
// by their order of declaration, not their order in the initialization list.
