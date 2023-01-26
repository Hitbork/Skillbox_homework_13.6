#include <iostream>
#include <vector>


int main() {
    // Greetings
    std::cout << "Summary of purchase\n\n\n";


    // Creating var for prices and quering them
    std::vector<float> prices =  {2.5, 4.25, 3.0, 10.0};


    // Creating var for purchases and quering them
    float summary = 0;
    std::vector<int> items {1, 1, 0, 3};

    for (int i = 0; i < items.size(); i++) {
        summary += prices[items[i]];
    }


    // Output
    std::cout << "Summary is " << summary << "\n";
}
