#include <iostream>
#include <vector>

int main () {
    // Greetings
    std::cout << "Buffer for 20 elements\n\n\n";


    // Creting vector for 20 elements
    int number;
    std::vector<int> myvector;

    std::cout << "Input numbers:\n";

    while (true) {
        std::cin >> number;

        if (number == -1) {
            for (unsigned i=0; i<myvector.size(); ++i)
                std::cout << ' ' << myvector[i];
            std::cout << "\n";
        } else if (myvector.size() == 20) {
            myvector.erase (myvector.begin());
            myvector.push_back(number);
        } else {
            myvector.push_back(number);
        }
    }
}