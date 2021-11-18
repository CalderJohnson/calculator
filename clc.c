#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
    //providing introductory information to the program as well as instructions
    printf("Welcome to my command line calculator! (CLC)\n");
    printf("Developer: Calder Johnson\n");
    printf("Version: 2\n");
    printf("Date: 12/11/2021\n");
    printf("-----------------------------------------------------------\n");
    printf("Please select one of the following items:\n");
    printf("B) - Binary Mathematical Operations such as addition and subtraction.\n");
    printf("U) - Unary Mathematical Operations, such as square root, and log.\n");
    printf("A) - Advances Mathematical Operations, using variables, arrays.\n");
    printf("V) - Define variables and assign them values.\n");
    printf("X) - Exit\n");

    char option; //container for user's option
    scanf(" %c", &option);

    float a = 0, b = 0, c = 0, d = 0, e = 0; //variables for V and A mode
    while(1) { //loops indefinetly, for as long as the person is using the calculator
        if(option == 'B') { //binary operations mode
            float num1, num2; //define containers for the variables and operation selected
            char operation;

            printf("Please enter the first number:\n"); //get input for the first number
            scanf(" %f", &num1);

            printf("Please enter the operation ( + , - , * , /, %%, ^):\n"); //get input for the operation
            scanf(" %c", &operation);

            printf("Please enter the second number:\n"); //get input for the second number
            scanf(" %f", &num2);

            switch (operation) { //for each operation, print out num1 (operation) num2
                case '+':
                    printf("The result is %f\n", (num1 + num2));
                    break;
                case '-':
                    printf("The result is %f\n", (num1 - num2));
                    break;
                case '*':
                    printf("The result is %f\n", (num1 * num2));
                    break;
                case '/':
                    printf("The result is %f\n", (num1 / num2));
                    break;
                case '%':
                    printf("The result is %i\n", ((int)num1 % (int)num2)); //must be converted to int for % to make sense
                    break;
                case '^':
                    printf("The result is %f\n", (pow(num1, num2))); //power function 
                    break;                                                                            
                default:
                //if invalid, exit and continue the loop
                    printf("Invalid operation\n");
                    break;
            }
        }
        else if(option == 'U') { //unary operations mode
            float num; //containers for number and operation
            char operation;

            printf("Please enter the operation ( S (square root), L (logarithm), E (exponential), C (cieling), F (floor)):\n"); //get input for the operation
            scanf(" %c", &operation);

            if(operation == 'S') { //make sure num is positive if square root is selected
                while(1) {
                    printf("Please enter a positive number:\n"); //get input for the number
                    scanf(" %f", &num);
                    if(num >= 0) {
                        break;
                    }
                }
            }
            else {
                printf("Please enter the number:\n"); //get input for the number
                scanf(" %f", &num);
            }

            switch (operation) { //for each operation print out operation(num)
                case 'S':
                    printf("The result is %f\n", sqrt(num));
                    break;
                case 'L':
                    printf("The result is %f\n", log10(num));
                    break;
                case 'E':
                    printf("The result is %f\n", exp(num));
                    break;
                case 'C':
                    printf("The result is %f\n", ceil(num));
                    break;
                case 'F':
                    printf("The result is %f\n", floor(num));
                    break;
                default:
                //if invalid, exit
                    printf("Invalid operation\n");
                    break;
            }
        }
        else if(option == 'A') { //advanced mode
            while(1) { //loop indefinetly until user wants to exit
                char advancedoption;
                printf("Select one of the following items:\n");
                printf("B) - Binary Mathematical Operations, such as addition and subtraction.\n");
                printf("U) - Unary Mathematical Operations, such as square root, and log.\n");
                printf("X) - Exit and back to the main menu\n");
                scanf(" %c", &advancedoption);

                if(advancedoption == 'B') { //binary mode
                    float num1, num2; //define containers for the variables and operation selected
                    char* var1;
                    char* var2;
                    char operation;

                    printf("Enter the first variable or number:\n"); //prompts and inputs
                    scanf(" %c", var1);

                    printf("Please enter the operation ( + , - , * , /, %%, ^):\n"); //get input for the operation
                    scanf(" %c", &operation);

                    printf("Enter the second variable or number:\n");
                    scanf(" %c", var2);

                    switch(*var1) { //imperfect, as a non a-e non number causes error, dereferenced as switch cant take a char*
                        case 'a':
                            num1 = a;
                            break;
                        case 'b':
                            num1 = b;
                            break;
                        case 'c':
                            num1 = c;
                            break;
                        case 'd': 
                            num1 = d;
                            break;
                        case 'e':
                            num1 = e;
                            break;
                        default:
                            num1 = atof(var1); //function to cast char* to a float
                    }

                    switch(*var2) {
                        case 'a':
                            num1 = a;
                            break;
                        case 'b':
                            num1 = b;
                            break;
                        case 'c':
                            num1 = c;
                            break;
                        case 'd': 
                            num1 = d;
                            break;
                        case 'e':
                            num1 = e;
                            break;
                        default:
                            num1 = atof(var2);
                    }

                    switch (operation) { //for each operation, print out num1 (operation) num2
                        case '+':
                            printf("The result is %f\n", (num1 + num2));
                            break;
                        case '-':
                            printf("The result is %f\n", (num1 - num2));
                            break;
                        case '*':
                            printf("The result is %f\n", (num1 * num2));
                            break;
                        case '/':
                            printf("The result is %f\n", (num1 / num2));
                            break;
                        case '%':
                            printf("The result is %i\n", ((int)num1 % (int)num2)); //must be converted to int for % to make sense
                            break;
                        case '^':
                            printf("The result is %f\n", (pow(num1, num2))); //power function 
                            break;                                                                            
                        default:
                        //if invalid, exit and continue the loop
                            printf("Invalid operation\n");
                            break;
                    }
                }
                else if(advancedoption == 'U') { //unary mode
                    float num; //containers for number and operation
                    char *var;
                    char operation;

                    printf("Enter the variable or number:\n");
                    scanf(" %c", var);

                    switch(*var) { //imperfect, as a non a-e non number causes error
                        case 'a':
                            num = a;
                            break;
                        case 'b':
                            num = b;
                            break;
                        case 'c':
                            num = c;
                            break;
                        case 'd': 
                            num = d;
                            break;
                        case 'e':
                            num = e;
                            break;
                        default:
                            num = atof(var);
                    }

                    printf("Please enter the operation ( S (square root), L (logarithm), E (exponential), C (cieling), F (floor)):\n"); //get input for the operation
                    scanf(" %c", &operation);

                    switch (operation) { //for each operation print out operation(num)
                        case 'S':
                            printf("The result is %f\n", sqrt(num));
                            break;
                        case 'L':
                            printf("The result is %f\n", log10(num));
                            break;
                        case 'E':
                            printf("The result is %f\n", exp(num));
                            break;
                        case 'C':
                            printf("The result is %f\n", ceil(num));
                            break;
                        case 'F':
                            printf("The result is %f\n", floor(num));
                            break;
                        default:
                        //if invalid, exit
                            printf("Invalid operation\n");
                            break;
                    }
                }
                else if(advancedoption == 'X') { //exit the mode
                    break;
                }
                else {
                    printf("Please enter a valid option\n");
                }
            }
        }
        else if(option == 'V') { //variable definitions mode
            char var; //container for variable user wants to modify
            float val; //container for value user wants to enter
            do { //loop that can be continued if something invalid is entered
                printf("Please enter the name of the variable ( A single character between 'a' to 'e' ):\n");
                scanf(" %c", &var);
                printf("Please enter a value to assign to the variable:\n");
                scanf(" %f", &val);

                if(var == 'a') { //set variable to value
                    a = val;
                }
                else if(var == 'b') {
                    b = val;
                }
                else if(var == 'c') {
                    c = val;                    
                }
                else if(var == 'd') {
                    d = val;                    
                }
                else if(var == 'e') {
                    e = val;                   
                }
                else {
                    continue;
                }
            }while(0);

            printf("Variable %c is set to: %f\n", var, val);
        }
        else if(option == 'X') { //exit
            break;
        }
        else { //if anything else added allow them to select a new one
            printf("Invalid option, please enter a new one\n");
        }
        //Allows them to select a new option to use the calculator again or leave
        printf("Please select your option (B (binary operation), U (unary operations), A (advanced), V (variables), or X (exit)) \n");
        scanf(" %c", &option);
    }

    printf("Thank you for using the Calculator. See you again soon. Goodbye!");
    return 0;
}