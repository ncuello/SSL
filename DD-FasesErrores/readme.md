OBJETIVO: Identificar las fases de traducción y errores.

1. gcc hello2.c -E -P -o hello2.i
2. gcc hello3.c -E -P -o hello3.i
3. gcc hello3.i -S
4. gcc hello4.c -E -P -o hello4.i
5. gcc hello4.i -S
6. gcc hello4.s -c
7. gcc hello4.o -o hello4.exe -std=c11
8. gcc hello5.c -E -P -o hello5.i
9. gcc hello5.i -S
10. gcc hello5.s -c
11. gcc hello5.o -o hello5.exe -std=c11
12. hello5 >> hello5.txt
13. gcc hello6.c -E -P -o hello6.i
14. gcc hello6.i -S
15. gcc hello6.s -c
16. gcc hello6.o -o hello6.exe -std=c11
17. hello6 >> hello6.txt
18. gcc hello7.c -E -P -o hello7.i
19. gcc hello7.i -S
20. gcc hello7.s -c
21. gcc hello7.o -o hello6.exe -std=c11


1. Preprocesa hello2.c, en éste caso, es el programa invocado por el compilador y procesa directivas, se procesa el include<stdio.h> y el main(). La salida es hello2.i.
2. Preprocesa hello3.c, en éste caso, es el programa invocado por el compilador y procesa directivas, se procesa el printf() y el main(). La salida es hello2.i.
3. Se compila hello3.i. Error por consola. La función prontf() no se reconoce. La salida es hello3.s.
4. Preprocesa hello4.c, en éste caso, es el programa invocado por el compilador y procesa directivas, se procesa el printf() y el main(). La salida es hello4.i.
5. Se compila hello4.i. Error por consola. A la función main() le falta cerrar con "}". La salida es hello4.s.
6. Se ensambla hello4.s en hello4.o. 
7. Se vincula hello4.o con la biblioteca estándar y se genera el ejecutable. Error por consola por no cerrar main con "}".
8. Preprocesa hello5.c, en éste caso, es el programa invocado por el compilador y procesa directivas, se procesa el printf() y el main(). La salida es hello5.i.
9. Se compila hello5.i. Se genera el código ensamblador. La salida es hello5.s.
10. Se ensambla hello5.s en hello5.o.
11. Se vincula hello5.o con la biblioteca estándar y se genera el ejecutable hello5.exe.
12. Se genera el hello5.txt. La salida es :"La respuesta es 46732112".
13. Preprocesa hello6.c, en éste caso, es el programa invocado por el compilador y procesa directivas, se procesa el printf() y el main(). La salida es hello6.i.
14. Se compila hello6.i. Se genera el código ensamblador. La salida es hello6.s.
15. Se ensambla hello6.s en hello6.o.
16. Se vincula hello6.o con la biblioteca estándar y se genera el ejecutable hello6.exe.
17. Se genera el hello6.txt. La salida es :"La respuesta es 42".
18. Preprocesa hello7.c, en éste caso, es el programa invocado por el compilador y procesa directivas, se procesa el printf() y el main(). La salida es hello7.i.
19. Se compila hello7.i. Se genera el código ensamblador. La salida es hello7.s.
20. Se ensambla hello7.s en hello7.o.
21. Se vincula hello7.o con la biblioteca estándar. Error por consola! La función printf() no se reconoce.
