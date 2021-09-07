# Requirements
- The calculator has the following keys: 0..9, ., +, -, *, /, ±, =, C, CE and 1-operand keys: 1/x, x2
,
sqrt. In any situation the calculator has to produce a correct result defined by the well known
arithmetic rules. If the calculations is impossible the calculator has to display information helping
the user to resolve the erroneous situation, like:
- On encountering a division by 0 the display should read "Cannot divide by 0" and typing the
key “C” should reset the calculator.
- On calculating the square root value of a negative operand the display should read "Wrong
operand".
- On erroneous operand or operation keys the display should read “Reset (C) to continue” or
“Clear (CE) to continue” as appropriate.
Of course, any situation can be cleared using the main reset key “C”.
Design
- The calculator control system
Before we start to think about a calculator state machine we should make a design of the
calculator control system.
- We may consider a calculator control as a system that reacts to keys performing all elementary
actions. This approach is a dead end street leading to a very complex state machine that is difficult
to handle.
 - We will define another way that is based on the observation that a calculator is a builder of
strings that are executed when complete. 
- The rules for handling such a calculator system are fairly
simple:
* Parse the incoming keys and assign them to the appropriate control value.*
* Complete an Expression string from incoming keys.*
* Perform a calculation defined by the Expression string according to arithmetic rules, when*

# 4 W's and 1 H
# WHO 
 The project can be used almost by all. All the financial related employees and students can use the program to find out the answer they need. At the end,  user satisfaction is the goal  of the project.
# WHAT
Calculations related to basic math and finance can be calculated quickly. All the basics functionalities are included in the project. User can use the program efficiently and get the required results.

# WHEN
The project can be used at the time of solving the calculations 
and get the results for basic and finance related problems. The result will be obtained quickly.

# WHERE
In all the domains it can be used. As the project is portable and user-friendly, it can be easily implemented on the mobile systems and finance companies. It should overcome all the drawbacks of the Old existing system and most important of all meet the user requirements.

# HOW
System design is a solution for “HOW TO” approach to the creation of a new system. It translates system requirements into ways by which they can be made operational. It is a translational from a user oriented document to a document oriented programmers. For that, it provides the understanding and procedural details necessary for the implementation. Here UML diagrams are used to supplement the working of the new system. The system thus made should be reliable, durable and above all should have least possible maintenance costs.

# Detail Requirements

# High Level Requirements

|      ID          |Description                          |Status                         |
|----------------|-------------------------------|-----------------------------|
|HR_01|Operating System (Windows 10/Linux)       |Implemented            |
|HR_02|C language            |Implemented|
|HR_03|Pentium IV Processor  |Implemented|
|HR_04|RAM(512MB)|Implemented|
|HR_05|Hard Disk(2GB)|Implemented|

# Low Level Requirements

|      ID          |Description                          |Status                         |
|----------------|-------------------------------|-----------------------------|
|LR_01| Using Addition, Subtraction, Multiplication, Division functions        |Implemented            |
|LR_02|Using functions to find simple and compound interests and total amount            |Implemented|
|LR_03|Using functions to find factorial, power, log and exponential   |Implemented|
|LR_04|Functions to find trigonometric operations |Future|
|LR_05|Functions to display hex, octal, binary and ASCII of a decimal number |Future|
|LR_06| Bitwise logical operations |Future|


