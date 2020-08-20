#include <iostream>
#include "AlgorithmsCpp/BinarySearchCpp.h"
#include "AlgorithmsCpp/SequencialSearchCpp.h"
#include "AlgorithmsCpp/InterpolationSearchCpp.h"

using namespace std;

int main() {
    int arr[] = { 2, 3, 4, 10, 40 };
    int x = 10;

    cout << "El elemento 10 por búsqueda binaria se encuentra en la posición: " << binarySearch(arr, x, 0, sizeof(arr)-1) << endl;

    cout << "El elemento 10 por búsqueda secuencial se encuentra en la posición: " << seqSearch(arr, 0, sizeof(arr)-1, x) << endl;

    cout << "El elemento 10 por búsqueda por interpolación se encuentra en la posición: " << interpolationSearch(arr, x, 0, sizeof(arr)-1) << endl;

    return 0;
}
