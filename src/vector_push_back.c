/*
**
** STD::VECTOR IN C
** Rigolo2015, Yannis, 2022
** 
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

#include "Cvector.h"
#include "value.h"

int vector_push_back(Cvector *vector, type value)
{
    int r_value = vector_push_index(vector, value, vector->size);

    return r_value;
}
