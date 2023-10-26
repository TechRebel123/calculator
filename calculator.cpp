#include <iostream>


int main()
{   
    std::cout << "************CALCULATOR**************";
    double num1,num2;  // Declare two variables of type float for inputting numbers.
    char operation;   // Declare a variable to store the operator.
    std::cout<<"\nEnter first number: ";
    std::cin>>num1;     // Read the first number from user.
    std::cout<<"Enter second number: ";
    std::cin>>num2;      // Read the second number from user.
    std::cout<<"Enter an operator (+,-,*,/): ";
    std::cin>>operation;// Read the operator from user.
    switch(operation) 
    {
        case '+':
            std::cout<<"The sum is : "<< (num1 + num2);
            break;
        case '-':
            std::cout<<"The subtraction result is : "<< (num1 - num2);
            break;
        case '*':
            std::cout<<"The multiplication result is : "<< (num1 * num2);
            break;
        case '/':
            if(num2 !=0){
                std::cout<<"The division result is : "<< (num1 / num2);}
            else{
                std::cout<<"Error! Division by zero not allowed.";}
                break;
        default:
            std::cout<<"Invalid Operator!! Please enter correct operator.";
    }
    std::cout << "\n************************************";
    std::cout << "\nMade by TechRebel";
    std::cout << "\n************************************";
    return 0;
                
}