//
// Created by Tianyi Zhang on 10/24/20.
//

#include "concept_model_idiom.h"

int main(){
    TaskQueue taskQueue;
    taskQueue.push(PrintTask());
    taskQueue.push(GrabTask());
    taskQueue.run();
    return 0;
}