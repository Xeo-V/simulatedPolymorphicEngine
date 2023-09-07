#pragma once
#include <iostream> 
#include <ctime> 
#include <cstdlib> 

class PolymorphicEngine { 
public: 
    static void init(); 
    static int add(int a, int b); 
    static int subtract(int a, int b); 
    static int multiply(int a, int b); 
    static double divide(int a, int b);
    static int reorderInstructions(int a, int b);
    static int renameRegisters(int a, int b);
    static int codeExpansion(int a, int b);
    static int codeShrinking(int a, int b);
    static int codeSubstitution(int a, int b);
    static void junkCodeInsertion();
};
 
