#include <calculator_operations.h>

/* Calculator operation mode requested by user*/
unsigned int calculator_operation_mode = 0;

/* Calculator operation requested by user*/
unsigned int calculator_operation = 0;

/* Operands on which calculation is performed */
int calculator_operand1 = 0;
int calculator_operand2 = 0;

/* Function pointers for basic operations */
int (*fnparr[4])(int, int); 
/* Valid operations */
enum operations{ FACTORIAL=1, LOGARITHM, EXPONENTIAL, POWER, EXIT };

/* Display the menu of operations supported */
void calculator_menu(void);
/* Display the menu of basic operations supported */
void basic_operations(int operation);
/* Display the menu of basic operations supported */
void financial_operations(int operation);
/* Display the menu of basic operations supported */
void other_operations(int operation);

/* Start of the application */
int main(int argc, char *argv[])
{
    printf("\n****Welcome to the Calculator Application****\n");
    while(1)
    {
        calculator_menu();
    }
}

void calculator_menu(void)
{
    printf("\nAvailable Mode of Operations\n");
    printf("\n1. Basic Operations\n2. Financial Operations\n3. Other Operations\n4. Exit");
    printf("\n\tEnter your choice\n");
   
    scanf("%d", &calculator_operation_mode);

    switch(calculator_operation_mode)
    {
    case 1:
        printf("\n\t---Welcome to Basic Operations---\n");
        printf("\nAvailable Basic Operations\n");
        printf("\n1. Addition\n2. Subtarction\n3. Multiplication\n4. Division\n5. Exit");
        printf("\n\tEnter your choice\n");
   
        scanf("%d", &calculator_operation);
        basic_operations(calculator_operation);
        break;
    case 2:
        printf("\n\t---Welcome to Financial Operations---\n");
        printf("\nAvailable Financial Operations\n");
        printf("\n1. Simple Interest\n2. Compound Interest\n3. Total Amount\n4. Exit");
        printf("\n\tEnter your choice\n");
   
        scanf("%d", &calculator_operation);
        financial_operations(calculator_operation);
        break;
    case 3:
        printf("\n\t---Welcome to Other Operations---\n");
        printf("\nAvailable Other Operations\n");
        printf("\n1. Factorial\n2. Logarithm\n3. Exponential\n4. Power\n5. Exit");
        printf("\n\tEnter your choice\n");
   
        scanf("%d", &calculator_operation);
        other_operations(calculator_operation);
        break;
    case 4:
        printf("\nThank you. Exiting the Application\n");
        exit(0);
    default:
        printf("\n\t---Enter the valid operation mode---\n");
    }
}

void basic_operations(int operation){
    if(calculator_operation == 5){
        printf("\nThank you. Exiting the Application\n");
        exit(0);  
    }
    else if (calculator_operation > 5 || calculator_operation < 0)
    {
        printf("\nEnter the valid option\n");
    }
    else {
        printf("Enter 2 numbers\n");
        scanf("%d %d", &calculator_operand1, &calculator_operand2);
        fnparr[1] = add;
        fnparr[2] = subtract;
        fnparr[3] = multiply;
        fnparr[4] = divide;
        int result = (fnparr[calculator_operation])(calculator_operand1, calculator_operand2);
        printf("The result of the chosen operations is %d\n", result);
    }
}

void financial_operations(int operation){
    static fin_opt c1 = {0, 0, 0};
    double operand1, operand2;
    if(operation == 1){
        printf("Enter the principle amount, rate of interest and time period to find simple interest\n");
        scanf("%lf %lf %lf", &c1.principal_amount, &c1.rate_of_interest, &c1.time_of_period);
        printf("The simple interest is %lf\n", simple_interest(&c1));
    }
    else if(operation == 2){
        printf("Enter the principle amount, rate of interest and time period to find compound interest\n");
        scanf("%lf %lf %lf", &c1.principal_amount, &c1.rate_of_interest, &c1.time_of_period);
        printf("The compound interest is %lf\n", compound_interest(&c1));
    }
    else if(operation == 3){
        printf("Enter the principle amount and interest amount to find total amount\n");
        scanf("%lf %lf", &operand1, &operand2);
        printf("The total amount is is %lf\n", total_amount(operand1, operand2));
    }
    else if(operation == 4){
        printf("\nThank you. Exiting the Application\n");
        exit(0); 
    }
    else{
        printf("\nEnter the valid option\n");
    }
}

void other_operations(int operation){
    int operand1;
    double calculator_operand1, calculator_operand2;
    switch(calculator_operation)
    {
        case FACTORIAL:
            printf("Enter the integer for factorial function\n");
            scanf("%d", &operand1);
            printf("The factorial of %d is %d\n", operand1, fact(operand1));
            break;
        case LOGARITHM:
            printf("Enter the number for logarithm function of base 10\n");
            scanf("%lf", &calculator_operand1);
            printf("The log of %lf to the base 10 is %lf\n", calculator_operand1, logarithm(calculator_operand1));
            break;
        case EXPONENTIAL:
            printf("Enter the number for exponential function\n");
            scanf("%lf", &calculator_operand1);
            printf("The exponential of %lf is %lf\n", calculator_operand1, exponential(calculator_operand1));
            break;
        case POWER:
            printf("Enter the numbers for power function\n");
            scanf("%lf %lf", &calculator_operand1, &calculator_operand2);
            printf("The value is %lf for %lf to the power of %lf\n", power(calculator_operand1, calculator_operand2), calculator_operand1, calculator_operand2);
            break;
        case EXIT:
            printf("\nThank you. Exiting the Application\n");
            exit(0);
            break;
        default:
            printf("\n\t---Enter the valid operation---\n");
    }
}
