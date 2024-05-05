#include <stddef.h>
#include "ll_cycle.h"

int ll_has_cycle(node *head) {
    // your code here
    if (head == NULL) {
        return 0;
    }
    node *tortoise = head;
    node *hare = head;
    while (hare != NULL) {
        hare = hare->next;
        if (hare != NULL) {
            hare = hare->next;
        } else {
            return 0;
        }
        tortoise = tortoise->next;
        if (tortoise == hare) {
            return 1;
        }
    }
    return 0;
}
