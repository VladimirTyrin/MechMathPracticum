#ifndef OUTPUT_H
#define OUTPUT_H

#include "datatypes.h"

#include <stdio.h>

/* ----------------------------------------------------------- */

void
print_vector(FILE *, const struct vector * const);


void
print_simple_matrix(FILE *, const struct simple_matrix * const);


void
print_extended_matrix(FILE *,
                      const struct simple_matrix * const,
                      const struct vector * const);


void
print_block_matrix(FILE *, const struct block_matrix * const);

/* ----------------------------------------------------------- */

#endif
