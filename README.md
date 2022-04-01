# mini Java compiler 

### Execution

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





