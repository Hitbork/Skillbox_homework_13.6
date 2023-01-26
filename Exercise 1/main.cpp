#include <iostream>
#include <vector>

// Function to delete number from vector
std::vector<int> delete_number(std::vector<int> vec, int n) {
    int size = vec.size(), temp;

    for (int i = size - 1; i > -1; i--) {
        if ((vec[i] == n) && (i == vec.size() - 1)) {
            vec.pop_back();
        } else if (vec[i] == n) {
            for (int j = i; j < vec.size() - 1; j++) {
                vec[j] = vec[j+1];
            }
            vec.pop_back();
        }
    }

    return vec;
}


int main() {
    // Greetings
    std::cout << "Delete exact number from the vector\n\n\n";


    // Creating vars and quering data
    int n;

    std::cout << "Input size of vector:\n";
    std::cin >> n;

    std::vector<int> numbers(n);

    std::cout << "Input numbers of vector:\n";
    for (int i = 0; i < n; i++) {
        std::cin >> numbers[i];
    }


    // Quering number to delete
    int deleteNumber;

    std::cout << "Input a number to delete:\n";
    std::cin >> deleteNumber;

    std::cout << "\n";


    // Deleting number
    numbers = delete_number(numbers, deleteNumber);


    // Outputing vector
    std::cout << "Result: ";
    for (int i = 0; i < numbers.size(); i++)
        std::cout << numbers[i] << " ";

    std::cout << std::endl;
}
