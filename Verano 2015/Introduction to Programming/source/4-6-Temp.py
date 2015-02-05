temp = int(raw_input("Ingrese un numero: "))
if(temp>=85):
	if(temp<100):
		print "Hot"
	else:
		print "REALLY HOT!"
else:
	if(temp>=60):
		print "Comfortable"
	else:
		print "Cold"
