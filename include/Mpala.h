/**
    Footbal Game
    Mpala.h
    Purpose: Mpala header file
    @author Simakis Panagiotis
    @version 1.1 19/08/16
*/
#ifndef MPALA_H
#define MPALA_H
#include "Paiktis.h"

class Mpala
{
    public:
        Mpala();

        int AxisX ; // syntetagmenh x ths mpalas
        int AxisY ;  // syntetagmenh y ths mpalas

        Paiktis *trexwn;
        Paiktis *prwhn ;

        int Anathesh (Paiktis P, Mpala M) ;

};

#endif
