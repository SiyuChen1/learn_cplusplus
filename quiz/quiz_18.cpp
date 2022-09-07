//question: https://cppquiz.org/quiz/question/18
//answer: https://cppquiz.org/quiz/question/18?result=OK&answer=B&did_answer=Answer

#include <iostream>

class A {
public:
  virtual void f() { std::cout << "A"; }
};

class B : public A {
private:
  void f() { std::cout << "B"; }
};

void g(A &a) { a.f(); }

int main() {
  B b;
  g(b);
}

// The "trick" here is that B::f() is called even though it is private.

// As §[class.access.virt]¶2 in the standard puts it: "Access is checked at the call point using the type of the expression used to denote the object for which the member function is called". The call point here being a.f(), and the type of the expression is A&.