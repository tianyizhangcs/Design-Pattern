//
// Created by Tianyi Zhang on 11/4/20.
//

#include "prototype.h"
void foo(Prototype prototype){
    prototype.print();
    prototype.clone().print();
}
int main(){

    PrototypeFactory prototypeFactory;
    prototypeFactory.cloneSavedPrototype(Type::PROTOTYPE_1).print();
    prototypeFactory.cloneSavedPrototype(Type::PROTOTYPE_2).print();
    return 0;

}