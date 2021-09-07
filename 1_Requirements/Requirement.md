#Requirements
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

