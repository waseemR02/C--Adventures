#include<iostream>

int main()
{
    int width;          // DefaultInitialization
    width = 10;         //Assignment
    
    int weight = 60;    //Copy Initialization 

    int height(9);      //Direct Initialization

    int volume{800};    //Brace Initialization

 /*Always try to use brace initialization because it enables the compiler to give warnings
 when the value iss not according to the type*/ 
    
    std::cout << width << "\n";
    std:: cout << height << "\n";
    std:: cout << weight << "\n";
    std:: cout << volume << "\n";
    return 0;
}

