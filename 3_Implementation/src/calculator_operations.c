#include <calculator_operations.h>
#include "stdint.h"

int add(int operand1, int operand2)
{   
    int res = operand1 + operand2;
    if (operand1 > 0 && operand2 > 0 && res < 0) {
        printf("Error, Result cannot be printed");
        return -1;
    }
    else if (operand1 < 0 && operand2 < 0 && res > 0) {
        printf("Error, Result cannot be printed");
        return -1;
    }
    else return res;
}

int subtract(int operand1, int operand2)
{
    return operand1 - operand2;
}

int multiply(int operand1, int operand2)
{
    int mul = operand1 * operand2;
    if(operand1 ==0 || operand2==0)
        return mul;
    else if (operand1==mul/operand2)
        return mul;
    else {
        printf("Error, Result cannot be printed");
        return -1;
    }
}

int divide(int operand1, int operand2)
{
    if(0 == operand2){
        printf("Error, Number cannot be divided by zero");
        return 0;
    }
    else
        return operand1 / operand2;
}

double simple_interest(fin_opt* sim_opt){
    return (sim_opt->principal_amount * sim_opt->time_of_period * sim_opt->rate_of_interest)/100;
}

double compound_interest(fin_opt* com_opt)
{
    double ans = pow((1 + com_opt->rate_of_interest / 100), com_opt->time_of_period);
    return com_opt->principal_amount * (ans);
}

double total_amount(double principal_amount, double interest_amount){
    return principal_amount+interest_amount;
}

int fact(int operand1){
    int i,f=1;
    if (operand1 < 1)
    {
        return 1;
    }
    for(i=1;i<=operand1;i++){
    f=f*i;
    }
    if(f<__INT_MAX__ && f>0)
        return f;
    else {
        printf("Error, Result cannot be printed");
        return -1;
    }
}

double power(double operand1, double operand2){
    double result = pow(operand1,operand2);
    return result;
}

double logarithm(double operand1){
    if(operand1<0) {
        printf("Error, number cannot be negative");
        return -1;
    }
    double result = log10(operand1);
    return result;
}

double exponential(double operand1){
    if(operand1>1000 || operand1<-1000){ 
        printf("Error, Result cannot be printed");
        return -1;
    }
    double result = exp(operand1);
    return result;
}
