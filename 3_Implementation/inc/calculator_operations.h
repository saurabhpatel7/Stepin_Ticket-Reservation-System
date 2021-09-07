/** 
* @file calculator_operations.h
* Calculator application with 3 modes of operations
*
*/
#ifndef __CALCULATOR_MODES_OF_OPERATIONS_H__
#define __CALCULATOR_MODES_OF_OPERATIONS_H__

#include <stdio.h>
#include <stdlib.h>
#include<math.h>
/**
 * @brief Structure for the financial operations
 * 
 */
typedef struct financial_operations
{
    double principal_amount;  /**< principal amount */
    double rate_of_interest;    /**< rate of interest */
    double time_of_period;  /**< time period */
}fin_opt;

/**
*  adds the operand1 and operand2 and returns the result
* @param[in] operand1 
* @param[in] operand2 
* @return Result of operand1 + operand2
*/
int add(int operand1, int operand2);

/**
*  subtracts the operand1, operand2 and returns the result
* @param[in] operand1 
* @param[in] operand2 
* @return Result of operand1 - operand2
*/
int subtract(int operand1, int operand2);

/**
*  multiply the operand1, operand2 and returns the result
* @param[in] operand1 
* @param[in] operand2 
* @return Result of operand1 * operand2
*/
int multiply(int operand1, int operand2);

/**
* divides the operand1 by operand2 and returns the result 
* @param[in] operand1 
* @param[in] operand2 
* @return integer value of the operand1 / operand2
* @note returns 0 for divide by 0 error
*/
int divide(int operand1, int operand2);

/**
* finds simple interest by formula and returns the result
8 @param[in] pointer to financial_operations structure 
* @return float value of the (principal_amount*time_of_period*rate_of_interest)/100
*/
double simple_interest(fin_opt* sim_opt);

/**
* finds compound interest by formula and returns the result
* @param[in] pointer to financial_operations structure 
* @return float value of the principal_amount*(1+(rate_of_interest/100))^time_of_period
*/
double compound_interest(fin_opt* com_opt);

/**
* finds total amount by formula and returns the result
* @param[in] principal_amount 
* @param[in] interest_amount 
* @return integer value of the principal_amount+interest_amount
*/
double total_amount(double principal_amount, double interest_amount);

/**
*  finds the factorial of operand1 and returns the result
* @param[in] operand1  
* @return Result of operand1!
*/
int fact(int operand1);

/**
*  finds the operand1 to the power of operand2 and returns the result
* @param[in] operand1 
* @param[in] operand2 
* @return Result of operand1^operand2
*/
double power(double operand1, double operand2);

/**
*  finds the log of of operand1 to the base 10 and returns the result
* @param[in] operand1  
* @return Result of log(operand1)
*/
double logarithm(double operand1);

/**
*  finds the exponential to the power of operand1 and returns the result
* @param[in] operand1  
* @return Result of e^operand1
*/
double exponential(double operand1);

#endif  /* #define __CALCULATOR_OPERATIONS_H__ */
