
#include "PolymorphicEngine.h"

int main() {
    PolymorphicEngine::init();  // Initialize the polymorphic engine
    
    int a = 5, b = 3;
     
    int sum = 0;
    int diff = 0;
    int product = 0;
    double quotient = 0;

    // Apply different transformations based on a random number
    int random_number = rand() % 8;
    switch (random_number) {
        case 0:
            sum = PolymorphicEngine::add(a, b);
            diff = PolymorphicEngine::subtract(a, b);
            product = PolymorphicEngine::multiply(a, b);
            quotient = PolymorphicEngine::divide(a, b);
            break;
        case 1:
            sum = PolymorphicEngine::reorderInstructions(a, b);
            diff = PolymorphicEngine::subtract(a, b);
            product = PolymorphicEngine::multiply(a, b);
            quotient = PolymorphicEngine::divide(a, b);
            break;
        case 2:
            sum = PolymorphicEngine::renameRegisters(a, b);
            diff = PolymorphicEngine::subtract(a, b);
            product = PolymorphicEngine::multiply(a, b);
            quotient = PolymorphicEngine::divide(a, b);
            break;
        case 3:
            sum = PolymorphicEngine::codeExpansion(a, b);
            diff = PolymorphicEngine::subtract(a, b);
            product = PolymorphicEngine::multiply(a, b);
            quotient = PolymorphicEngine::divide(a, b);
            break;
        case 4:
            sum = PolymorphicEngine::codeShrinking(a, b);
            diff = PolymorphicEngine::subtract(a, b);
            product = PolymorphicEngine::multiply(a, b);
            quotient = PolymorphicEngine::divide(a, b);
            break; 
        case 5: 
            sum = PolymorphicEngine::codeSubstitution(a, b);
            diff = PolymorphicEngine::subtract(a, b);
            product = PolymorphicEngine::multiply(a, b);
            quotient = PolymorphicEngine::divide(a, b);
            break; 
        case 6: 
            PolymorphicEngine::junkCodeInsertion();
            sum = PolymorphicEngine::add(a, b);
            diff = PolymorphicEngine::subtract(a, b);
            product = PolymorphicEngine::multiply(a, b);
            quotient = PolymorphicEngine::divide(a, b);
            break; 
        case 7: 
            // No transformation
            sum = PolymorphicEngine::add(a, b);
            diff = PolymorphicEngine::subtract(a, b);
            product = PolymorphicEngine::multiply(a, b);
            quotient = PolymorphicEngine::divide(a, b);
            break;
    } 

    std::cout << "The sum is: " << sum << std::endl;
    std::cout << "The difference is: " << diff << std::endl;
    std::cout << "The product is: " << product << std::endl;
    std::cout << "The quotient is: " << quotient << std::endl;
    std::cin.get();
    return 0;
}
