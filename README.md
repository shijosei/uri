# uri
- Translates %xx (xx = two hex digits) to the character with the appropriate ASCII code. Translates '+' into space. Leaves all other characters unchanged.

## What is fuzz.sh?
- It is a shell executables file that fuzzes the given c++ code.

## What is fsanitize.sh?
- It is a shell executables file for address sanitizer.

## Commands  and how to use
- If you are using a vscode, first you need to open the project.
- If you already didnot install AFL, then go check [the link](https://github.com/AFLplusplus/AFLplusplus).
- After you start your code on the terminal, then you need to attach your code to a container.
- Then on the container from **aflplusplus** open **src**. Then you need to clone the given code with
```
git clone https://github.com/shijosei/uri.git
```
- Now you can start to fuzz with
```
./fuzz.sh
```
- If it says *permission denied* then use
```
gchmod +x fuzz.sh
```
- For fsanitize.sh you can do the same things.
