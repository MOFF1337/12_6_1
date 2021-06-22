#include <iostream>

int main() {
    bool smallest[] = {true};
    bool small[] = {true, true};
    bool normal[] = {true,true, true};
    bool big[] = {true, true, true, true};

    std::cout << "Size of the smallest array is: " << sizeof(smallest) << std::endl;
    std::cout << "Size of the small is: " << sizeof(small) << std::endl;
    std::cout << "Size of the normal array is: " << sizeof(normal) << std::endl;
    std::cout << "Size of the big array is: " << sizeof(big) << std::endl;

}
