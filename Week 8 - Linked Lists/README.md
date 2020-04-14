# Joining everything
Todays class we will dedicate on joining everything we have seen, pointers, structures and everything else to make a datastructure called "list".

## Recap
- Last class recap

## Quiz time
- Get ready on your Canvas

## Lists

[source](https://www.geeksforgeeks.org/data-structures/linked-list/)

A linked list is a linear data structure, in which the elements are not stored at contiguous memory locations. The elements in a linked list are linked using pointers as shown in the below image:

![](https://media.geeksforgeeks.org/wp-content/cdn-uploads/gq/2013/03/Linkedlist.png)

In simple words, a linked list consists of nodes where each node contains a data field and a reference(link) to the next node in the list.

Interested in more? Read e.g. about [linked lists vs arrays](https://www.geeksforgeeks.org/linked-list-vs-array/).

### Linked Lists in C

There are two commands we need to learn before moving on, *malloc* and *strdup*.

#### Malloc

    void* malloc(size_t size);

This function which returns a pointer, allocate memory dynamically (i.e. when the software is already running), which allows us to have a way more flexible developping.

This means that from now on, we don't really need to know how many times we will instantiate something. This comes handy e.g. when using lists.

#### strdup

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

Let's dive in today's example, we would like to implement a simple list of points (we saw the points struct before right?).

### Homework
 - Based on the previous homework, implement the Person struct as a list;
 - Create a function that adds new members to the list;
 - Create a function that prints out all the elements of the list.
