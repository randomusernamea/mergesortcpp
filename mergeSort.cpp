#include<iostream>
#include<vector>
#include "mergeSort.h"
using namespace std;


template <class T>
void Merge(T array[], int start, int end){
    int med = (start + end) / 2;
    int  x = start, y = med + 1, z = 0;
    vector<T> aux(end-start + 1);

    while (x <= med && y <= end){
        if (array[x] < array[y]){
            aux[z] = arr[x];
            x++, z++;
        }else{
            aux[z] = arr[y];
            y++, z++;
        }
    }
    while (x <= med){
        aux[z] = array[x];
        x++, z++;
    }
    while (y <= end){
        aux[z] = array[y];
        y++, z++;
    }
    int i = start;
    for (i = start; i <= end; i++){
        array[i] = aux[i - start];
    }
}

template<class T>
void MergeSort(T array[], int start, int end){
    if (start < end){
        int med = (start + end) / 2;
        MergeSort(array, start, med);
        MergeSort(array, med + 1, end);
        Merge(array, start, end);
    }
}