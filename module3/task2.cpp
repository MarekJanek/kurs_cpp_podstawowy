#include <iostream>

// TODO: Implement foo() and bar()
void foo(int * const num){
    *num=10;
}// bar() should modify value under passed pointer to 20
void bar(int * const  num){
    *num=20;
}
// Can we have a pointer to const or a const pointer?

int main() {
    int number = 5;
    int* pointer = &number;
    std::cout << number << '\n';
    foo(&number);
    std::cout << number << '\n';
    bar(pointer);
    std::cout << number << '\n';

    return 0;
}
