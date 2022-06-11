# Sorting Algorithms
### Description
A collection of sorting algorithms implemented in C to see the advantages and disadvantages of each one of them

with Time Compexity 

## Resources
### Read or watch:

- Sorting algorithm
- Big O notation
- Sorting algorithms animations
- 15 sorting algorithms in 6 minutes (WARNING: The following video can trigger seizure/epilepsy. It is not required for the project, as it is only a funny visualization of different sorting algorithms)

## Requirements
### General
- Allowed editors: vi, vim, emacs
- All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
- All your files should end with a new line
- A README.md file, at the root of the folder of the project, is mandatory
- Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
- You are not allowed to use global variables
- No more than 5 functions per file
- Unless specified otherwise, you are not allowed to use the standard library. Any use of functions like printf, puts, … is totally forbidden.
- In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to - your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples
- The prototypes of all your functions should be included in your header file called sort.h
- Don’t forget to push your header file
- All your header files should be include guarded
- A list/array does not need to be sorted if its size is less than 2.

## Usage 
`gcc 4.8.4 -Wall -Werror -Wextra -pedantic {File Name Based on the sort You want} print_array.c print_list.c -o sort` .  
You can then run it by invoking `./sort` in that same directory.  

## Data Structure and Functions
For this project you are given the following print_array, and print_list functions:
```
#include <stdlib.h>
#include <stdio.h>

/**
 * print_array - Prints an array of integers
 *
 * @array: The array to be printed
 * @size: Number of elements in @array
 */
void print_array(const int *array, size_t size)
{
    size_t i;

    i = 0;
    while (array && i < size)
    {
        if (i > 0)
            printf(", ");
        printf("%d", array[i]);
        ++i;
    }
    printf("\n");
}
```
```
#include <stdio.h>
#include "sort.h"

/**
 * print_list - Prints a list of integers
 *
 * @list: The list to be printed
 */
void print_list(const listint_t *list)
{
    int i;

    i = 0;
    while (list)
    {
        if (i > 0)
            printf(", ");
        printf("%d", list->n);
        ++i;
        list = list->next;
    }
    printf("\n");
}
```
Our files print_array.c and print_list.c (containing the print_array and print_list functions) will be compiled with your functions during the correction.
Please declare the prototype of the functions print_array and print_list in your sort.h header file
Please use the following data structure for doubly linked list:
```
/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
    const int n;
    struct listint_s *prev;
    struct listint_s *next;
} listint_t;
```
Please, note this format is used for Quiz and Task questions.

- O(1)
- O(n)
- O(n!)
- n square -> O(n^2)
- log(n) -> O(log(n))
- n * log(n) -> O(nlog(n))
- n + k -> O(n+k)
…
- Please use the “short” notation (don’t use constants). Example: O(nk) or O(wn) should be written O(n). If an answer is required within a file, all your answers files must have a newline at the end.

- Tests
Here is a quick tip to help you test your sorting algorithms with big sets of random integers: Random.org

## Bubble Sort
A slow sorting algorithm for the simplest data sets

| Case  | Performance |
| :---: | :---: |
| Worst case performance   | O(n^2)  |
| Best case performance  | O(n)  |
| Average case performance  | O(n^2)  |


## Selection Sort

Selection sort is noted for its simplicity, and it has performance advantages over more complicated algorithms in certain situations

| Case  | Performance |
| :---: | :---: |
| Worst case performance   | O(n^2)  |
| Best case performance  | O(n^2)  |
| Average case performance  | O(n^2)  |

## Quick sort

Quick Sort is a recursive sorting algorithm that is more effective than other O(nlogn) algorithms for large datasets that fit in memory, but is unstable. Quick Sort in general does not requiere extra space

| Case  | Performance |
| :---: | :---: |
| Worst case performance   | O(n^2)  |
| Best case performance  | O(n log n)  |
| Average case performance  | O(n log n)  |

## :couple: About us ##
This is the first group project in Holberton Paris School in the 15 mars 2020!!<br>
If you have a question or a comment, please contact us.<br>
Grégoire COUDRIN (4251@holbertonschool.com)<br>
Hiromi VARNIER (4336@holbertonschool.com)<br>
