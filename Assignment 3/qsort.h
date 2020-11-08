#ifndef QSORT_H
#define QSORT_H
extern void swap(int * a, int * b);
extern void kthValue(int index[], int n, int k);
extern void sort3(int& a, int& b, int& c);
//adapted from Design and Analysis of algorithms by levitin 159 Lomuto partition
extern int partition1(int A[], int I[], int l, int r);
extern int partition(int A[], int l, int r);
//taken and adapted from  from Design and analysis of algorithms, Levitin 176
extern void quickSort(int A[], int I[], int l, int r);
#endif
