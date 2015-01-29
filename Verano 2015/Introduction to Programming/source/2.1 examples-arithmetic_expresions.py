# Aritmetic expressions - numbers, operators, expressions

print 3, -1, 3.14159, -2.8

#numbers - two types, and integer or a decimal number
# two corresponding data type int() and float()

print type(3), type(3.14159)
print type(3.0)

# we can convert between data types using int() and float()

print int(3.1), int(3.7), int(-3.1), int(-3.7)

print float(3), float(-7)


#operators
# + 	addition
# - 	subtration
# *		multiplication
# /		division
# **	exponentiation

print 1 + 2, 3 - 4, 5*6, 2**5


# Division in Python 2
# If one operand is a decimal (float), the answer is decimal

print 1.0 / 3, 5.0 / 2.0, -7 / 3.0

# If both operands are int, the answer is an int
print 1 / 3, 5 / 2, -7 / 3


# expressions - are a sequence of numbers and operations
# operator precedence - (), **, %, /, *, +, -

print 1 * 2 + 3 * 4
print 2 + 12


#always manually group using parentheses when in doubt
print 1 * (2 + 3) * 4
print 1 * 5 * 4
