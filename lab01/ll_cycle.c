#include <stddef.h>
#include "ll_cycle.h"

int ll_has_cycle(node *head) {
    node *tortoies, *hare;
    tortoies = hare = head;
    while (hare && hare->next) {
        hare = hare->next->next;
        tortoies = tortoies->next;
        if (hare == tortoies) 
            return 1;
    }
    return 0;
}
