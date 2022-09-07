//question: https://cppquiz.org/quiz/question/11
//answer: https://cppquiz.org/quiz/question/11?result=OK&answer=0&did_answer=Answer

#include <iostream>

int a;

int main () {
    static int b;
    int c;
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << c << std::endl;
}

// Since a has static storage duration and no initializer, it is guaranteed to be zero-initialized. 
// Had a been defined as a local non-static variable inside main(), this would not have happened.

// Note: int a has static storage duration because it is declared at namespace scope. 
// It does not need to have static in front of it, that would only denote internal linkage.

// Since a is a static local variable, it is automatically zero-initialized. 
// This would not have happened if we removed the keyword static, making it a non-static local variable.

// §[basic.start.static]¶2 in the standard:

// If constant initialization is not performed, a variable with static storage duration (6.7.1) or 
// thread storage duration (6.7.2) is zero-initialized (11.6)

// a has static storage duration and is not constant initialized , so it gets zero-initialized.

// §[dcl.init]¶6:

// To zero-initialize an object or reference of type T means:
// — if T is a scalar type (6.9), the object is initialized to the value obtained by +
// converting the integer literal 0 (zero) to T;

// So a gets initialized to 0