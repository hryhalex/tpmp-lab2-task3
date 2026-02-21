#ifndef NOTE_H
#define NOTE_H

struct NOTE2 {
    char Name[100];
    char TELE[20];
    int DATE[3]; 
};

void sortNotes(struct NOTE2* block, int n);
void printNote(struct NOTE2 note);

#endif
