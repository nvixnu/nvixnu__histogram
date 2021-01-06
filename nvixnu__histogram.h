/*
 * nvixnu__histogram.h
 *
 *  Created on: 06/01/2021
 *  Author: Nvixnu
 */

#ifndef NVIXNU__HISTOGRAM_H_
#define NVIXNU__HISTOGRAM_H_

/**
 * Performs the histogram on host
 */
void nvixnu__histogram_host(char *input, const int length, int *output);

/**
 * Performs the histogram on device with naive/basic data partitioning
 */
__global__ void nvixnu__histogram_with_block_partitioning_kernel(char *input, const int length, int *output);

/**
 * Performs the histogram on device with interleaved data partitioning
 */
__global__ void nvixnu__histogram_with_interleaved_partitioning_kernel(char *input, const int length, int *output);

/**
 * Performs the histogram on device with data privatization
 */
__global__ void nvixnu__histogram_privatized_kernel(char* input, const int input_length, int* output, const int output_length);

/**
 * Performs the histogram on device with data aggregation
 */
__global__ void nvixnu__histogram_aggregated_kernel(char* input, const int input_length, int* output, const int output_length);


#endif /* NVIXNU__HISTOGRAM_H_ */
