# mini Java compiler 

This projects contain a Java compiler built with C language, as well as an application for text editing and compiling.

### Run the application
```
python .\main.py
```


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





