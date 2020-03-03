/*
	Bubble sort
*/

#ifndef __B_H_
#define __B_H_

#include <cstdlib>
#include <cstdio>

template <typename T>
void bubbleSort(T* dataArray, int num);

#endif

template <typename T>
void bubbleSort(T* dataArray, int num) {
    T x;
	for (int i = 0; i < num; i++) {
		for (int j = 0; j < num - i - 1; j++) {
			if (dataArray[j] > dataArray[j + 1]) {
				x = dataArray[j];
				dataArray[j] = dataArray[j + 1];
				dataArray[j + 1] = x;
			}
		}
	}
} 
