/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file stats.h 
 * @brief This header file contains the declarations of the functions used in
 * stats.c
 *
 * 7 statstics computing and showing functions are declared in this file
 *
 * @author <Braulio Peraza>
 * @date <06/10/2020> (dd/mm/yyyy)
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* Declarations and Function Comments */ 


/*
 * @brief Prints the statistics of an array.
 *
 * Prints the value of the maximum, minimum, the mean and the median of an array of data using all other functions.
 *
 * @param unsigned char *array Pointer that takes the direction of the data array and thus, its values.
 * @param unsigned int n_elements Number of the data array's elements.
 *
 * @return It doesn't return any value, just prints the statistics of the array
 */
void print_statistics(unsigned char *array, unsigned int n_elements);

/*
 * @brief Prints the data of an array to the screen.
 *
 * Using the printf function, it displays the values contained in an array of data in a nice formatted way.
 *
 * @param unsigned char *array Pointer that takes the direction of the data array and thus, its values.
 * @param unsigned int n_elements Number of the data array's elements.
 *
 * @return It doesn't return any value, just prints the values of the array
 */
void print_array(unsigned char *array, unsigned int n_elements);

/*
 * @brief Computes the median value of an array
 *
 * From a sorted array of data, the median is obtained taking into account the two possible cases, an even or an odd number of elements and
 * its rounded DOWN to the nearest integer.
 *
 * @param unsigned char *array Pointer that takes the direction of the data array and thus, its values.
 * @param unsigned int n_elements Number of the data array's elements.
 *
 * @return Returns the median value of the array.
 */
unsigned char find_median(unsigned char *array, unsigned int n_elements);

/*
 * @brief Computes the mean value of an array
 *
 * From an array of data, the mean value is calculated adding all values of the array and dividing it by the number of elements and its 
 * rounded DOWN to the nearest integer.
 *
 * @param unsigned char *array Pointer that takes the direction of the data array and thus, its values.
 * @param unsigned int n_elements Number of the data array's elements.
 *
 * @return Returns the mean value of an array
 */
unsigned char find_mean(unsigned char *array, unsigned int n_elements);

/*
 * @brief Selects the maximum value of an array of data
 *
 * From any (sorted or not) array of data, stores the maximum value in an unsigned char variable and returns it.
 *
 * @param unsigned char *array Pointer that takes the direction of the data array and thus, its values.
 * @param unsigned int n_elements Number of the data array's elements.
 *
 * @return Returns the maximum value of an array
 */
unsigned char find_maximum(unsigned char *array, unsigned int n_elements);

/*
 * @brief Selects the minimum value of an array of data
 *
 * From any (sorted or not) array of data, stores the minimum value in an unsigned char variable and returns it.
 *
 * @param unsigned char *array Pointer that takes the direction of the data array and thus, its values.
 * @param unsigned int n_elements Number of the data array's elements.
 *
 * @return Returns the minimum value of an array
 */
unsigned char find_minimum(unsigned char *array, unsigned int n_elements);

/*
 * @brief Sorts the array from largest to smallest
 *
 * The array of n elements is sorted by putting its largest value in the zeroth element while the smallest value is put in the last position
 * of the array, or the (n-1) position,The data is sorted using the beble algorithm.
 *
 * @param unsigned char *array Pointer that takes the direction of the data array and thus, its values.
 * @param unsigned int n_elements Number of the data array's elements.
 *
 * @return A pointer array sorted to from the biggest value to the smallest.
 */
unsigned char *sort_array(unsigned char *array, unsigned int n_elements);


#endif /* __STATS_H__ */
