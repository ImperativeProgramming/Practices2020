# Pointers
![Pointing](https://media.giphy.com/media/5w4QZx27jDM8U/giphy.gif)

## Quizz Time!
yaaay

## Todays class

Based on [GfG](https://www.geeksforgeeks.org/pointers-c-examples/) practices

Pointers are, simply, address of variables in memory.

![Pointer](https://www.geeksforgeeks.org/wp-content/uploads/How-Pointer-Works-In-C.png)

We have two operators to remember

1 - The ampersand operator (**&**), which will give us the exact memory address of a certain variable. If you use a printf, you can print the memory address using the %p.

      printf("%p", &myVar);  

2 - The unary operator represented by an asterisk (**\***).

For example, if we would like to implement an integer pointer called myVar

      int * myVar;


Let's now check this example with both the implementations:

      // C program to demonstrate use of * for pointers in C
      #include <stdio.h>

      int main()
      {
          // A normal integer variable
          int Var = 10;

          // A pointer variable that holds address of var.
          int *ptr = &Var;

          // This line prints value at address stored in ptr.
          // Value stored is value of variable "var"
          printf("Value of Var = %d\n", *ptr);

          // The output of this line may be different in different
          // runs even on same machine.
          printf("Address of Var = %p\n", ptr);

          // We can also use ptr as lvalue (Left hand
          // side of assignment)
          *ptr = 20; // Value at address is now 20

          // This prints 20
          printf("After doing *ptr = 20, *ptr is %d\n", *ptr);

          return 0;
      }
**

![](https://media.giphy.com/media/QsfwW8RbsZfCKhbaZX/giphy.gif)

Let's see graphically what happened:

![](https://media.geeksforgeeks.org/wp-content/uploads/pointers-in-c.png)


### Task 1
1 - Create a swap function that takes two char pointers as parameter and swap their values;

    char name[] =  "George";
    char secondName[] = "Fillip";

    swap(&name, &secondName);
    //name = Fillip
    //secondName = George

2 - Create a **revert** function that takes two arrays of char and reverts its order;

    revert(&name, &secondName);
    // name = pilliF
    // secondName = egroeG

3 - Create a function that takes two 3X3 matrices and prints out the [multiplication](https://en.wikipedia.org/wiki/Matrix_multiplication) of the two matrices.

    int m1[3][3];
    int m2[3][3];

    m1[0][0] = 1;
    m2[0][1] = 1;
    // [...]
    multiplyMatrix(&m1, &m2);

You choose how it will print out, e.g.:

    N N N
    N N N
    N N N    





## String Operators

### strcmp ([Source](https://www.geeksforgeeks.org/sorting-strings-using-bubble-sort-2/))

    int strcmp(const char \*str1, const char \*str2)

This function return values that are as follows −

* if Return value < 0 then it indicates str1 is less than str2.

* if Return value > 0 then it indicates str2 is less than str1.

- if Return value = 0 then it indicates str1 is equal to str2.

### strcpy ([Source](https://www.tutorialspoint.com/c_standard_library/c_function_strcpy.htm))

    int strcmp(const char \*str1, const char \*str2)

This function copies the value from str to str2

### strcat
    char *strcat(char *dest, const char *src)

**
This function concatenates two strings, including the first one at the end of the second pointer. It assumes the second space has enough space to the operation;

### strdup

      char *strdup(const char *dest)

**
This function allocate a space in memory dynamically, and returns the memory address where it stored the given string.

    // C program to demonstrate strdup()
    #include<stdio.h>
    #include<string.h>

    int main()
    {

        char source[] = "GeeksForGeeks";

        // Yeah, you can do that if you initialize at the
        // same time of the declaration

        // A copy of source is created dynamically
        // and pointer to copy is returned.
        char* target = strdup(source);  

        printf("%s", target);
        return 0;
    }

## Task 2
**On the same file as the previous task**

Create your own version of the functions strcpy and strcat i.e. without using the functions themselves, create your own version.

## Homework
(This homework will be continued weekly)

1 - Create a **struct Person** with name, *yearOfBirth* and *familyName*

2 - Create an Array to store these users

3 - Create a function that prints the information from a struct Person
