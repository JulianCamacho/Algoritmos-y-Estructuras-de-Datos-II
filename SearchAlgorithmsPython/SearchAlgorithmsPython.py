def binarySearch(pArray, pKey, pIndexMin, pIndexMax):
    while pIndexMax >= pIndexMin:
        middle = (pIndexMax + pIndexMin) // 2
        if pArray[middle] < pKey:
            pIndexMin = middle + 1
        elif pArray[middle] > pKey:
            pIndexMax = middle - 1
        else:
            return middle
    return -1


def Sequential_Search(dlist, item):
    pos = 0
    found = False

    while pos < len(dlist) and not found:
        if dlist[pos] == item:
            found = True
        else:
            pos = pos + 1

    return found, pos


def interpolationSearch(pArray, pKey, pIndexMin, pIndexMax):
    while pIndexMax >= pIndexMin:
        middle = int(pIndexMin + ((pKey - pArray[pIndexMin]) * (pIndexMax - pIndexMin)) / (
                    pArray[pIndexMax] - pArray[pIndexMin]))
        if pArray[middle] < pKey:
            pIndexMin = middle + 1
        elif pArray[middle] > pKey:
            pIndexMax = middle - 1
        else:
            return middle
    return -1


arr = [10, 12, 13, 16, 18, 19, 20, 21, 22, 23, 24, 33, 35, 42, 47]

print("El elemento 22 por búsqueda binaria está en la posición: ")
print(binarySearch(arr, 22, 0, len(arr) - 1))
print("El elemento 22 por búsqueda secuencial está en la posición: ")
print(Sequential_Search(arr, 22))
print("El elemento 22 por búsqueda por interpolación está en la posición: ")
print(interpolationSearch(arr, 22, 0, len(arr) - 1))
