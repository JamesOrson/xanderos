#ifndef VIDEO_H
#define VIDEO_H

#define VIDEO_ADDRESS 0xb8000
#define MAX_ROWS 25
#define MAX_COLUMNS 80
#define WHITE_ON_BLACK 0x0f
#define RED_ON_WHITE 0xf4

/* Screen i/o ports */
#define SCREEN_CONTROL_PORT 0x3d4
#define SCREEN_DATA_PORT 0x3d5

/* Public kernel API */
void clearScreen();
void printk(char* message);
void printkAtPosition(char *message, int row, int column);

#endif