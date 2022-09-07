//question: https://cppquiz.org/quiz/question/7
//answer: https://cppquiz.org/quiz/question/7?result=OK&answer=A&did_answer=Answer

#include <iostream>

class A {
public:
  void f() { std::cout << "A"; }
  virtual void f1() { std::cout << "A1"; }
  virtual void f2() = 0; 
};

class B : public A {
public:
  void f() { std::cout << "B"; }
  void f1() { std::cout << "B1"; }
  void f2() { std::cout << "B2"; }
};

void g(A &a){ 
  a.f();
  a.f1();
  a.f2();
}

void g1(B &b){ 
  b.f();
  b.f1();
  b.f2();
}

int main() {
  B b;
  g(b);

  g1(b);
}

// As long as A::f() is not virtual, A::f() will always be called, even if the reference or pointer is actually referring to an object of type B.