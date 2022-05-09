# HelloWorld_Makefiles

This is my attempt at understanding how to automate the build process using Makefiles and GNU Make. 

When working with IDEs like Visual Studio or Keil or IAR Embedded Workbench, it is easy to write and deploy code. With one click of a button, your code is compiled and ready to be executed. However, these IDEs tend to hide certain details of the compilation process. To have a deeper idea of what goes on "behind the scenes" of IDEs, it is helpful to try to compile code by invoking the compiler from the command line. 

For example, supposing that we have a source file called source.c and we wish to compile this source file into a binary file, we would perform the following command (the compiler used is assumed to be GCC):

gcc source.c -o source

Once you write this line, the compiler is invoked and you have an executable compiled from the source file specified. However, if you want to make any changes to your source file, you'd have to write this line again. For projects which only have a small number of source files, this isn't too bad. However, if your project is more complex, involving multiple source files and header files (collectively called "prerequisites" in the parlance of Makefiles), then it becomes unfeasible to invoke the compiler each time. Keeping track of dependencies between the source files and header files quickly becomes a nightmare. 


This is where Makefiles come in. They allow us to "automate" the build process. Automating the build process simply means that you don't have to invoke the compiler in its gory details. Instead, all you write is "make" in the terminal, and GNU Make invokes the compiler for you. To learn more about Makefiles, consult the GNU Make manual found here: https://www.gnu.org/software/make/manual/make.html

There are also good tutorials found here: 
1) http://nuclear.mutantstargoat.com/articles/make/
2) https://cs.colby.edu/maxwell/courses/tutorials/maketutor/


You will find three directories in this repo: HelloWorld_v1.0, HelloWorld_v2.0, and HelloWorld_v3.0. Each directory contains some C source files and header files. The following shows how each directory is organized:

HelloWorld_v1.0/

        - hello_fn.c
        - hello.h
        - HelloWorld.c
        - Makefile
        
HelloWorld_v2.0/

        - Header/
            - hello.h
            
        - Source/
            - hello_fn.c
            
        - Makefile

HelloWorld_v3.0/

        - Header/
            - hello.h
            
        - Source/
            - hello_fn.c
            
        - Makefile
        
        
In all three versions, the idea is that HelloWorld.c contains the main() function, which calls the function hello_fn(). hello_fn() is declared in the header file hello.h and is defined in the source file hello_fn.c 

Now, in v1.0, all prerequisites are in the same directory. However, in v2.0 and v3.0, the prerequisites are organized such that header files are kept in the Header/ subdirectory, and source files are kept in the Source/ subdirectory. Each consecutive directory contains a more advanced Makefile that allows more abstract and versatile functionality. The following describes the capability of the makefiles found in each directory:

**HelloWorld_v1.0**: Allows for build automation only when all prerequisites are in the same directory as the Makefile. You must list all object files the binary depends on, and furthermore you must specify the dependency of each object file. What this means is that you must explicitly write out all the object files you anticipate must be present, and furthermore, for EACH object file you note down, you must specify which source and header files that object file depends on. To learn more about object files, look up the compilation process, and what files are created during each step of the compilation process. 

**HelloWorld_v2.0**: Allows for build automation even when you keep source and header files in separate directories relative to the Makefile. However, you must still make a list of object files you anticipate must be present, and specify the dependency of each object file. The process of keeping a list of object files is made automatic by the introduction of the pattern substitution feature of GNU Make, but the specification of the dependency on source/header files is still the same as from v1.0

**HelloWorld_v3.0**: Allows for build automation when the prerequisites are in different directories. Furthermore, the dependency of each object file is now automatically completed. 


