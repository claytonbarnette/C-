# HelloWorld.cpp

This is a classic "**Hello, World**" example used to learn the various parts of a C++ program.

The main parts of this program to learn are the following:

- `#include` statement at the top of the file, used to import the iostream library from the STL.
- The `main` function, which is the entry point of a C and C++ Program. 
- The use of namespaces on line 8.
- The use of `std:cout` to output text to the screen.
- Use of `endln` in screen output.
- Use of the Extraction Operator `<<` on line 12.
- The `return` value, which is `0` for this program.

This program simply prints the words to the screen. 
```
Hello, World
``` 

To run this program type the following:
``` bash 
./HelloWorld.exe
```

If you get an error, simply rename or delete `HelloWorld.exe` then recompile `HelloWorld.cpp` on your platform. This program was compiled on a Ubuntu Desktop with: `
```
clang version 9.0.0-2 (tags/RELEASE_900/final)
Target: x86_64-pc-linux-gnu
Thread model: posix
InstalledDir: /usr/bin
```

# ReCompiling
To compile this program, run the following command:
```
clang++ HelloWorld.cpp -o HelloWorld.exe
```


This will output `HelloWorld.exe` into the same directory as the source file `HelloWorld.cpp`.

**Note:** I was running `Ubuntu 19.x` and installed: `llvm (1:9.0-49~exp1)`.
