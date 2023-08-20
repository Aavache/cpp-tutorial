# How to run multiple files

g++ will create an object file for each of the modules, then they will be linked!, in order to include the two new modules, your command should look like this:

```sh
g++ main.cpp calculator.cpp # Compile and link
./a.out # Execute
```