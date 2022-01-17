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
 * @brief header file for stats.c
 *
 * stats.h is a header file for stats.c, a simple data analytics program which
 * provides basic statistics for a simple set of integers. stats.h defines the
 * available statistical operations
 *
 * @author Ella Igwe
 * @date 17-01-2022
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

  void print_statistics(char * data);
/**
 * @brief  Prints the statistics of a given data array including
 * 	  minimum, maximum, mean, and median
 *
 * <Add Extended Description Here>
 *
 * @param data  The data array to be printed
 *
 * @return Does not return anything
 */

  void print_array(char * data);
/**
 * @brief  Prints the contents of a given data array
 *
 * <Add Extended Description Here>
 *
 * @param data The data array to be printed
 *
 * @return Does not return anything
 */

  int find_len(char * data);
/**
 * @brief  Finds the length of a given data array
 *
 * <Add Extended Description Here>
 *
 * @param data The data array to be printed
 *
 * @return The length as an integer
 */

  int find median(char * data, int len);
/**
 * @brief  Finds the median value of a given data array
 *
 * <Add Extended Description Here>
 *
 * @param data  The data array to be analyzed
 * @param len   The length of the given data array
 *
 * @return The median value of the data array as an integer
 */

  int find_mean(char * data, int len);
/**
 * @brief  Finds the mean value of a given data array
 *
 * <Add Extended Description Here>
 *
 * @param data The data array to be analyzed
 * @param len  The length of the given data array
 *
 * @return The mean value of the data array as an integer
 */

  int find_maximum(char * data, int len);
/**
 * @brief  Finds the maximum value in a given data array
 *
 * <Add Extended Description Here>
 *
 * @param data The data array to be analyzed
 * @param len  The length of the given data array
 *
 * @return The max value as an integer
 */

  int find_minimum(char * data, int len);
/**
 * @brief  Finds the minimum value in a given data array
 *
 * <Add Extended Description Here>
 *
 * @param data The data array to be printed
 * @param len  The length of the given data array
 *
 * @return The min value as an integer
 */

  char * sort_array(char * data, int len);
/**
 * @brief  Sorts a given data array from greatest to least
 *
 * <Add Extended Description Here>
 *
 * @param data The data array to be printed
 * @param <Add InputName> <add description here>
 * @param <Add InputName> <add description here>
 *
 * @return Does not return anything
 */




#endif /* __STATS_H__ */
