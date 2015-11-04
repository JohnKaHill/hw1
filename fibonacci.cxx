#include <iostream>

int main(){
    int N;
    std::cout << "N = ";
    std::cin >> N;
    int fib;
    int a = 0;
    int b = 1;
    
    if (N==1)
        fib=1;
    
    for (int i=1; i<N; ++i) {
        fib = a + b;
        a = b;
        b = fib;
    }
    
    std::cout << "the fibonacci number you are looking for is ";
    std::cout << fib << std::endl;
    
    return 0;
}

