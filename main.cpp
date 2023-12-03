#include <iostream>
#include "MaxNVector.h"
#include "GetRarestElement.h"

int main() {
    try {
        MaxNVector<int, 3> vec;
        vec.add(1);
        vec.add(1);
        vec.add(1);
        vec.add(1); // Sollte eine Ausnahme auslösen
    } catch (const ElementTooFrequentException& e) {
        std::cout << "Caught exception: " << e.what() << std::endl;
    }

    try {
        int arr[] = {1, 2, 2, 3, 3, 3, 4, 4, 4, 4};
        int rarest = getRarestElement(arr, sizeof(arr) / sizeof(arr[0]));
        std::cout << "Rarest element: " << rarest << std::endl;
    } catch (const std::exception& e) {
        std::cout << "Caught exception: " << e.what() << std::endl;
    }

    return 0;
}
