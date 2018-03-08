#define CLAVIER_H

void gestionClavier(unsigned char touche, int x, int y);
void glutSpecialUpFunc(void (*func)(unsigned char touche, int x, int y));
