#include <iostream>

int main()
{
    for (char c = 'a'; c <= 'z'; ++c) {
        std::cout << "letter " << c << " has value " << int(c) << std::endl;
    }
    return 0;
}
