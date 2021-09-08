# HOTEL MANAGEMENT SYSTEM

#  Requirements

## Introduction

### What is Hotel Management System?

The hotel management system is a web based application that allows the hotel manager to
handle all hotel activities online. Interactive GUI and the ability to manage various hotel bookings
and rooms make this system very flexible and convenient. To manage the entire activities manually on paper is very time taken process. This
application provides flexibility to manage the entire system from a single online
system.

## Research

### Hotel management System features and benefits

The Requirements of increasing global competition, demands,needs of consumers and quality management have become
fundamental key factors of achieving profitability and competitiveness on the constant market. A hotel with a defined mission, vision and
goals, must define a special policy of improving the quality of hotel services through structural programs of quality improvement,which have
become an important factor in the hotel business. With the design, introduction and control of a
special program of quality improvement of hotel services, hotel management can have a positive
impact on increasing satisfaction of customers.

### Benefits

Hotel Management System enables the customers for online booking of rooms and makes it easy for the manager to keep logs.Few benefits are below-

### Advance booking/Pre-booking made easy

It is possible that user can able to book the rooms before they visits the place therefore user can make advance booking using this system.

### Customer Satisfaction

User can easily access the hotel availability through online and it saves user time in searching a room.

### Billing Information

This Hotel management system is useful as it calculates an exact cost of rooms including taxes for requested number of days.

### Effective Management

This system is effective, saves time and cost of users. Thus, it saves organization resources and expenses.

## Cost and Time Complexity

### Time Complexity

O(N), where N is the number of rooms available.
    This refers that running time increases at most linearly with the size of the input.

### Space Complexity

O(N), the amount of memory needed to run the algorithm i.e, space complexity.

## Defining system

![defining system](https://user-images.githubusercontent.com/62166597/114381286-931e9c80-9ba8-11eb-8995-0813aa988dba.png)

## Explanation
  ### Hotel Management Features

       Features of the room (like type of the room, type of food etc.).
       Customer details (Name, Address, phone number and period of stay).
       Room Allocation.
       Room Deallocation.
       Billing (Total billing for type of room taken and food ordered).

## SWOT Analysis

<img width="750" alt="SWOT" src="https://user-images.githubusercontent.com/62166597/114440231-83727880-9be7-11eb-8c3c-04c4cf9fcc9f.PNG">


## 4W's and 1'H
   
   ### Who:
           Hotel Management System is a software solution by providing high-quality services. This system is used for any kind of hotel business
           whether it be small scale or large scale.
    
   ### What:
           It is helpful for the Hotels/resorts/lodges/hostels in order to provide ease at booking through online.
   
   ### When:
           The Hotel Management System is now used in every hotels/resorts to provide easy booking for customers with good quality services.
   
   ### Where:
           Face the issues in booking process, it usually requires a customer identity.

   ### How:
           This issue can be solved by requesting any government proof of customer before saving the details.
         
       
## Detail requirements

### High Level Requirements 

| ID | Description | Category | Status | 
| ----- | ----- | ------- | ---------|
| HR01 | User should be able to view Restaurant details | Techincal | TBD-S1 | 
| HR02 | User should be able to record the customer details | Techincal | TBD-S1 |
| HR03 | User should be able to view the customer details | Techincal | TBD-S1 |
| HR04 | The System shall record the availability of rooms | Techincal | TBD-S1 |
| HR05 | User should be able to allocate room number to customer | Techincal | TBD-S1 |
| HR06 | The System shall record the payement for purchased meals and room| Techincal | TBD-S1 |
| HR07 | The System shall check-in customers  | Technical | TBD-S1 |
| HR08 | The System shall check-out customers  | Technical | TBD-S1 |
| HR09 | Data should be stored when closing the system | Scenario | TBD-S1 |

###  Low level Requirements
 
| ID | Description | HLR ID | Status (Implemented/Future) |
| ------ | --------- | ------ | ----- |
| LR01 | User have to store the customer name, address, mobile number and period of stay of customer | HR02 | TBD-S1 |
| LR02 | Finding the customer details by simply just entering the name of that particular customer and if we enter wrong customer name then it will display "NO DETAILS" | HR03 | TBD-S1 |
| LR03 | After allocating room for previous customer, it should be able to show the availability of rooms for current customer | HR04 | TBD-S1 |
| LR04 | After user stores the customer details and check the availabilty of rooms then user should provide vacancy room according to the customer requirements | HR05 | TBD-S1 |
| LR05 | The System shall provide the bill for both type of the room and type of meals have choosen by customer  | HR06 | TBD-S1 |
| LR06 | The System shall check-in the customer by their requirements and availablity in the hotel that is for how many days rooms are vacancy | HR07 | TBD-S1 |
| LR07 | The System shall check-out the customer by deallocating their rooms by simply just enter customer name it will provide details and total bill | HR08| TBD-S1 |
| LR08 | Every time after allocating room for the customer, it will saves the vacancies of the rooms and after deallocating it will automatically update the vacancies of the rooms | HR03,HR04,HR05 | TBD-S1 |



