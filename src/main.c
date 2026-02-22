//Updated by Hryhoryeva
#include <stdio.h>
#include <string.h>
#include "note.h"

int main() {
    struct NOTE2 BLOCK2[7];
    char searchSurname[100];
    int found = 0;

    printf("--- Ввод данных для 7 человек ---\n");
    for (int i = 0; i < 7; i++) {
        printf("Человек %d (Фамилия И.О.): ", i + 1);
        scanf(" %[^\n]s", BLOCK2[i].Name);
        printf("Телефон: ");
        scanf("%s", BLOCK2[i].TELE);
        printf("Дата рождения (Г М Д через пробел): ");
        scanf("%d %d %d", &BLOCK2[i].DATE[0], &BLOCK2[i].DATE[1], &BLOCK2[i].DATE[2]);
    }

    sortNotes(BLOCK2, 7);

    printf("\nВведите фамилию для поиска: ");
    scanf("%s", searchSurname);

    for (int i = 0; i < 7; i++) {
        if (strstr(BLOCK2[i].Name, searchSurname) != NULL) {
            printNote(BLOCK2[i]);
            found = 1;
        }
    }

    if (!found) printf("Запись не найдена.\n");

    return 0;
}
