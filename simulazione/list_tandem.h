#ifndef __LIST_TANDEM_H__
#define __LIST_TANDEM_H__

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

// Struttura dati che rappresenta un nodo della lista di char
struct CharNode {
    char value;
    struct CharNode* next;
};

// 1. Verifica se due nodi contengono lo stesso carattere
bool compare_char(struct CharNode* node_1, struct CharNode* node_2);

// 2. Calcola la lunghezza della lista in input
int list_len(struct CharNode *head);

// 3. Verifica se la lista in input costituisce un tandem
bool is_tandem(struct CharNode *head);

// 4. Se la lista in input costituisce un tandem la trasforma in un palindromo
bool tandem_2_palindrome(struct CharNode *head, char palindrome[]);

#endif // __LIST_TANDEM_H__