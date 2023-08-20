# When the project grows

As you could see in the `headers` sections, adding as an argument of the compiler command for every `.cpp` file becomes impractical for large projects. There is where building automation tools comes along. Here I have a very simple example with `CMake` however there are others such as `Make` or even `Visual Studio`. 

# How can I run the CMake examples?
First, visit [CMake Official](https://cmake.org/install/) to learn how to install CMake for your operative system.

Whenever your CMake is ready in your commandline, create a directory to build your project, e.g., build/.

```sh
cd 14-cmake
mkdir build
```

Navigate to the `build/` directory.
```sh
cd build/
```

Generate build files.

```sh
cmake ..
```

Compile the project.

```sh
make
```

Then execute your applications with name specified in `CMakeLists.txt`

```sh
./MyApp
```