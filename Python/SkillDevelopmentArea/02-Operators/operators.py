"""Operators in python are very powerful and easy to use. I will show you how to deal with basic 
arithmetic operators in this chapter.
"""
x=10 ##assignment operator
y=15
print x+y
print x-y
print x*y
print x//y ##division operator must either have one real value or // in case you want real values instead of integers

##Now let us look at the exponential power of python and also explore how to take input

i=raw_input("Enter limit")  ##raw_input is used to take all sorts of input since it stores everything as strings

##raw_input() has a prompt to display something to the user
##we can also use input() but it is limited to taking only arithmetic values as inputs

for temp in range(i+1):
	print temp**2  ## ** is used as the exponent function and it thus means temp^2

##Do not worry about the use of for loop, we'll go into details of that later.

##Now let us look at conditional operators
## >, < , >=, <=, ==, != these are all conditional operators that ar used to compare values 
##among each other


##Now let us look at the if-else block which is used to test conditionals to check which block
##of code would be executed.

a=10
b=15
if a>=b: ##test condition
	print a
else :
	print b

##here the test condition is checked and if it is true,the if block is executed
##otherwise the else block is executed.
##Congrats! You just got a real deep first cut about operators in python


