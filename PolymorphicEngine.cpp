#include "PolymorphicEngine.h"

void PolymorphicEngine::init() {
    srand(time(0));  // Initialize random seed
}

int PolymorphicEngine::add(int a, int b) {
    return a + b;
}

int PolymorphicEngine::subtract(int a, int b) {
    return a - b;
} 

int PolymorphicEngine::multiply(int a, int b) {
    return a * b;
}

double PolymorphicEngine::divide(int a, int b) {
    if (b != 0) {
        return static_cast<double>(a) / b;
    }
    std::cerr << "Division by zero is not allowed." << std::endl;
    return 0;
}

int PolymorphicEngine::reorderInstructions(int a, int b) {
    int random_number = rand() % 2;  // Generate a random number
    int sum = 0;
    if (random_number == 0) {
        sum += a;
        sum += b;
    } else {
        sum += b;
        sum += a;
    }
    return sum;
}

int PolymorphicEngine::renameRegisters(int a, int b) {
    int random_number = rand() % 2;  // Generate a random number
    int result;
    if (random_number == 0) {
        int var_a = a;
        int var_b = b;
        result = var_a + var_b;
    } else {
        int var_x = a;
        int var_y = b;
        result = var_x + var_y;
    }
    return result;
}

int PolymorphicEngine::codeExpansion(int a, int b) {
    int sum = 0;
    for (int i = 0; i < a; ++i) {
        ++sum;
    }
    for (int i = 0; i < b; ++i) {
        ++sum;
    }
    return sum;
}

int PolymorphicEngine::codeShrinking(int a, int b) {
    return a + b;
}

int PolymorphicEngine::codeSubstitution(int a, int b) {
    int sum = a;
    sum += b;
    return sum;
}

void PolymorphicEngine::junkCodeInsertion() {
    int junk = rand() % 100;
    junk *= 0;
} 
