#ifndef KERNEL_H
#define KERNEL_H

void clearCommand(char* prompt);
void endCommand();
void hexCommand(int hex);
void threadCommand();
void performUserCommand(char* input);

#endif