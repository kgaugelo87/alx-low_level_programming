#ifndef _MAIN_H_
#define _MAIN_H_

int _putchar(char c);
int get_bit(unsigned long int n, unsigned int index);
void print_binary(unsigned long int n);

/**
 * 3. 11
 */
int set_bit(unsigned long int *n, unsigned int index);

/**
 * 0. 0
 */
unsigned int binary_to_uint(const char *b);

/**
 * 4. 100
 */
int clear_bit(unsigned long int *n, unsigned int index);

/**
 * 6. Endianness
 */
int get_endianness(void);

/**
 * 5. 101
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m);

#endif
