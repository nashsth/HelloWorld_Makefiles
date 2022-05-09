# ---------------------------------------- MAKEFILE V2.0 ---------------------------------------- #

# NOTES

# This makefile searches alternative directories to find prerequisites. 

# VPATH tells GNU Make where to find prerequisite files needed to make the default goal.

# VPATH does NOT tell the COMPILER where the prerequisite files live. To do this, either:\
  1) change: #include "header.h" into #include "/path/to/header/header.h" in the source files\
  2) give the absolute path to the header/source files (we adopt this method in this Makefile)

# You must tell both Make AND the compiler to search other directories to find prerequisites: \
  Make != Compiler. They are independent entities. 
  

# ---------------------------------------- START MAKEFILE --------------------------------------- #

CC = gcc
object_files = HelloWorld.o hello_fn.o 
VPATH = Source:Header  # Tells Make to search these directories for potential prerequisites 
header_files_directory = ~/Projects/HelloWorld/HelloWorld_v2.0/Header # Absolute path to the header files
source_files_directory = ~/Projects/HelloWorld/HelloWorld_v2.0/Source # Absolute path to the source files
CFLAGS = -Wall -Wextra -I $(header_files) -I $(source_files) # Tells the COMPILER to search these directories


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

# Makefile should be able to track dependencies automatically, instead of having to\
  write implicit rules to see which object file depends on which header files. I.e. \
  lines 31 and 33 should be generated automatically.  

# It is tedious to write the contents for the object_files variable. Instead, the content should \
  be written on its own.  