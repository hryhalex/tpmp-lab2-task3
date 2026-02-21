#include <stdio.h>
#include <string.h>
#include "note.h"

void sortNotes(struct NOTE2* block, int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (strncmp(block[j].TELE, block[j + 1].TELE, 3) > 0) {
                struct NOTE2 temp = block[j];
                block[j] = block[j + 1];
                block[j + 1] = temp;
            }
        }
    }
}

void printNote(struct NOTE2 note) {
    printf("Имя: %s | Тел: %s | Дата: %02d.%02d.%d\n", 
           note.Name, note.TELE, note.DATE[2], note.DATE[1], note.DATE[0]);
}
