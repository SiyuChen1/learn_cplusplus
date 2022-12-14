//question: https://cppquiz.org/quiz/question/27
//answer: https://cppquiz.org/quiz/question/27?result=OK&answer=B&did_answer=Answer

#include <iostream>

struct A {
  virtual std::ostream &put(std::ostream &o) const {
    return o << 'A';
  }
};

struct B : A {
  virtual std::ostream &put(std::ostream &o) const {
    return o << 'B';
  }
};

std::ostream &operator<<(std::ostream &o, const A &a) {
  return a.put(o);
}

int main() {
  B b;
  std::cout << b;
}

// This is a way to get polymorphic behaviour for operator <<.