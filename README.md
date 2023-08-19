# C++ Tutorial   💻 💾 
Learn C++ in one evening with this brief yet straight to the point tutorial.

<div style="text-align: center; width: 200px; height: 200px; margin:auto;">
<img src="https://upload.wikimedia.org/wikipedia/commons/1/18/ISO_C%2B%2B_Logo.svg">
</div>

# About this repository

We divided the repository is sections starting from `00_hello_world`. Each of the sections will teach you gradually the syntax of C++, from zero to (almost) hero.

# Compile and run the examples

Choose and install your favorite C++ compiler (I will use g++). If you wish to learn how to compile your code visit this links if you are a [Window](https://stackoverflow.com/questions/11365850/run-c-in-command-prompt-windows), [Linux](https://www.cyberciti.biz/faq/howto-compile-and-run-c-cplusplus-code-in-linux/) or [MacOS](https://siytek.com/how-to-compile-cpp-on-a-mac/) user. Then compile and execute the output binaries, here's what I do to run the first `hello world` example:

```sh
cd 01-hello-world
g++ 00_hello_world.cpp -o hello
```

Finally, we can execute the binary as:

```sh
./hello
```

# How compilation works

According to this helpful [resource](https://www.mycplus.com/tutorials/cplusplus-programming-tutorials/what-are-the-best-c-compilers-to-use-in-2023/#google_vignette), the compiler goes through the following 5 steps:

1. **Pre-processing**: First, the pre-processor reads the source code and performs macro expansions, inclusion of header files, and other operations as specified by pre-processor directives (#include, #define, #ifndef, etc.).
2. **Compilation**: Second step performs the actual translation of the source code into object code. The object code is a machine-readable representation of the source code, but it is not yet executable.
3. **Assembly**: The compiler then passes the object code to an assembler, which converts the object code into assembly code.
4. **Linking**: The linker then combines assembly code with any library functions that are required by the program and resolves any references to external symbols/libraries. The linker produces an executable file to run on the target platform.
5. **Execution**: Finally, the compiler produces and executable file that runs on the computer system.

