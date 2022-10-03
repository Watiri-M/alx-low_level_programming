#ifndef MAIN_H_

#define MAIN_H_

char **strtow(char *);

char *argstostr(int, char **);

void free_grid(int **grid, int row);

int **alloc_grid(int col, int row);

char *str_concat(char *s1, char *s2);

char *_strdup(char *str);

char *create_array(unsigned int size, char c);

#endif /* MAIN_H_ */

