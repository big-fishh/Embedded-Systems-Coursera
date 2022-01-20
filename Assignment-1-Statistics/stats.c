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
 * @file stats.c
 * @brief A simple data analytics program which provides basic statistics for a
 * 	  simple set of integers.
 *
 * <Add Extended Description Here>
 *
 * @author Ella Igwe
 * @date 01-17-2022
 *
 */



#include <stdio.h>
#include <stdlib.h>
#include "stats.h"
#include <math.h>

/* Size of the Data Set */
#define SIZE (40)

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */

  /* Statistics and Printing Functions Go Here */
  printf("Your array:\n");
  print_array(test);
  printf("\n");
  printf("Stats:\n");
  print_statistics(test);
}

/* Function definintions */
unsigned char find_len(char * data){
  unsigned char i = 0;
  unsigned char len = 0;
  while(data[i] != '\0'){
    i++;
  }
  len = i;
  return len;
}

void print_statistics(char * data){
  unsigned char mean, median, max, min;
  unsigned char len = find_len(data);

  /*Performing Analytics*/
  mean = find_mean(data, len);
  median = find_median(data, len);
  max = find_maximum(data, len);
  min = find_minimum(data, len);

  /*Printing Stats */
  printf("Mean: %d\n"
	 "Median: %d\n"
	 "Maximum: %d\n"
	 "Minimum: %d\n",
	  mean, median, max, min);
}

unsigned char find_mean(char * data, int len){
  unsigned char total = 0;
  unsigned char mean = 0;
  int i;
  for(i=0; i<len; i++){
    total = total + data[i];
  }
  mean = total/len;
  mean = (unsigned char)floor(mean);

  return mean;
}

unsigned char * sort_array(char * data, int len){
  unsigned char * sorted = (unsigned char*)malloc(len);
  unsigned char temp[len];
  int i;
  int j;
  unsigned char tmp;
  for(i=0; i<len; i++){
    temp[i] = data[i];
  }
  for(i=0; i<len; i++){
    for(j=0; j<len-i-1; j++){
      if(temp[j] < temp[j+1]){
        tmp = temp[j];
	temp[j] = temp[j+1];
	temp[j+1] = tmp;
      }
    }
  }

  for(i=0; i<len; i++){
    sorted[i] = temp[i];
  }
  return sorted;
}

unsigned char find_maximum(unsigned char * data, int len){
  int i;
  unsigned char temp_max = data[0];
  for(i=0; i<len; i++){
    if(data[i] > temp_max || data[i] == temp_max){
      temp_max = data[i];
    }
  }
  unsigned char max = temp_max;
  return max;
}


unsigned char find_minimum(unsigned char * data, int len){
    int i;
    unsigned char temp_min = data[0];
    for(i=0; i<len; i++){
      if(data[i] < temp_min || data[i] == temp_min){
        temp_min = data[i];
      }
    }
    unsigned char min = temp_min;
    return min;
}

unsigned char find_median(char * data, int len){
  unsigned char * sorted = sort_array(data, len);
  int half = len/2;
  unsigned char median;
  if(len%2 == 0){
    //Divide len by 2, group first half on one side, pick len/2  + next number, find mean
    int half = len/2;
    median = (sorted[half] + sorted[half+1])/2;
    median = (unsigned char)floor(median);
  }
  else{
    //Divide len by 2, group first half on one side, pick next number
    median = sorted[half+1];
  }
  return median;
}

void print_array(unsigned char * data){
  int i;
  int j;
  unsigned char len = find_len(data);
  for(i=0; i<len; i++){
    if(i%8 != 0 || i == 0){
      printf("%d ", data[i]);
    }
    else{
      printf("%d\n", data[i]);
    }
  }
  printf("\n");
}
