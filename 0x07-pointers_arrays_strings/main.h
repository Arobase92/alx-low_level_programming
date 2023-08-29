#ifndef HEADER_FILE
#define HEADER_FILE

void print_chessboard(char (*a)[8]);
char *_strstr(char *haystack, char *needle);
char *_strpbrk(char *s, char *accept);
unsigned int _strspn(char *s, char *accept);
char *_strchr(char *s, char c);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_memset(char *s, char b, unsigned int n);
char *rot13(char *);
char *leet(char *);
char *cap_string(char *);
char *string_toupper(char *);
void reverse_array(int *a, int n);
int _strcmp(char *s1, char *s2);
char *_strncpy(char *dest, char *src, int n);
char *_strncat(char *dest, char *src, int n);
char *_strcat(char *dest, char *src);
char *_strcpy(char *dest, char *src);
void puts_half(char *str);
void print_array(int *a, int n);
void puts2(char *str);
void rev_string(char *s);
void print_rev(char *s);
void _puts(char *str);
int _strlen(char *s);
void swap_int(int *a, int *b);
void reset_to_98(int *n);
void slash(void);
void space(int n);
void print_diagonal(int n);
void print_line(int n);
void more_numbers(void);
void print_most_numbers(void);
void print_numbers(void);
int mul(int a, int b);
int _isdigit(int c);
int _isupper(int c);
int print_last_digit(int);
int _abs(int);
int print_sign(int n);
int _isalpha(int c);
int _islower(int c);
void print_alphabet_x10(void);
void print_alphabet(void);
int _putchar(char c);

#endif
