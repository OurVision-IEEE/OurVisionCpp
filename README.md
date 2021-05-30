# OurVisionCpp

Do these things:

```bash
git clone https://tezz-io/OurVisionCpp.git
git branch -M {Your USN}
git push -u origin {Your USN}
```

Add all *.cpp files in OurVision/src/ and all *.hpp files in OurVision/include/

Please dont compile anything and don't do any changes to master branch

Cross compilation command (for deployment, ignore this):

```bash
arm-linux-gnueabihf-g++ -Wall src/*.cpp -L include\*.hpp -o app `pkg-config opencv --cflags --libs`
```

Cheat sheet for cross compiling:

1. Compiler: use g++ for i386 or x86_64 systems, use properly configured arm-linux-gnueabihf-g++ 
2. Wall: use the flag -Wall when compiling more than one file
3. Source files to compile: list all the cpp files or use regex like src/\*.cpp
4. Object file to generate: This is the target you want. By default it is a.out. You can use the flag -o object_file_name to specify the object file. You may or may not give an extension like .o to the object file.
5. Pkg-config cflags and libs: use \`pkg-config library_name --cflags --libs\` to configure all the linker stuff.


Licence: No license for you, this is not open source. Only because github private repos are a headache I made this public.
