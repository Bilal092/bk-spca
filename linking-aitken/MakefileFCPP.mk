leibnizFinC.exe: leibnizFinC.o aitkenf.o
	icc -o leibnizFinC.exe leibnizFinC.o aitkenf.o -lifcore 

leibnizFinC.o: leibnizFinC.c
	icc -O3 -c $<

leibnizFinCPP.exe: leibnizFinCPP.o aitkenf.o
leibnizFinCPP.o: leibnizFinCPP.cpp