#ifndef SORT_H
#define SORT_H

/*HEADER FILES*/
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/*DATA STRUCTURES*/

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

/*FUNCTION PROTOTYPE*/
void print_list(const listint_t *list);
void print_array(const int *array, size_t size);
void bubble_sort(int *array, size_t size);
void myprint(const int *array, size_t size);
#endif /*end of the sort header file*/
