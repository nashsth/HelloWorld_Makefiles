# ---------------------------------------- MAKEFILE V3.0 ---------------------------------------- #

# NOTES 

# This makefile automatically detects dependencies for object files written in the default goal.\
  It creates .d files (the dependecy files), which contains the code snippet which creates a code\
  snippet in which the implicit rule "foo.o: foo.c header_foo.h" gets created. Then, if you include\
  this code snippet using the -include directive, that code snippet is now part of the makefile.  

# This makefile searches alternative directories to find prerequisites. 

# VPATH tells GNU Make where to find prerequisite files needed to make the default goal.

# VPATH does NOT tell the COMPILER where the prerequisite files live. To do this, either:\
  1) change: #include "header.h" into #include "/path/to/header/header.h" in the source files\
  2) give the absolute path to the header/source files (we adopt this method in this Makefile)

# You must tell both Make AND the compiler to search other directories to find prerequisites: \
  Make != Compiler. They are independent entities. 

# This makefile also automatically generates the content for the "object_files" variable 



# HOW TO USE THIS MAKEFILE

# 1) Change the following parts of the code as you see fit:\
     - The content of the "VPATH" variable, if you have different source and header directories for your project. \
  	 - The content of the "header_files_directory" and "source_files_directory" to the correct path.\
     - The "Source/" string on line 46, if the name of your source directory is different.\
	   - The name of the default goal (line 50).\
	   - The name of the prerequisite in the "clean" command (line 64)


#  2) Place this makefile in the proper directory. 

# ---------------------------------------- START MAKEFILE --------------------------------------- #

VPATH = Source:Header  # Tells Make to search these directories for potential prerequisites 
header_files_directory = ~/Projects/HelloWorld/HelloWorld_v3.0/Header # Absolute path to the header files
source_files_directory = ~/Projects/HelloWorld/HelloWorld_v3.0/Source # Absolute path to the source files

CC = gcc
CFLAGS = -Wall -Wextra -I $(header_files_directory) -I $(source_files_directory) # Tells the COMPILER to search these directories

source_files = $(wildcard Source/*.c) # Gather all .c files from the Source/ directory 
object_files = $(source_files: .c = .o) # Convert all .c files from the Source/ directory into object files


Hello: $(object_files)
	$(CC) $(CFLAGS) $(object_files) -o $@


# Write dependency automatically for each object file
%.o: %.c 
	$(CC) $(CFLAGS) -MMD $< -c -o $@ 

-include *.d


.PHONY: clean

clean: 
	rm Hello


# ---------------------------------------- END MAKEFILE ---------------------------------------- #