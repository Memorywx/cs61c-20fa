#include <stddef.h>
#include "ll_cycle.h"

int ll_has_cycle(node *head) {
    node *tortoies = head, *hare = head;
    do {
        if (hare == NULL || hare->next == NULL || hare->next->next == NULL)
            return 0;
        hare = hare->next->next;
        tortoies = tortoies->next;
        if (hare == tortoies) 
            return 1;
    } while (hare != tortoies);
    return 0;
}
