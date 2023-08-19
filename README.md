# C++ Tutorial
Learn C++ in couple minutes with this short tutorial about syntax C++.

# Conventions

C++ uses CamelCase convention for writing the names of functions, variables, constants, CamelCase is a naming convention where a name is formed of multiple words that are joined together as a single word with the first letter of each of the word capitalized.

# How compilation works
According to this helpful [resource](https://www.mycplus.com/tutorials/cplusplus-programming-tutorials/what-are-the-best-c-compilers-to-use-in-2023/#google_vignette), the compiler goes through the following 5 steps:

1. **Pre-processing**: First, the pre-processor reads the source code and performs macro expansions, inclusion of header files, and other operations as specified by pre-processor directives (#include, #define, #ifndef, etc.).
2. **Compilation**: Second step performs the actual translation of the source code into object code. The object code is a machine-readable representation of the source code, but it is not yet executable.
3. **Assembly**: The compiler then passes the object code to an assembler, which converts the object code into assembly code.
4. **Linking**: The linker then combines assembly code with any library functions that are required by the program and resolves any references to external symbols/libraries. The linker produces an executable file to run on the target platform.
5. **Execution**: Finally, the compiler produces and executable file that runs on the computer system.


# Compile and run the examples

The following will compile the code:

```sh
cd 01-hello-world
g++ 00_hello_world.cpp -o hello
```

Finally, we can execute the binary as:

```sh
./hello
```

