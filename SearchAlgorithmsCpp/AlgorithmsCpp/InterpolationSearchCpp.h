//
// Created by julian_camacho on 20/5/20.
//

#ifndef SEARCHALGORITHMSCPP_INTERPOLATIONSEARCHCPP_H
#define SEARCHALGORITHMSCPP_INTERPOLATIONSEARCHCPP_H

int interpolationSearch(int pArray[], int pKey, int pIndexMin, int pIndexMax) {
    while (pIndexMax >= pIndexMin){
        int middle = pIndexMin + ((pKey - pArray[pIndexMin]) * (pIndexMax - pIndexMin))/(pArray[pIndexMax] - pArray[pIndexMin]);
        if (pArray[middle] < pKey)
            pIndexMin = middle + 1;
        else if (pArray[middle] > pKey)
            pIndexMax = middle - 1;
        else
            return middle;
    }
    return -1;
}
#endif //SEARCHALGORITHMSCPP_INTERPOLATIONSEARCHCPP_H
