# HIDE IN CLEAR TEXT

A microproject to create a simple encrypting application. Developed using C language.

### Install GCC

For Ubuntu:

```bash
sudo apt install gcc -y
```

## Compile using gcc

```bash
gcc -g -Wall -Wextra -o hict.o hict.c
```

## Execute the object file

1. Simple execute

```bash
./hict.out cleartext.txt secrettext.txt > transformer.txt
./hict.out cleartext.txt transformer.txt
```

## For Windows:

**NOTE** Clang will throw error for fopen is deprecated

### Install clang

1. Install Microsoft Visual Studio
2. Add to your windows path:
3. Win+ R > sysdm.cpl
4. Advanced > Environment Variables
5. System variables > Path > Edit
6. Add (C:\Program Files\Microsoft Visual Studio\18\<Version>\VC\Tools\Llvm\bin
   )

### Compile using gcc

```bash
clang -c hict.c -o hict.o
clang hict.o -o hict_x64.exe
```

### Execute the object file

1. Simple execute

```bash
hict_x64.exe cleartext.txt secrettext.txt > transformer.txt
hict_x64.exe cleartext.txt transformer.txt
```

## Creating tag

```bash
# 1. Check existing tags
git tag
# 2. Create a valid tag
git tag -a v1.0.0 -m "Release version 1.0.0"
# or lightweight tag
git tag v1.0.0
# push tag to remote
git push origin v1.0.0
```
