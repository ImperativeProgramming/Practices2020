# Imperative programming - practice tasks

## Command line

1. Print the current working directory (`pwd`).

2. Print the files and directories in this directory.

> Check the detailed data of the files and directories. When and who created
> them (`ls -l`)?

3. What further flags does `ls` command have (`man ls`)? The `man` is the
abbreviation of _manual_.

4. Create a directory (`mkdir`).

5. Enter the directory (`cd`). Check if the current directory really changed.
Step back to the parent directory (`cd ..`) and then back again in the created
directory.

6. Create a text file and print its content (`cat`). `cat` is the abbreviation
of _concatenate_. How can multiple files printed concatenated to each other?

7. Print how many lines, words and characters are there in the file (`wc`).
Also print only the line numbers. If you don't know which flag does this then
look it up in the _manual_.

8. Create a program which prints `Hello world` to the screen. Redirect the
output of this program to `wc` which prints the number of lines, words and
characters of your output.

## Standard IO

1. Create a program which prints the sum of two integers.

2. Create a program in which you divide two numbers. Print the result.

> - Use `%f` formatting character. Make sure that the result is printed with
> two decimal digits.
> - Try out what happens if you're using a wrong formatting character. For
> example if you try printing a real number or a character with `%d`. Or if you
> try an integer or a string with `%f`.
> - Use `-W`, `-Wall`, `-Wextra` and `-pedantic` flags during the compilation.
> Is it a compilation error of you're using a wrong formatting character?

3. Create a program where you compute the area and the perimeter of a square
and a circle. Get the radius and the length from the standard input.

> Use `scanf("%d", &a)` function. Use `&` operator which returns the address of
a variable. You may use 3.1415 as the value of π.

4. Write a program which greets your name. Store your name in a variable.

> Use the type `char[]` and `%s` formatting character. Pay attention on the
> syntax of the array: `char name[10]`.

5. Write a program which asks your name from the standard input and greets you.

> First provide the input from the keyboard. Then run the program so the
> standard input arrives from the output of `cat` command that prints the
> content of a file.

6. Write a program where you allocate an array of 10 characters for your name
but you enter more than 10 characters.

> Check what happens.

7. Write a program where you make sure that only the correct number of
characters arrive from the standard input which fits in your array.

> Provide the input size in the formatting character.

8. Create a program which tranforms the number of days to years, weeks and
days. For example 375 days = 1 year 1 week 3 days. Always use the remainder of
the greater unit.

9. Create a Celsius-Fahrenheit converter.

## Simple algorithms

1. Create a program which computes the length of the Collazt-sequence starting
from a given integer.

> The first element of a Collatz-sequence is a positive integer. The further
> elements of the sequence are defined recursively: in case an element is odd
> then the next one is 3 times this element plus 1. Otherwise if the element is
> even then the next one is its half. For example the elements of a
> Collatz-sequence starting from 3 are: 3, 10, 5, 16, 8, 4, 2, 1. According to
> the Collatz-conjecture the last element of such a sequence is always 1. Thus
> the length of a Collatz-sequence starting from 3 is 8.

2. Determine whether two numbers are amicable.

> _A_ and _B_ are [amicable](https://en.wikipedia.org/wiki/Amicable_numbers) if
> the of divisors of _A_ (which are less than _A_) equals _B_ and the sum
> ofdivisors of _B_ (which are less than _B_) equals _A_. For example 284 and
> 220 are amicable because the sum of divisors of 284 (that are less than 284)
> is 1 + 2 + 4 + 71 + 142 = 220 and the sum of divisors of 220 (that are less
> than 220) is 1 + 2 + 4 + 5 + 10 + 11 + 20 + 22 + 44 + 55 + 110 = 284.

3. Create a program which reverts an integer. For example: `12345 -> 54321`.
Use only arithmetic operations.

4. Create a program which checks whether an integer is palindrome. The input of
the program shouldn't be a string but an integer. Use only arithmetic
operations in the solution.

5. Create a program which prints a half pyramid using `#` characters. The
height should be given as a command line argument.
```
#
##
###
####
#####
```

6. Create a program which prints a full pyramid using `#` characters. First
read the number of lines so you can align it to the center.
    ```
        #
       ###
      #####
     #######
    #########
    ```

7. Create a program which prints a pine tree. Ask for the height of the tree
from the user. The body of the tree should always be two lines. Use loops and
branches.

8. Create a program which prints a chess board. Use loops and divisibility by
two.
  ```
  +----------------+
  |[]  []  []  []  |
  |  []  []  []  []|
  |[]  []  []  []  |
  |  []  []  []  []|
  |[]  []  []  []  |
  |  []  []  []  []|
  |[]  []  []  []  |
  |  []  []  []  []|
  +----------------+
  ```

9. Create a function named `gcd()` which computes the greatest common divisor
of two integers using Euclidean algorithm.

10. Create a program which determines whether an integer represents a leap
year. Every year is leap year which is divisible by four except for those which
are also divisible by 100. However, twose which are divisible by 400 are also
leap years.
