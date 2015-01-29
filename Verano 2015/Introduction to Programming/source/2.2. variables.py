# variables - is like a box that holds a value
# variables - placeholders for important values
# used to recomputing values and to
# give values names that help reader understand code

# valid variable names - consists of letters, numbers, underscore (_)
# starts with letter or underscore
# case sensitive

# legal names - ninja, Ninja, n_i_n_j_a
# illegal names - 1337, 1337ninja

# Python convention - multiple words joined by _
# legal names - elite_ninja, ninja_1337
# illegal names - 1337_ninja

# assign to variable name using single equal sign =
# (remember that double equals == is used to test equality)

# examples

my_name = "Wilson J. Mejia"
print my_name

my_age = 20
print my_age

# birthday - add one

#my_age = 20 + 1
#my_age = my_age + 1
my_age +=  1
print my_age


# Temperature examples

# convert from Fahrenheit to Celsius
# c = 5 / 9 * (f - 32)
# use explanatory names

# test it! 32 Fahrenheit is 0 Celsius, 212 Fahrenheit is 100 Celsius
temp_fahrenheit = 32  #change to 212
temp_celsius = (5 / 9.0) * (temp_fahrenheit - 32)
print temp_celsius
