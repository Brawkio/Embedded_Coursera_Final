
#ifndef __DATA_H__
#define __DATA_H__

/**
 * @brief Converts data from standard integer to an ASCII string
 *
 * Takes a signed integer and converts it into a string with a base, 
 * it puts a null terminator '\0' at the end of the string and returns a uint8_t
 * size of the string, also considering the null terminator.
 *
 * @param data Integer number to be converted
 * @param ptr pointer pointing to the memory location where the string will be stored
 * @param base base of the convertion (2 to 16)
 *
 * @return uint8_t.
 */
uint8_t my_itoa(int32_t data, uint8_t * ptr, uint32_t base);

/**
 * @brief converts an ASCII string to a standard integer data
 *
 * Takes a pointer that contains a string and converts it into a signed integer based on
 * the number of digits in the sstring and a conversion base (2 to 16). 
 *
 * @param ptr pointer pointing to the string to be converted
 * @param digits number of digits of the number in the string to be converted
 * @param base base of the convertion (2 to 16)
 *
 * @return uint8_t.
 */
int32_t my_atoi(uint8_t * ptr, uint8_t digits, uint32_t base);


#endif /* __DATA_H__ */
