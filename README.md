# Лабораторная работа №1
**Вариант 9**

Задание:
> Требуется реализовать динамическую библиотеку,
обладающую заданной функциональностью, а также отдельное
приложение с пользовательским интерфейсом, использующее эту
динамическую библиотеку и позволяющее пользователю
воспользоваться её функциональностью

Функциональность динамической библиотеки:
> Решение квадратного уравнения с заданными целочисленными коэффициентами

Windows compiler:

1. Установить [Visual Studio Code](https://code.visualstudio.com/download)
2. Установить расширение [C/C++ extension for VS Code](https://marketplace.visualstudio.com/items?itemName=ms-vscode.cpptools)
3. Установить [MSYS2](https://github.com/msys2/msys2-installer/releases/download/2021-06-04/msys2-x86_64-20210604.exe)
4. Установить mingw-w64 GCC по инстркукции с [сайта](https://www.msys2.org/) 
5. Добавить папку **bin** Mingw-w64 в **PATH** в переменные среды


run:
```
g++ -fpic -shared lib/SquareFuncLib.cpp -o SquareFuncLib.dll
g++ main.cpp SquareFuncLib.dll
```
