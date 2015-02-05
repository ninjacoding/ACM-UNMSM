
try:
	num = float(raw_input("Enter score: "))
	if num >= 0.0 and num <= 1.0:
	# if 0.0 <= num <= 1.0:
		if num >= 0.9:
			print "A"
		elif num >= 0.8:
			print "B"
		elif num >= 0.7:
			print "C"
		elif num >= 0.6:
			print "D"
		elif num <= 0.6:
			print "F"
	else:
		print "Bad score"
except Exception, e:
	print "Bad score"
