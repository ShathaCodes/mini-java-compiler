# mini Java compiler 

This projects contain a Java compiler built with C language, as well as a text editor.

### Run the application
```
python .\main.py
```
![execution](https://raw.githubusercontent.com/ShathaCodes/mini-java-compiler/main/execution.PNG)

### Execute the compiler

```
flex miniJava.lex
```

```
bison -d miniJava.y
```

```
gcc -o miniJava miniJava.tab.c lex.yy.c
```

```
miniJava.exe < example.txt
```





