#include <iostream>

int main() {
    int x = 5;
    int y = 3;

    // Lambda function that takes two integers and returns true if their sum is greater than 10
    auto checkSum = [&x, &y](int a, int b) -> bool {
        return (a + b) > 10;
    };

    // Using the lambda function
    bool result = checkSum(x, y);
    
    if (result) {
        std::cout << "Sum is greater than 10." << std::endl;
    } else {
        std::cout << "Sum is not greater than 10." << std::endl;
    }

    return 0;
}
