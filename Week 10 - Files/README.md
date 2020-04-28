# C Files
*This class is based on  [GeeksForGeeks Tutorials](https://www.geeksforgeeks.org/basics-file-handling-c/)*

So far all of our work was started and finished with no changes in our file system, that's not how software usually look like, we need to know how to save and read from the filesystem if we want to deal with serious applications.

For performing that action, there 4 needed actions, **open the file** which means we will look for it and open it, if it doesn't exist we need to create and then open, **getting  information** from the file, reading from it, and/or **writing information** to the file, and, finally, **close** the file, so that other applications can have access to it.

These operations are managed by the functions shown in the table bellow.

## File Functions
![](https://media.geeksforgeeks.org/wp-content/uploads/File-functions.jpg)

Notice that opening files requests us to define "opening modes", here is where we will define how we would like to open our file and for which purposes. We also define where our file will be pointing when we start writing or reading from it. 

## Opening modes
* **“r”** READING – Searches file. If the file is opened successfully fopen( ) loads it into memory and sets up a pointer which points to the first character in it. If the file cannot be opened fopen( ) returns NULL.
* **“w”** WRITING – Searches file. If the file exists, its contents are overwritten. If the file doesn’t exist, a new file is created. Returns NULL, if unable to open file.
* **“a”** APPEND – Searches file. If the file is opened successfully fopen( ) loads it into memory and sets up a pointer that points to the last character in it. If the file doesn’t exist, a new file is created. Returns NULL, if unable to open file.
* **“r+”** READ AND WRITE– Searches file. If is opened successfully fopen( ) loads it into memory and sets up a pointer which points to the first character in it. Returns NULL, if unable to open the file.
* **“w+”** WRITE AND READ– Searches file. If the file exists, its contents are overwritten. If the file doesn’t exist a new file is created. Returns NULL, if unable to open file.
* **“a+”** READING AND APPENDING– Searches file. If the file is opened successfully fopen( ) loads it into memory and sets up a pointer which points to the last character in it. If the file doesn’t exist, a new file is created. Returns NULL, if unable to open file.


## Atoi (converts numbers that are stored as Strings into Int)

*atof* is the brother that does the same with floats

    #include <stdlib.h>
    #include <stdio.h>

    int main(void)
    {
        int i;
        char *s;

        s = " -9885";
        i = atoi(s);     /* i = -9885 */

        printf("i = %d\n",i);
    }

# Homework

* Create a program (using C duh) that prints out in a file, the first 20 numbers of the Fibonacci Series
* Create a second software that reads from a file integer numbers (line by line) and prints on the screen it's successor (e.g. 5 becomes 6, 10 becomes 11 and so on)
