//
// Created by julian_camacho on 20/5/20.
//

#ifndef SEARCHALGORITHMSCPP_SEQUENCIALSEARCHCPP_H
#define SEARCHALGORITHMSCPP_SEQUENCIALSEARCHCPP_H

int seqSearch(int list[], int start, int bounds, int key){
    while(start < bounds){
        if(list[start]==key){
            return start;
        } else {
            start++;
        }
    }
    //no match found
    return -1;
}

#endif //SEARCHALGORITHMSCPP_SEQUENCIALSEARCHCPP_H
