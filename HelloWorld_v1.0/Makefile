# ---------------------------------------- MAKEFILE V1.0 ---------------------------------------- #

# NOTES:

# This makefile only works if all the prerequisites are in the same directory. 

# It also uses variables to make things nice and neat. 

# It uses implicit rules to avoid having to write recipes for each individual object file. 

# ---------------------------------------- START MAKEFILE --------------------------------------- #

object_files = HelloWorld.o hello_fn.o
CC = gcc
CFLAGS = -Wall -Wextra 

Hello: $(object_files) 
	$(CC) $(CFLAGS) $(object_files) -o $@   
	rm *.o 

hello_fn.o: hello_fn.c hello.h 

HelloWorld.o: HelloWorld.c hello.h 

.PHONY: clean

clean: 
	rm Hello

# ---------------------------------------- END MAKEFILE ---------------------------------------- #

# NEXT STEPS:

# Makefile should be able to use source files from different directories. 

# Makefile should be able to track dependencies automatically, instead of having to\
  write implicit rules to see which object file depends on which header files. 

# Finally, it should automatically make the object_files variable content. 