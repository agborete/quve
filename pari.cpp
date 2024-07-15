#include <variant>
#include <iostream>

int main() {
    std::variant<int, std::string> v = "Hello";
    
    if (std::holds_alternative<int>(v)) {
        std::cout << "Variant holds an int." << std::endl;
    } else if (std::holds_alternative<std::string>(v)) {
        std::cout << "Variant holds a string." << std::endl;
    }
    
    int* intValue = std::get_if<int>(&v);
    if (intValue != nullptr) {
        std::cout << "Value of the variant as an int: " << *intValue << std::endl;
    }
    
    return 0;
}
