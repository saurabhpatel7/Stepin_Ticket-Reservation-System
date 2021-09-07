# TEST PLAN:

## Table no: High level test plan

| **Test ID** | **Description**                                              | **Exp I/P** | **Exp O/P** | **Actual Out** |**Type Of Test**  |    
|-------------|--------------------------------------------------------------|------------|-------------|----------------|------------------|
|  H_01       |Checking all the operation modes are executing properly |  By choosing 1 or 2 or 3 for the required operation| All the modes of operation are executed correctly|Obtained the required results|Requirement based |
|  H_02       |Checking whether all the operations are performed according to the selection in each operation modes| By choosing the operand or option in each mode according to the function  | All the functions are executed and obtained the correct results |Obtained the required results for all the functions|Scenario based    |
|  H_03       |Checking for other operations other than specified in the program|  By choosing other values that are not mentioned| "Enter the valid option", is to be printed|Obtained the required results|Boundary based    |

## Table no: Low level test plan

| **Test ID** | **Description**                                              | **Exp I/P** | **Exp O/P** | **Actual Out** |**Type Of Test**  |    
|-------------|--------------------------------------------------------------|------------|-------------|----------------|------------------|
|  L_01       |Checking the result obtained for addition, subtraction, multiplication, division  |    By giving different values| Correct answer according to the input values |Obtained the required results for all the operations|Requirement based    |
|  L_02       |Checking whether adding negative number results the correct value|  By giving num1 or num2 or both as negative values| Correct answer according to the input values and operator |Obtained the correct results|Scenario based |
|  L_03       |Checking whether subtracting negative number results the correct value|    By giving num1 or num2 or both as negative values| Correct answer according to the input values and operator|Obtained the correct results|Scenario based    |
|  L_04       |Checking whether subtracting larger number from smaller number results the correct value|    By giving first operand value smaller than the second| Correct answer according to the input values and operator|Obtained the required results|Scenario based    |
|  L_05       |Checking whether multiplication of negative number results the correct value|    By giving num1 or num2 or both as negative values| Correct answer according to the input values and operator|Obtained the required results|Scenario based    |
|  L_06       |Checking whether multiplying 2 large numbers results overflow|    By giving num1 or num2 or both large values| Printing the message as, "Error, Result cannot be printed"  |Obtained the required results|Boundary based    |
|  L_07       |Checking whether dividing negative number results the correct value|    By giving num1 or num2 or both as negative values| Correct answer according to the input values and operator|Obtained the required results|Scenario based    |
|  L_08       |Checking whether dividing by zero results an error |    By giving num2 = 0 | Printing the message as, "Error, Number cannot be divided by zero"|Obtained correct results|Requirement based    |
|  L_09       |Checking whether interest amount is correct or not  |    By giving different p,t,r,n values| Correct answer according to the input values |Obtained the correct results|Requirement based    |
|  L_10       |Checking the result obtained for factorial, exponential, log, power  |    By giving different values| Correct answer according to the input values |Obtained the required results|Requirement based    |
|  L_11       |Checking the result obtained for  exponential function where given number is large negative value  |    By giving large negative value| Printing the message as, "Error, Result cannot be printed"  |Obtained the required results|Boundary based    |
|  L_12       |Checking the result obtained for  factorial, exponential, power where input value is very large  |    By giving large value| Printing the message as, "Error, Result cannot be printed"  |Obtained required results|Boundary based    |
|  L_13       |Checking the result obtained for  log where input value is negative  |    By giving negative value| Printing the message as, "Error, number cannot be negative"  |Obtained the required results|Scenario based    |
|  L_14       |Checking whether exit option works properly or not  |    By selecting the correct option| Screen should be closed  |Screen closed properly |Scenario based    |
