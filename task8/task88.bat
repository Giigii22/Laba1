cd C:\Users\Sergey\source\repos1\task8
gcc -c task7_func.c
gcc -c task7_main.c
ar r task8_lib.lib task7_func.o
gcc -o task8.exe task7_main.c task8_lib.lib
task8.exe