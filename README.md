DigitalClock in C
A simple Digital Clock program written in C that displays the current time and date in various formats. The program continuously updates the time and date every second and clears the screen to provide a dynamic display.

Features:
1. Displays time in various formats:
    12-hour format
    24-hour format (default)
    Expanded format
2. Displays the current date in the format: Day, Month, Year.
3. Cross-platform support:
    Windows: Clears the console using cls.
    Linux/MacOS: Clears the console using clear.

Libarary Used:
- #include<stdio.h>
- #include<stdlib.h>
- #include<time.h>
- #include<unistd.h>

Refrences:
https://en.cppreference.com/w/cpp/chrono/c/strftime

How to run:
1. Complie the program:
2.     gcc digitalClock.c -o digitalClock
3. Run the program:
4.     ./digitalClock
5. Choose the format you want to use.

Requirements:
1. C compiler
2. Operating system 

Code Explanation:
1. fillTime(char *buffer, int choice): Fills the buffer with the current time in the selected format.
2. fillDate(char *buffer): Fills the buffer with the current date in Day, Month, Year format.
3. choice(): Prompts the user to select a time format.
4. clearScreen(): Clears the console screen for dynamic display.
5. main(): Continuously displays the current time and date based on user choice.

Demo:

    --------------------Digital Clock-------------------------
    Choose the time format you want to see:
    1. 12-hour format
    2. 24-hour format (default)
    3. Expanded format

    Enter your choice: 1
    ----------------------------------------------------------

    Current Time: 02:30:45 PM
    Today is: 27, December, 2024

The screen updates every second with the latest time.

License:
This project is licensed under the MIT License. You are free to use, modify, and distribute the code.
