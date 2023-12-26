#ifndef _LISTS_H
#define _LISTS_H
/**
 * struct dlistint_s - doubly linked list
 * @n: integer
 * @prev: points to the previous node
 * @next: points to the next node
 *
 * Description: doubly linked list node structure
 * 
 */
typedef struct dlistint_s
{
    int n;
    struct dlistint_s *prev;
    struct dlistint_s *next;
} dlistint_t;
size_t print_dlistint(const dlistint_t *h);
const dlistint_t *pointer;
size_t dlistint_len(const dlistint_t *h);
const dlistint_t *pointer1;
dlistint_t *add_dnodeint(dlistint_t **head, const int n);
dlistint_t *newnode;
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);
dlistint_t *newnode1;
dlistint_t *pointer3;
void free_dlistint(dlistint_t *head);
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);
dlistint_t *indicator;
int sum_dlistint(dlistint_t *head);
dlistint_t *point;
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n);
dlistint_t *addnode;
dlistint_t *arrow;
dlistint_t *arrow2;
unsigned int counter;
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index);
dlistint_t *pointer_1;
dlistint_t *pointer_2;
dlistint_t *pointer_3;
unsigned int count; 
#endif
