
s = raw_input()

i = 0
c = 0

# too: i, c = 0, 0

while i < len(s):
	if s[i] == 'a' or s[i] == 'e' or s[i] == 'i' or s[i] == 'o' or s[i] == 'u':
		c += 1

	i += 1

print "Number of vowels: ", c