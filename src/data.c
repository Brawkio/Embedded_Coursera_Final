/**
 * @file data.c 
 * @brief Definitions of ASCII to integer are set in this heder file
 *
 * ITOA (integer to ASCII) and ATOI functions are defined
 *
 * @author <Braulio Peraza>
 * @date <03/11/2020> (dd/mm/yyyy)
 *
 */
#include <stdlib.h>
#include <stdint.h>
#include "platform.h"
#include "data.h"
#include "memory.h"


uint8_t my_itoa(int32_t data, uint8_t * ptr, uint32_t base){

    uint8_t i = 0; 
    uint8_t sign = 0;
  
    /* Handle 0 explicitely, otherwise empty string is printed for 0 */
    if (data == 0) 
    { 
        *(ptr+(i++)) = '0'; 
        *(ptr+i) = '\0'; 
        return (i); 
    } 
  
    // Negative numbers are handled
    if (data < 0) 
    { 
        sign = 1; 
        data = -data; 
    }
  
    // Process individual digits 
    while (data != 0) 
    { 
        int rem = data % base; 
        *(ptr+(i++)) = (rem > 9)? (rem-10) + 'a' : rem + '0'; //using ternary operator (condition ? value_if_true : value_if_false)
/*ptr[i++] is equal to rem-10+'a' if rem>9 otherwise is equal to rem+'0' in other words, 
if the remainant of the division is bigger than 9, the pointer will have*/
        data = data/base; 
    } 
  
    // If number is negative, append '-' 
    if (sign==1) {
        *(ptr+(i++)) = '-'; }
      
    // Reverse the string 
    my_reverse(ptr, i); 

    *(ptr+(i++)) = '\0'; // Append string terminator 

    return (i); 
}

int32_t my_atoi(uint8_t * ptr, uint8_t digits, uint32_t base){

// Initialize result
    int32_t res = 0;
 
    // Initialize sign as positive
    int8_t sign = 1;
 
    // Initialize index of first digit
    uint8_t i = 0;
 
    // If number is negative,
    // then update sign
    if (*ptr == '-') {
        sign = -1;
 
        // Also update index of first digit
        i++;
    }
 
    // Iterate through all digits
    // and update the result
    for (; i<(digits-1); i++)
        res = res * base + *(ptr+i) - '0';
 
    // Return result with sign
    return (sign * res);
}
