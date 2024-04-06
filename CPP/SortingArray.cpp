#include <iostream>

int main()
{
    int array[] = {10, 6, 5, 4, 2, 9, 7, 1, 8, 3};
    int size = sizeof(array) / sizeof(array[0]);

    for (int element : array) {
        std::cout << element << " ";
    }

    return 0;
}