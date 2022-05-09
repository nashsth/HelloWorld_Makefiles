#ifndef HELLO__
#define HELLO__

int hello_fn(const char *);

#endif // HELLO__

/*

  This include guard is a good habit. Prevents things from being included more than once.
  In more complicated projects, when you have multiple header files and multiple source files,
  and they include each other, you might get into a situation where you will have multiple
  inclusions of the same header file, leading to errors.

  E.g. main.c contains headers a.h and b.h
  However, b.h contains a.h
  This causes main.c to not compile.

*/