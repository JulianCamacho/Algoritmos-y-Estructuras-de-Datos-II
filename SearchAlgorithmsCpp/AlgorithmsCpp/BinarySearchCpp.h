//
// Created by julian_camacho on 20/5/20.
//

#ifndef SEARCHALGORITHMSCPP_BINARYSEARCHCPP_H
#define SEARCHALGORITHMSCPP_BINARYSEARCHCPP_H
// C++ program to implement recursive Binary Search
#include <bits/stdc++.h>
using namespace std;

// A recursive binary search function. It returns
// location of x in given array arr[l..r] is present,
// otherwise -1
int binarySearch(int pArray[], int pKey, int pIndexMin, int pIndexMax)
{
    while (pIndexMax >= pIndexMin)
    {
        int middle = (int)((pIndexMax + pIndexMin) / 2);
        if (pArray[middle] < pKey)
            pIndexMin = middle + 1;
        else if (pArray[middle] > pKey)
            pIndexMax = middle - 1;
        else
            return middle;
    }
    return -1;
}

#endif //SEARCHALGORITHMSCPP_BINARYSEARCHCPP_H
