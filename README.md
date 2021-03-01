# Money-Counter
 A C++ program that allows the user to input a total amount of money in dollars and change (example 3.45) and the program will then tell the user the number of each coin the user has!
 
 This particular program practices the use of mathematical operators and variables, which then works as an virtual coin calculator program. The program starts by asking the user for a specific quantity of numbers, entered as a floating-point number, (example 3.45). The program should then compute how many dollar coins, half-dollars, quarters, dimes, nickels, and pennies, (in that order), that would be needed to add up to the user's chosen total amount. The "totals" that are given by the program should be the smallest possible number of coins that would add up to the user's total amount.
 
 Adding int main(int argc, char** argv) - allows the programmer to enable the use of simple math, which is neccesary for this specific program.
 
 First, the programmer should add each variable as an "int" variable, such as, int dollars, int half dollars, int quarters, so on.. 
After this is completed, the programmer should then add functions that use basic math, in order to correctly calculate the the value of each variable. For example, nickles are equal to 5 cents, so the programmer must multiply the variable "nickles" by five. This should be done to each of the programmer's chosen variables, using the appropriate amount to be multiplied by. 
Once all of the functions are established, the programmer should then tell the computer to print, or "cout" how many dollars, half-dollars, quarters, and so on.. so that the user knows the exact coin amount, given their chosen total amount. 

 Here is an example what the program will output:
 
Enter the total number of change. (Example 3.45): 3.94

Dollars: 3
Half-dollars: 1
Quarters: 1
Dimes: 1
Nickels: 1
Pennies: 4
